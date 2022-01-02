#include <iostream>
using namespace std;
#define rep(j, size) for (int j = 0; j < size; j++)

int main()
{
        int t;
        cin >> t;
        while (t--)
        {
                int n;
                long long int k;
                cin >> n >> k;
                long long int r[n], d[n];
                rep(i, n) cin >> d[i];
                rep(i, n) cin >> r[i];
                long long int min = 0;
                long long int cost = 0;
                min = d[0] * k + r[0];
                for (int i = 0; i < n; i++)
                {
                        cost = d[i] * k + r[i];
                        if (cost < min)
                        {
                                min = cost;
                        }
                }
                cout << min << endl;
        }

        return 0;
}