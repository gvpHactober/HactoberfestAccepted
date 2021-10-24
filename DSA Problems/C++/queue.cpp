#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    int n; cin>>n;queue<int> q;
    while(n--)
    {
        char ch; int x;
        
        cin>>ch;
        if(ch == 'E')
        {
            cin>>x;
            q.push(x);
            cout<<q.size()<<endl;
        }
        
        else if(ch == 'D')
        {
            if(q.empty())
            {
                cout<<"-1 "<<"0"<<endl;
                continue;
            }
            else{
            int ele = q.front();
            q.pop();
            cout<<ele<<" "<<q.size()<<endl;}
        }
    }
    /*while(!q.empty())
        {
            cout<<" "<<q.front();
            q.pop();
        }*/
    return 0;
}