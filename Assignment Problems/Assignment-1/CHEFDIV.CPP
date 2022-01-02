#include <iostream>
using namespace std;
#define rep(j,size) for(int j=0;j<size;j++)

int main()
{
        int t;
        cin>>t;
        while (t--)
        {
                long long int n,x,y;
                cin>>n>>x>>y;
                long long int arr[n];
                int count=0;
                rep(i,n) cin>>arr[i];
                for (int i = 0; i < n; i++)
                {
                        if(arr[i]%y==0 && arr[i]<=x){
                                count++;
                        }
                }
                cout<<count<<endl;
                
        }
        
        return 0;
}