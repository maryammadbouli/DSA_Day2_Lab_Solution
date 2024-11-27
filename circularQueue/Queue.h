#ifndef QUEUE_H
#define QUEUE_H

using namespace std;

/** Circular Queue **/
class Queue{
    private:
        int* Q;
        int Size, Head, Tail;

    /***Member Functions***/
    public:
        /*****Constructor & Destructor*****/
        Queue(int  n=5){
            Head = -1;   Tail = -1;   Size = n;
            Q = new int(Size);
        }

        ~Queue(){
            for(int i=0;i<Size;i++)
                Q[i] = -1;
            delete[] Q;}

        /***Getters***/
        int getHead();

        int getTail();

        /***Other Functions***/
        bool isFull();

        bool isEmpty();

        int enqueue(int n);

        int dequeue(int&);

        void displayQueue();
};


/********************* Queue Class Functions ********************/
int Queue::getHead(){
    return Head;
}

int Queue::getTail(){
    return Tail;
}

bool Queue::isFull(){
    return (((Tail == Size-1) && (Head == 0)) || (Head == (Tail+1)));
}

bool Queue::isEmpty(){
    return (Head == -1);
}

int Queue::enqueue(int n){
    if(isFull())
        return -1;
    if(Head == -1)
        Head = 0;
    Tail = (Tail+1) % Size;
    Q[Tail] = n;
    return 1;

}

int Queue::dequeue(int& qData){
    if(isEmpty())
        return 0;
    qData = Q[Head];
    Q[Head] = -1;
    if(Head == Tail)
        Head = Tail = -1;
    else
        Head = (Head+1) % Size;
    return 1;
}


void Queue::displayQueue(){
    if(isEmpty())
        cout<<"\n\nEMPTY QUEUE\n\n";
    else{
        for(int i=Head;i!=(Tail+1);i=(i+1)%Size)
            cout<<Q[i]<<endl;
    }
}

#endif // QUEUE_H
