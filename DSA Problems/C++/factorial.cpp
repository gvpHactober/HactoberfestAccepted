#include<iostream>
using namespace std;
int solve(int n)
{
    if(n == 0)
    return 1;

    return n * solve(n-1);
}

int main(){
    int n;
    cin>>n;
    int re = solve(n);
    cout<<re<<endl;
    return 0;
}