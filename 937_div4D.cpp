#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) 
{
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

// Function to find all prime factors of a number
vector<int> primeFactors(int n) {
    vector<int> factors;
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1) {
        factors.push_back(n);
    }
    return factors;
}

int main()
 {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        // If the number is a power of 2, it's a binary decimal
        if ((n & (n - 1)) == 0) {
            cout << "YES\n";
            continue;
        }

        // Find prime factors of the number
        vector<int> factors = primeFactors(n);

        // Check if all prime factors are 2
        bool allBinary = true;
        for (int factor : factors) {
            if (factor != 2 && !isPrime(factor)) {
                allBinary = false;
                break;
            }
        }

        // Output the result
        if (allBinary) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
