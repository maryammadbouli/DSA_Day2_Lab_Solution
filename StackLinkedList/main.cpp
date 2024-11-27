#include <iostream>

#include "Stack.h"

using namespace std;

int main()
{
    int stk_data = 0;
    Stack stk;

    for(int i=0;i<7;i++){
        stk.Push(i*3)?cout<<endl<<i*3<<" pushed successfully":cout<<endl<<"Failed to push "<<i*3;
    }

    stk.Pop(stk_data)?cout<<"\n\n"<<stk_data<<" popped successfully\n":cout<<endl<<"\n\nFailed to pop\n\n";

    cout<<"\nTesting Display Function..";
    stk.Display();
    cout<<endl;

    for(int i=0;i<3;i++){
        stk.Pop(stk_data)?cout<<endl<<stk_data<<" popped successfully":cout<<endl<<"failed to pop";
    }

    stk.Peak(stk_data)?cout<<"\n\n"<<stk_data<<" is the stack peak":cout<<endl<<"Failed. (empty stack)";
    return 0;
}
