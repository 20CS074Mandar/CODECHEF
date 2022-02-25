#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define rep(i, size) for (int i = 0; i < size; i++)
int main()
{
        int t;
        cin >> t;
        while (t--)
        {
                int n;
                cin >> n;
                long long int arr[n];
                rep(i, n) cin >> arr[i];
                sort(arr,arr+n);
                long long int max=arr[n-1];
                int count=0;
                for (int i = 0; i < n-1; i++)
                {
                        if(arr[i]==max)
                        {
                                count++;
                        }
                }
                if(count>=1)
                {
                        cout<<"fight:("<<endl;
                }
                else
                {
                        cout<<"peace:)"<<endl;
                }
                

        }

        return 0;
}