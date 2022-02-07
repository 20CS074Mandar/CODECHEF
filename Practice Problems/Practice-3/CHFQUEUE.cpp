#include <bits/stdc++.h>
using namespace std;

int main()
{
        // your code goes here
        long long int n, k;
        cin >> n >> k;
        long long int i, fear = 1, mod = 1e9 + 7;
        long long int a[n + 1];
        for (i = 1; i <= n; i++)
        {
                cin >>a[i];
        }
        stack<int> s;
        for (i = n; i >= 1; i--)
        {
                while (s.size() && a[s.top()] >= a[i])
                        s.pop();
                if (s.size())
                        fear = (fear * (s.top() - i + 1)) % mod;
                s.push(i);
        }
        cout << fear << endl;
        return 0;
}
