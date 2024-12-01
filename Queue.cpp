#include "Queue.h"

template <typename T>
Queue<T>::Queue()
{
    front = NULL;
    tail = NULL;
}

template <typename T>
void Queue<T>::enqueue(T data)
{
    Node<T> *newNode = new Node<T>;
    newNode->data = data;
    if (isNull())
    {
        front = newNode;
        tail = newNode;
        newNode->next = NULL;
    }

    tail->next = newNode;
    tail = newNode;
}

template <typename T>
T Queue<T>::dequeue()
{
    if (isNull())
    {
        std::cout << "Queue is empty!" << std::endl;
    }
    Node *toDelete = front;
    T deleteVal = toDelete->data;
    front = front->next;
    delete toDelete;
    return deleteVal;
}

template <typename T>
bool Queue<T>::isNull()
{
    if (front == NULL)
        return true;
    else
        return false;
}

template <typename T>
Queue<T>::~Queue()
{
    while (!isNull())
    {
        dequeue();
    }
}

template class Queue<int>;
template class Queue<char>;
template class Queue<float>;
template class Queue<double>;