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
    Queue line(qs);             // line queue holds up to qs people

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

    Item temp;
    long turnaways = 0;
    long customers = 0;
    long served = 0;
    long sum_line = 0;          // cumulative line length
    int wait_time = 0;
    long line_wait = 0;         // cumulative time in line
    double average_time = 0;
    while (perhour++ && average_time <= 1)  // average_time > 1时跳出循环
    {
        while(!line.isempty())
        {
        line.dequeue(temp);
        }
        min_per_cust = MIN_PER_HR / perhour;

        for (int cycle = 0; cycle < cyclelimit; cycle++)    // 每次改变perhour值进行一次循环
        {
            if (newcustomer(min_per_cust))  // 有新客户到来
            {
                if (line.isfull())
                    turnaways++;            // 队列满，客户离开
                else
                {
                    customers++;
                    temp.set(cycle);        // cycle为到来时间
                    line.enqueue(temp);
                }
            }
            if (wait_time <= 0 && !line.isempty())
            {
                line.dequeue (temp);
                wait_time = temp.ptime();   // 产生新的等待时间（处理时间）
                line_wait += cycle - temp.when();   // 计算客户的总共所花费时间
                served++;                           // 即花费时间=排队时间+处理时间        
            }                                       // 排队时间即等待他人的处理时间
            if (wait_time > 0)
                wait_time--;
            sum_line += line.queuecount();  // 记录队列中的人数
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