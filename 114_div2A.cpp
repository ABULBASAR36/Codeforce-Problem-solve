/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y;
    cin>>n>>x>>y;
    int sum=((y*n+99)/100)-x;
    int ans=max(0,sum);
     cout<<ans<<endl;
}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,x,y;
    cin>>n>>x>>y;
    double sum=((y*n)/100)-x;
    int ans=ceil(sum);
      ans=max(0,ans);
     cout<<ans<<endl;
}
