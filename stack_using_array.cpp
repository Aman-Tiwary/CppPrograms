#include <iostream>
using namespace std;
#define n 5
int stack[n];
int top = -1;
int push()
{
    int element;
    if(top == n)
    {
        cout<<"Element can't be pushed.Stack is overflowing!";
    }
    else
    {
        top++;
        cout<<"\n Enter the number to be pushed: ";
        cin>>element;
        stack[top]=element;
        cout<<"\nPush done";
    }
return 0;
}
int pop()
{
    int element;
    if(top == -1)
    {
        cout<<"Element can't be poped.Stack is empty!";
    }
    else
    {
        element = stack[top];
        top--;
        cout<<"\n"<<element<<" is poped from the stack\n";
    }
return 0;
}
int peek()
{
     cout<<"\nTop element is: "<<stack[top];
return 0;
}
int display()
{
    if(top == -1)
    {
        cout<<"\n Stack is empty";
    }
    else
    {
        for(int i=top;i>=0;i--)
        {
            cout<<stack[i]<<" ";
        }
    cout<<"\nDisplayed all element";
    }
return 0;
}
int main()
{
    int ch;
    int con;
    do
    {
        cout<<"\n1.Push an element into the Stack.\n2.Pop an element into the Stack. \n3.Peek the Top element of the Stack. \n4.Display all the element of the Stack.\n ";
        cout<<"Enter your choice number: ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            default:
                cout<<"Invalid Operation";
        }
        cout<<"\nDo you want do another operation! Press 0: ";
        cin>>con;
    } while (con == 0);
    
    return 0;
}