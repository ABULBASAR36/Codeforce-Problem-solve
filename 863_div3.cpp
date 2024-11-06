// #include <bits/stdc++.h>
// #define ll long long int
// using namespace std;

// int main() 
// {
//     int t;
//     cin >> t; 

//     while (t--) 
//     {
//         int n, x;
//         cin >> n >> x;

//         string s;
//         cin >> s;

//         bool ok = false;
        
//         for (int i = 0; i < n; i++) 
//         {
//             int tem = s[i] - '0';
            
//             if (x > tem) 
//             {  
//                 char ch = x + '0';
//                 s.insert(i, 1, ch);
//                 ok = true;
//                 break;
//             }
//         }
        
//         if (!ok) 
//         {
//             s += (x + '0');
//         }
        
//         cout << s << endl;
//     }

//     return 0;
// }



#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x1,y1,x2,y2;
        cin>>n>>x1>>y1>>x2>>y2;
        ll res=max((x1-1),(n-y2));
        ll res1=max((n-x2),(y1-1));
        ll ans=min(res,res1);
        cout<<ans<<endl;
    }
}