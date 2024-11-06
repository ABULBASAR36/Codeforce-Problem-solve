#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    vector<int> dp(n + 1, INT_MIN);
    dp[0] = 0;

    for (int len = a; len <= n; len += a)
    {
        dp[len] = max(dp[len], dp[len - a] + 1);
    }

    for (int len = b; len <= n; len += b)
    {
        dp[len] = max(dp[len], dp[len - b] + 1);
    }

    for (int len = c; len <= n; len += c)
    {
        dp[len] = max(dp[len], dp[len - c] + 1);
    }

    cout << dp[n]+1<< endl;

    return 0;
}
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int dp[n+1];//using dynamic programming bottom up approach
    dp[0]=0;
    int x,y,z;
    for(int i=1;i<=n;i++)
    {
        x=INT_MIN,y=INT_MIN,z=INT_MIN;
        if(i>=a)
            x=dp[i-a];
        if(i>=b)
            y=dp[i-b];
        if(i>=c)
            z=dp[i-c];
        dp[i]=1+max(z,max(x,y));
    }
    cout<<dp[n]<<endl;
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int ans=0;
    for(int x=0;x<4000;x++)//xa+yb+zc=n;
                           //x+y+z=ans;
    {
        for(int y=0;y<4000;y++)
        {
            int zc=n-(x*a+y*b);//iterator approach
            if(zc<0)
                break;
            double z=(zc/(double)c);
            if(z==(int)z)
                ans=max(ans,(int)z+x+y);
        }
    }
    cout<<ans<<endl;
}*/


