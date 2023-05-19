#include "queue.h"
#include <cstdlib>

Queue::Queue(int qs) : qsize(qs)
{
    front = rear = nullptr;
    items = 0;
}

Queue::~Queue()
{
    Node * temp;
    while (front != NULL)
    {
        temp = front;
        front = front->next;
        delete temp;
    }
}

bool Queue::isempty() const
{
    return items == 0;
}

bool Queue::isfull() const
{
    return items == qsize;
}

int Queue::queuecount() const
{
    return items;
}

bool Queue::enqueue(const Item &item)
{
    if (isfull())
        return false;
    Node * add = new Node;
    add->item = item;
    add->next = NULL;
    items++;
    if (front == NULL) // if queue is empty
        front = add;
    else
        rear->next = add;
    rear = add;          // rear point to new node
    return true;
}

bool Queue::dequeue(Item &item)
{
    if (front == NULL) // if queue is empty
        return false;
    item = front->item; // set item to first item in queue
    items--;
    Node * temp = front;
    front = front->next;
    delete temp;
    if (items == 0)
        rear = NULL;
    return true;
}

// customer method
    // time set to a random value in the range 1 - 3
    void Customer::set(long when)
    {
        processtime = std::rand() % 3 + 1;
        arrive = when;
    }