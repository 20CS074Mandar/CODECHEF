#include <iostream>
using namespace std;
#include <limits>
#define rep(j, size) for (int j = 0; j < size; j++)
int main()
{
        int t;
        cin >> t;
        while (t--)
        {
                int n;
                cin >> n;
                int m;
                cin >> m;
                int count_t[m];
                rep(i, m) count_t[i] = 0;
                int max = std::numeric_limits<int>::min();
                for (int i = 0; i <n; i++)
                {
                        int l, r;
                        cin >> l >> r;
                        for (int j = l; j <= r; j++)
                        {
                                count_t[j]++;
                        }
                }

                for (int i = 0; i < m; i++)
                {
                        if (max<count_t[i])
                        {
                                max=count_t[i];
                        }
                        
                }
                cout<<max<<endl;
                
        }

        return 0;
}