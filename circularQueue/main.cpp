///Circular Queue ,, 004
#include <iostream>
#include "Queue.h"
using namespace std;

int main()
{
    Queue Q1(7);
    int queueData = 0;

    cout<<"\nEnqueuing.."<<endl;
    for(int i=0;i<6;i++){
        Q1.enqueue(2*i+4)?cout<<2*i+4<<" enqueued successfully\n":cout<<"\nFailed to enqueue "<<2*i+4<<" (full queue)\n";
    }
    cout<<"Tail = "<<Q1.getTail()<<endl;
    cout<<"Head = "<<Q1.getHead()<<endl;

    cout<<"\n\nTesting Display Function..\n";
    Q1.displayQueue();

    cout<<"\n\n\nDequeuing.."<<endl;
    for(int j=0;j<3;j++){
        Q1.dequeue(queueData)?cout<<queueData<<" Dequeued"<<endl:cout<<"\nEmpty Queue"<<endl;;
    }
    cout<<"Tail = "<<Q1.getTail()<<endl;
    cout<<"Head = "<<Q1.getHead()<<endl;

    cout<<"\n\nTesting Display Function..\n";
    Q1.displayQueue();

    return 0;
}
