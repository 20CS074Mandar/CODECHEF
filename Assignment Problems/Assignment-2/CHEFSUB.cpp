#include <iostream>
using namespace std;
#define rep(j, size) for (int j = 0; j < size; j++)

//Logic 1
int solve(int a[], int n)
{
        int count = 0;
        int length = 0;
        for (int i = 0; i < n; i++)
        {
                if (a[i] % 2 == 0)
                {
                        count++;
                        length = max(length, count);
                }
                else
                {
                        count = 0;
                }
        }

        length = max(length, count);
        return length;
}
//Logic 2
int solve_2(int a[], int n)
{
        int count = 0;
        int length = 0;
        for (int i = 0; i < n; i++)
        {
                if (a[i] % 2 == 0)
                {
                        count++;
                }
                else
                {
                        length = max(length, count);
                        count = 0;
                }
        }
        if (count)
        {
                length = max(length, count);
        }

        return length;
}

int main()
{
        int t;
        cin >> t;
        while (t--)
        {
                int n;
                cin >> n;
                int a[n];
                rep(i, n) cin >> a[i];
                n = sizeof(a) / sizeof(a[0]);
                cout << solve(a, n) << endl;
        }

        return 0;
}