#ifndef QUEUETP_H
#define QUEUETP_H

template <typename T>
class QueueTp
{
private:
    enum { Q_SIZE = 10 };                                   //
    struct Node                                             //
    {
        T item;                                             //
        Node * next_ptr;                                    //
    };
    Node * front;                                           //
    Node * rear;                                            //
    int items;                                              //
    const int qsize;                                        //
public:
    QueueTp(int qs = Q_SIZE);
    ~QueueTp();
    int queuecount() const { return items; }                //
    bool isfull() const { return items == qsize; }
    bool isempty() const { return items == 0; }         //
    bool push(const T& item);                               //
    bool pop(T& item);                                      //
};

template <typename T>
QueueTp<T>::QueueTp(int qs) : qsize(qs)
{
    front = rear = nullptr;
    items = 0;
}

template <typename T>
QueueTp<T>::~QueueTp()
{
    Node * temp;
    while(front != nullptr)
    {
        temp = front;
        front = front->next_ptr;
        delete temp;
    }
}

template <typename T>
bool QueueTp<T>::push(const T& item)
{
    if (isfull()) return false;
    Node * add = new Node;
    if (isempty())
    {
        add->item = item;
        add->next_ptr = nullptr;
        front = rear = add;
    }
    else
    {
    add->item = item;
    add->next_ptr = nullptr;
    rear->next_ptr = add;
    rear = add;                                                 //更新队尾结点
    }
    items++;
    return true;
}

template <typename T>
bool QueueTp<T>::pop(T & item)
{
    if (isempty()) return false;

    item = front->item;
    Node * temp;
    temp = front;
    front = front->next_ptr;
    delete temp;                                                //删除不使用的结点
    items--;

    return true;
}

#endif