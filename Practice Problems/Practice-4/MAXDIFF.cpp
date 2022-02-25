#include <bits/stdc++.h>
using namespace std;
#define rep(i, size) for (int i = 0; i < size; i++)

void bubblesort(int a[], int n)
{
        int last = n;
        for (int i = 0; i < n - 1; i++)
        {
                int exch = 0;
                for (int j = 0; j < last-1; j++)
                {
                        if(a[j]>a[j+1])
                        {
                                k[i]=k[i+1];
                                exch+=1;
                        }
                }
                if(exch==0)
                {
                        return;
                }
                else
                        last=last-1;
        }
}
int main()
{
        int t;
        cin >> t;
        while (t--)
        {
                int n, k;
                cin >> n >> k;
                int a[n];
                rep(i, n) cin >> a[i];
        }

        return 0;
}