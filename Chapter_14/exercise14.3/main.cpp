/*定义一个QueueTp模板。然后在一个类似于程序清单14.12的程
序中创建一个指向Worker的指针队列（参见程序清单14.10中的定
义），并使用该队列来测试它。*/
#include <cstring>
#include <iostream>

#include "queueTp.h"
#include "worker.h"

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;


    QueueTp<Worker> q(3);

    int count = 0;
    Worker * pWorker = new Worker[3];
    pWorker[0] = Worker("Jack", 000001);
    pWorker[1] = Worker("Toou", 000002);
    pWorker[2] = Worker("Boub", 000003);

    while (q.queuecount() < 3)
    {
        pWorker[count].Show();
        q.push(pWorker[count++]);
    }
    if (q.queuecount() == 3)
        cout << "The Queue is full, the elements are: \n";
    while (q.queuecount() > 0)
    {
        q.pop(pWorker[0]);
        pWorker[0].Show();
    }
    if (q.queuecount() == 0) std::cout << "The Queue is empty now. \n";
    delete [] pWorker;

    return 0;
}