#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    if(t==10)
    {
        if(n==1)
        cout<<-1<<endl;
        else
        {
            cout<<1;
            for(int i=1;i<=n;i++)
            cout<<0;
        }
    }
    else
    {

        for(int i=1;i<=n;i++)
        {
            cout<<t;
        }
    }
}
