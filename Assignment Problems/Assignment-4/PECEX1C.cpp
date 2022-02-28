#include <bits/stdc++.h>
using namespace std;
#define rep(i, size) for (int i = 0; i < size; i++)

bool isPermu(long long int arr1[], long long int arr2[], int l, int r)
{
        int n = r - l + 1;
        // sort(arr1,arr1+n);
        // sort(arr2,arr2+n);

        // making a copy of both arrays is important because after sorting the result might be afected in
        // some test cases

        long long int copy1[n], copy2[n];

        // rep(i,n) copy1[i]=arr1[i+l];
        // rep(i,n) copy2[i]=arr2[i+l];

        for (int i = 0; i < n; i++)
        {
                copy1[i] = arr1[i + l];
                copy2[i] = arr2[i + l];
        }
        // now we can sort the copied arrays inorder to get thre required results
        sort(copy1, copy1 + n);
        sort(copy2, copy2 + n);

        for (int i = 0; i < n; i++)
        {
                if (copy1[i] != copy2[i])
                {
                        return false;
                }
        }

        return true;
}
int main()
{
        int t;
        cin >> t;
        while (t--)
        {
                int n;
                cin >> n;
                long long int a[n], b[n];
                rep(i, n) cin >> a[i];
                rep(i, n) cin >> b[i];

                int max = INT_MIN;
                for (int i = 0; i < n; i++)
                {
                        for (int j = i; j < n; j++)
                        {
                                if (isPermu(a, b, i, j))
                                {
                                        if (max < (j - i + 1))
                                        {
                                                max = j - i + 1;
                                        }
                                }
                        }
                }
                if (max == INT_MIN)
                {
                        cout << 0 << endl;
                }
                else
                        cout << max << endl;
        }

        return 0;
}