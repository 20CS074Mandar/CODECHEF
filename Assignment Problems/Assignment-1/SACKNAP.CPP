#include <iostream>
using namespace std;
#define rep(j, size) for (int j = 0; j < size; j++)

int main()
{
        int t;
        cin >> t;
        while (t--)
        {
                int n, c, k;

                cin >> n >> c >> k;

                long int w[n];
                rep(i, n) cin >> w[i];
                int count = 0;

                for (int i = 0; i < n; i++)
                {
                        int sum = 0;
                        for (int j = i; j < n; j++)
                        {
                                sum += w[j];

                                if (sum >= k && sum <= c)
                                {

                                        if (((j - i) + 1) > count)
                                        {
                                                count = ((j - i) + 1);
                                        }
                                }
                                if (sum > c)
                                        break;
                        }
                }

                cout << count << endl;
        }
        return 0;
}