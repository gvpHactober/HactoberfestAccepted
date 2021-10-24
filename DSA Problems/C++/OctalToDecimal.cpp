#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int OctalToDecimal(int x)
{
    int ans =0;
    int r=1;
    while(x>0)
    {
        int s = x%10;
        ans = ans +(s*r);
        r *= 8;  
        x = x/10;
    }
    
    return ans;
}
int main()
{
    int n;
    cin>>n;
   int d = OctalToDecimal(n);
    cout <<d<<endl;
    return 0;
}