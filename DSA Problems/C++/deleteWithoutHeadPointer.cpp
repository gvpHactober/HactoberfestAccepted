#include<bits/stdc++.h>
using namespace std;
//code not working properly, problem from geeksforgeeks, question Delete without Head Pointer.
class node{
public:
int data;
node* next ;

node(int val)
{
    data = val;
    next = NULL;
}
}*head ;

node* findnode(node* &head, int x)
{
    node* temp = head;
    while(temp!=NULL)
    {
        if(temp->data == x)
        break;

        temp = temp->next;
    }

    return temp;
}

void delNode(node* del)
{
    node* curr = del->next;
    del->data = curr->data;
    del->next = del->next->next;
    delete curr;
}

void createLL()
{
    int n, value;
    cin>>n;
     node* temp;
    for(int i = 0; i<n; i++)
    {
       
        if(i==0)
        {
            cin>>value;
            node *head = new node(value);
            temp = head;
            continue;
        }
        else {
            temp->next = new node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

void printLL(node* head)
{
    if(head == NULL)
    return;

    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(void){
    int n, value, i;int x;

    createLL();
    
    cin>>x;
    node* del = findnode(head, x);
    if(del!=NULL && del->next !=NULL)
    {
        delNode(del);
    }
    printLL(head);

    return(0);
}