#ifndef STACK_H
#define STACK_H

#include "Node.h"

using namespace std;

class Stack
{
    private:
        Node *Top;
        int NodeCount;
        bool isEmpty(){
            return (Top == NULL);
        }

    public:
        Stack(){
            Top = NULL;
            NodeCount = 0;
        }

        int Push(int data_arg){
            Node *newNode = new Node(data_arg);
            if(Top == NULL){
                Top = newNode;
                Top->prev = NULL;
            }
            else{
                newNode->prev = Top;
                Top = newNode;
            }
            NodeCount++;
            return 1;
        }

        int Pop(int& data_arg){
            if(isEmpty())
                return 0;
            data_arg = Top->Data;
            Top = Top->prev;
            NodeCount--;
            return 1;
        }

        int Peak(int& peakData){
            if(isEmpty())
                return 0;
            peakData = Top->Data;
            return 1;
        }

        void Display(){
            Node* current = Top;
            while(current != NULL){
                cout<<endl<<current->Data;
                current = current->prev;
            }
        }
};

#endif // STACK_H
