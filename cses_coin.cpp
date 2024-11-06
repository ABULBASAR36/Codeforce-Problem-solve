#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if(a>b)swap(a,b);
        if((a+b)%3>0)
                cout<<"NO\n";
        else
        {
            if(b>2*a)
                cout<<"NO\n";
            else
            cout<<"YES\n";

        }


    }
}
