#include <iostream>
using namespace std;
#define rep(j, size) for (int j = 0; j < size; j++)
int main()
{
        int t;
        cin >> t;
        int n;
        while (t--)
        {
                cin >> n;
                int arr[n];
                rep(i, n) cin >> arr[i];
                int e_sum = 0, o_sum = 0;
                for (int i = 0; i < n; i++)
                {
                        if (i % 2 == 0)
                        {
                                e_sum += arr[i];
                        }
                        else
                        {
                                o_sum += arr[i];
                        }
                }
                cout << max(e_sum, o_sum) << endl;
        }

        return 0;
}