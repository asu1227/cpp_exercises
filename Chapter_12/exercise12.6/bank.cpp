/*Heather银行想知道，如果再开设一台ATM，情况将如何。请对
模拟进行修改，以包含两个队列。假设当第一台ATM前的排队人数少
于第二台ATM时，客户将排在第一队，否则将排在第二队。然后再找
出要使平均等候时间为1分钟，每小时到达的客户数应该为多少（注
意，这是一个非线性问题，即将ATM数量加倍，并不能保证每小时处
理的客户数量也翻倍，并确保客户等候的时间少于1分钟）？*/
#include <iostream>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()

#include "queue.h"
const int MIN_PER_HR = 60;
bool newcustomer(double x);

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ios_base;

    std::srand(std::time(0));   // random initializing of rand()

    cout << "Case Study: Bank of Heather Automatic Teller\n";
    cout << "Enter Maximum size of queue: ";
    int qs;
    cin >> qs;
    Queue line1(qs);             // line queue holds up to qs people
    Queue line2(qs);

    cout << "Enter the number of simulation hours: ";
    int hours;
    cin >> hours;
    long cyclelimit = MIN_PER_HR * hours;   // 总共模拟用时（分钟）

    // cout << "Enter the average number of customers per hour: ";
    // double perhour;             // average # of arrival per hour
    // cin >> perhour;
    // double min_per_cust;        // average time between arrivals 客户到达的平均间隔时间
    // min_per_cust = MIN_PER_HR / perhour;
    double perhour = 1;     // 从1开始试验
    double min_per_cust;
    min_per_cust = MIN_PER_HR / perhour;

    Item temp;                  // temp只用来过渡，获得Item值或者输入Item值
    long turnaways = 0;
    long customers = 0;
    long served = 0;
    long sum_line = 0;          // cumulative line length
    int line1_size = 0;
    int line2_size = 0;
    int l1_wait_time = 0;
    int l2_wait_time = 0;
    long line_wait = 0;         // cumulative time in line
    double average_time = 0;

    while (perhour++ && average_time <= 1)  // average_time > 1时跳出循环
    {
        while(!line1.isempty())
        {
            line1.dequeue(temp);
        }
        while(!line2.isempty())             // 不要忘了队列2的装填
        {
            line2.dequeue(temp);
        }

        min_per_cust = MIN_PER_HR / perhour;

        for (int cycle = 0; cycle < cyclelimit; cycle++)    // 每次改变perhour值进行一次循环
        {
            if (newcustomer(min_per_cust))  // 有新客户到来
            {
                if (line1.isfull() && line2.isfull())       // 共同作为判断条件时可用逻辑运算符&&     
                        turnaways++;            // 队列满，客户离开
                else if (line1_size < line2_size)   // 很关键的一步，是模拟现实情况，哪边队列短去哪边
                {
                    customers++;
                    temp.set(cycle);        // cycle为到来时间
                    line1.enqueue(temp);
                    line1_size++;
                }
                else
                {
                    customers++;
                    temp.set(cycle);
                    line2.enqueue(temp);
                    line2_size++;
                }
            }
            if (l1_wait_time <= 0 && !line1.isempty())
            {
                line1.dequeue(temp);
                line1_size--;   //
                l1_wait_time = temp.ptime();   // 产生新的等待时间（处理时间）
                line_wait += cycle - temp.when();   // 计算客户的总共所花费时间
                served++;                           // 即花费时间=排队时间+处理时间        
            }                                       // 排队时间即等待他人的处理时间
            if (l2_wait_time <= 0 && !line2.isempty())
            {
                line2.dequeue(temp);
                line2_size--;   //
                l2_wait_time = temp.ptime();
                line_wait += cycle - temp.when();
                served++;
            }
            if (l1_wait_time > 0)   l1_wait_time--; // 放在一起逻辑上更通顺
            if (l2_wait_time > 0)   l2_wait_time--;
            sum_line += line1.queuecount() + line2.queuecount(); //
        }

        if (customers > 0)
        {
            average_time = (double) line_wait / served;         // 平均花费时间
            cout << "customers accepted: " << customers << endl;
            cout << "  customers served: " << served << endl;
            cout << "         turnaways: " << turnaways << endl;
            cout << "average queue size: " ;
            cout.precision(2);
            cout.setf(ios_base::fixed, ios_base::floatfield);
            cout << (double) sum_line / cyclelimit << endl;
            cout << "average wait time: "
                 << average_time << " minutes\n";
        }
        else
            cout << "No Customers!\n";
    }
    cout << "When there comes " << perhour
         << " people per hour, the average wait time will be about 1 minute.\n";

    cout << "Done!\n";
    return 0;
}

// x = average time, in minutes, between customers
bool newcustomer(double x)
{
    return (std::rand() * x / RAND_MAX < 1);
}