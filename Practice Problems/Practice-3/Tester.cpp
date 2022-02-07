#include <iostream>
#include <bits/stdc++.h>
#include <ctime>
#include <cctype>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <string.h>
#include <cstring>
#include <numeric>

using namespace std;
#define fi(n) for (ll i = 0; i < n; i++)
#define fk(n) for (ll k = i + 2; k < n; k++)
#define ci cin >>
#define co cout <<
#define el << '\n'
#define arr      \
        ll a[n]; \
        fi(n) ci a[i];
#define vec vector<ll>
#define civ               \
        vec v(n);         \
        for (auto &x : v) \
                ci x;
#define fiv(v)                                     \
        for (auto i = v.begin(); i < v.end(); ++i) \
                co *i << " ";
typedef long long ll;

int main()
{
        ios::sync_with_stdio(false);
        cin.tie(0);
        stack<ll> s;
        ll T;
        ci T;
        fi(T)
        {
                ll n;
                ci n;
                if (n != -1)
                {
                        ll N;
                        ci N;
                        s.push(N);
                }
                else
                {
                        if (!s.empty())
                        {
                                ll val = s.top();
                                co val el;
                                s.pop();
                        }
                        else
                                co "kuchbhi?" el;
                }
        }
}
