#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll mx=0;
        while(n!=0)
        {
       ll rem=n%10;
       n/=10;
       mx=max(mx,rem);
        }
        cout<<mx<<endl;
    }
}
