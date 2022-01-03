#include <iostream>
using namespace std;
#define rep(j,size) for(int j=0;j<size;j++)
int main()
{
        int t;
        cin>>t;
        while (t--)
        {
                int n;
                cin>>n;
                int a[n];
                rep(i,n)cin>>a[i];
                int count=0;
                int boast=0;
                for (int i = 0; i < n; i++)
                {
                        count=0;
                        for (int j = 0; j < n; j++)
                        {
                                if (a[i]<a[j])
                                {
                                        count++;
                                }                                
                        }
                        if((n-count)>count)
                                boast++;
                }
                cout<<boast<<endl; 
                               
                
        }
        
        return 0;
}