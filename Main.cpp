#include "Queue.h"
using namespace std;

int main()
{

    Queue<int> q;
    cout << "Queue Implementation" << endl;
    cout << "Entering elements in Queue:" << endl;
    q.enqueue(10);
    q.enqueue(15);
    q.enqueue(19);
    q.enqueue(12);
    q.enqueue(30);

    cout << "The element of queue are:" << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    try
    {
        q.dequeue();
    }
    catch (const exception &e)
    {
        cout << e.what() << endl;
    }

    return 0;
}
