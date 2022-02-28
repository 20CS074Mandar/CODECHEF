#include <bits/stdc++.h>
using namespace std;
#define rep(i, size) for (int i = 0; i < size; i++)

bool isPermu(long long int arr1[],long long int arr2[],int l,int r)
{
        int n=r-l+1;
        sort(arr1,arr1+n);
        sort(arr2,arr2+n);

        for (int i = 0; i <n; i++)
        {
                if(arr1[i]!=arr2[i])
                {
                        return false;
                }
        }
        
        return true;

}
int main()
{
        int t;
        cin>>t;
        while (t--)
        {
                int n;
                cin>>n;
                long long int a[n],b[n];     
                rep(i,n)cin>>a[i];
                rep(i,n)cin>>b[i];

                int max=INT_MIN;
                for (int i = 0; i <=n; i++)
                {
                        for (int j =i; j <n; j++)
                        {
                                if(isPermu(a,b,i,j))
                                {
                                        if(max<(j-i+1))
                                        {
                                                max=j-i+1;
                                        }
                                }
                                
                        }
                        
                }
                cout<<max<<endl;
                
        }
        
        return 0;
}