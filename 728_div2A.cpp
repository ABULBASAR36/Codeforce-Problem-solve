/*#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v;

        if (n % 2 == 0)
        {
            for (int i = 1;i <= n; i++)
            {
                v.push_back(i);
            }
            for (int i =0;i<n; i+=2)
            {
                swap(v[i], v[i + 1]);
            }
        }
        else
        {
            for (int i = 1; i <= n - 3; i++)
            {
                v.push_back(i);
            }
            for (int i =0; i <n - 3; i+=2)
            {
                swap(v[i], v[i + 1]);
            }
            v.push_back(n - 1);
            v.push_back(n);
            v.push_back(n - 2);
        }

        for (int i : v)
            cout << i << ' ';
        cout << endl;
    }

    return 0;
}*/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        vector<ll> v;

        // Initialize the permutation
        for (int i = 1; i <= n; i++) {
            v.push_back(i);
        }

        // Swap adjacent cats to minimize total distance
        for (int i = 0; i < n - 1; i += 2) {
            swap(v[i], v[i + 1]);
        }

        // If n is odd, swap the last two cats to ensure no cat is in its original position
        if (n % 2 == 1) {
            swap(v[n - 1], v[n - 2]);
        }

        // Output the permutation
        for (int i : v)
            cout << i << ' ';
        cout << endl;
    }

    return 0;
}

