#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll tt;
    cin>>tt;
    while(tt--)
    {
       ll n,q,m;
       cin>>n>>q>>m;
       ll a,b;
       cin>>a>>b;
       ll x;
       cin>>x;
       vector<ll>v;
       v.push_back(a);
       v.push_back(b);
       sort(v.begin(),v.end());
       if(v[0]<x && v[1]<x)
       {
           cout<<abs(v[1]-n)<<endl;
       }
       else if(x<v[0] && x<v[1])
       {
           cout<<abs(v[0]-1)<<endl;
       }
       else
       {
           ll ok1=abs(x-v[0])-1;
           ll ok2=abs(x-v[1])-1;
           ll min1=min(ok1,ok2);
           ll max1=max(ok1,ok2);
           max1-=min1;
           cout<<min1+1+max1/2<<endl;
       }
    }
    return 0;
}
