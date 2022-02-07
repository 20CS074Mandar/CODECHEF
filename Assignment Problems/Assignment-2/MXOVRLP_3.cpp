#include <iostream>
using namespace std;

int main()
{
        int T;
        cin >> T;
        while (T--)
        {
                int n, m;
                cin >> n;
                cin >> m;
                int A[n][2];
                for (int i = 0; i < n; i++)
                {
                        for (int j = 0; j < 2; j++)
                        {
                                cin >> A[i][j];
                        }
                }

                int max = 0;
                while (m--)
                {
                        int counter = 0;
                        for (int i = 0; i < n; i++)
                        {
                                if (m >= A[i][0] && m <= A[i][1])
                                {
                                        counter++;
                                }
                        }
                        if (counter > max)
                        {
                                max = counter;
                        }
                }
                cout << max << "\n";
        }
}