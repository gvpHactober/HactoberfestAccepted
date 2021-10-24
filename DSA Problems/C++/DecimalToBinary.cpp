#include<bits/stdc++.h>
using namespace std;

int DecimalToBinary(int x)
{
    int t = 1;
    int ans = 0;
    while(t<=x)
    {
        t *=2;     
    }
    t /=2;
    while(t>0)
    {
        int lastDigit = x/t;
        x = x-lastDigit*t;
        t /=2;
        ans = ans*10 +lastDigit;
    }
    return ans;
    
}
int main()
{
    int n;
    cin>>n;
    int c = DecimalToBinary(n);
    cout<<c;
    
    return 0;

}