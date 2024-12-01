#include "Queue.h"
using namespace std;

int main()
{
    int elements[5];
    Queue<int> q;
    cout << "Queue Implementation" << endl;
    cout << "Enter elements in Queue:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> elements[i];
        q.enqueue(elements[i]);
    }

    cout << "The element of queue are:" << endl;
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();

    return 0;
}