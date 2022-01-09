#include <iostream>
using namespace std;
#include <limits>
#include<math.h>
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
                int max_time = std::numeric_limits<int>::min();
                
                // here i have used prefix sum and range in queries algorithms
                for (int i = 0; i < n; i++)
                {
                        int l,r;
                        cin>>l>>r;
                        count_t[l]+=1;
                        count_t[r+1]-=1;
                }
                
                int sum=0;
                for (int i = 0; i < m; i++)
                {
                       sum+=count_t[i];
                       max_time=max(max_time,sum);                        
                }
                cout<<max_time<<endl;
                
        }

        return 0;
}