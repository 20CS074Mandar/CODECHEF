#include <iostream>
using namespace std;
#define rep(j, size) for (int j = 0; j < size; j++)

int main()
{
        int n, q;
        cin >> n >> q;
        long long int arr[n];
        rep(i, n) cin >> arr[i];
        int count = 1;
        while (q--)
        {
                count = 0;
                int l, r;
                long long int x;
                cin >> l >> r >> x;
                int ans = 0;
                for (int i = l; i <= r; i++)
                {

                        if (arr[i - 1] >= x)
                        {
                                ans = abs(r - i) + 1;
                                count = 1;
                                break;
                        }
                }
                if (count == 1)
                {
                        cout << ans << endl;
                }
                else
                        cout << 0 << endl;
        }

        return 0;
}