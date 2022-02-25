#include <bits/stdc++.h>
using namespace std;
#define rep(j,size) for(int j=0;j<size;j++)

void bubblesort(long long int a[],int length)
{
        for (int i = 0; i < length; i++)
        {
                for (int j = 0; j < length-1; j++)
                {
                        if(a[j]>a[j+1])
                        {
                                long long int temp=a[j];
                                a[j]=a[j+1];
                                a[j+1]=temp;
                        }
                }
                
        }
        

}
int main()
{
        int t;
        cin>>t;
        while (t--)
        {
                int n;
                cin>>n;
               long long int arr[n];
                rep(i,n) cin>>arr[i];
                bubblesort(arr,n);
               long long  int mindiff=abs(arr[0]-arr[1]); 
                for (int i = 0; i < n; i++)
                {
                        if(i!=n-1 and arr[i+1]-arr[i]<mindiff)
                        {
                                mindiff=abs(arr[i+1]-arr[i]);
                        }
                }
                
                cout<<mindiff<<endl;
        }       
        
        return 0;
}