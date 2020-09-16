#include<iostream>
#include<cstdlib>
using namespace std;
int a[20], n;
long int arr[20] = {}, sum = 0, ans, t;
void fun(int i)
{
    if(i==n)
    {
        ans = min(ans, abs(sum-2*t));
    }
    else{
        a[i] = 0;
        fun(i+1);
        a[i] = 1;
        t+=a[i]*arr[i];
        fun(i+1);
        t-=a[i]*arr[i];
    }
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    ans = sum;
    fun(0);
    cout<<ans;
}
