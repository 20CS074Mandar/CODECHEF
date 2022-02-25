#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define rep(j, size) for (int j = 0; j < size; j++)

int main()
{
        int t;
        cin >> t;
        while (t--)
        {
                int n;
                cin >> n;
                int a[n];
                int b[n];
                rep(i, n) cin >> a[i];
                rep(i, n) cin >> b[i];
                sort(a,a+n);
                sort(b,b+n);
                
        }

        return 0;
}