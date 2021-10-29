//stack implemtation in c++
#include<iostream>
#include<conio.h>
using namespace std;
int top=-1, z[5];
void push(int value)
{
      if(top==4)
    {
        cout<<"\n Stack is Full or overflow!\n";
    }
    else
    {
        top++;
        z[top]=value;
    }
}
void pop()
{
    if(top==-1)
    {
        cout<<"n stack is Empty or underflow!\n";
    }
    else
    {
        top--;
    }
}
void display()
{
    if(top==-1)
    {
        cout<<"\n nothing to display !\n";
    }
    else
    {
        cout<< "\n array is :  \n";
        for(int i=0;i<=top;i++)
        {
            cout<<"\t"<<z[i];
        }
    }
}

int main()
{
    int value, choice;
    do{
        cout<<"\n 1.push \n 2.pop \n 3.display \n 4.exit\n \n input choice:  ";
        cin>>choice;

        if(choice==1)
        {
            cout<<"\n enter a value";
            cin>> value;
            push(value);
        }
        if(choice==2)
        {
            pop();
        }
        if(choice==3)
        {
            display();
        }
    }
    while(choice!=4);
    cout<<"\n\n\n Existing......\n";
    getch();
    return 0;
}