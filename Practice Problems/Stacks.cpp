#include <bits/stdc++.h>
#define ll long long int
#define rep(j, size) for (int j = 0; j < size; j++)
using namespace std;
int main()
{
        ll t;
        cin >> t;
        while (t--)
        {
                ll n, c = 0, q = 0;
                cin >> n;
                ll a[n];
                rep(i, n) cin >> a[i];

                vector<ll> v;
                v.push_back(a[0]);
                for (int i = 1; i < n; i++)
                {
                        q = a[i];
                        auto p = upper_bound(v.begin(), v.end(), q);
                        if (p == v.end())
                        {
                                v.push_back(q);
                        }
                        else
                        {
                                *p = q;
                        }
                }
                cout << v.size() << " ";
                for (int i = 0; i < v.size(); i++)
                {
                        cout << v[i] << " ";
                }
                cout <<endl;
        }
        return 0;
}