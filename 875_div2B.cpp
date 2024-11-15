/*#include<bits/stdc++.h>
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
        ll a[n];
        ll b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        map<int,int>fq;
        for(auto c:a)
        {
            fq[c]++;
        }
        for(auto c:b)
        {
            fq[c]++;
        }
        int mx=0;
        for(int i=0;i<2*n;i++)
        {
           mx=max(mx,fq.second);
        }
        cout<<mx<<endl;
    }
}*/

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll a[n];
        ll b[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        map<int, int> fq;
        for (auto c : a) {
            fq[c]++;
        }
        for (auto c : b) {
            fq[c]++;
        }
        int mx = 0;
        for (auto it = fq.begin(); it != fq.end(); ++it) {
            mx = max(mx, it->second);
        }
        cout << mx << endl;
    }
    return 0;
}


