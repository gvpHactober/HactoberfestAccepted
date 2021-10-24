#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int BinaryToDecimal(int n)
{int t; int l =0; int ans =0;
    while(n>0)
    { int s = n%10;
       int m = pow(2,l) ;
       t = s*m;
        ans = ans + t;
        l +=1;
        n = n/10;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
int ans = BinaryToDecimal(n);
    cout<<ans <<" ";
    return 0;
}