//Square root of a number using recursion
#include <iostream>
using namespace std;
#define ll long long

 long long int floorSqrt(long long int x) 
    {
  
    ll n=x,p=(n/2)+1;
    ll low=1,high=p,mid;
    while(low<=high){
        mid=(low+high)/2;
        if(mid*mid==n)
        return mid;
        else if((mid*mid)>n)
        high=mid-1;
        else if((mid*mid)<n)
        low=mid+1;
    }
 if((mid*mid)>n)   
  return mid-1;
  else
  return mid;
    }
int main() {
    int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
	ll Sqrt=floorSqrt(n);
		cout <<Sqrt<< endl;
	}
    return 0;  

}