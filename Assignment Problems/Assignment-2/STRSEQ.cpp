#include <iostream>
using namespace std;

bool increasing (int a[],int n)
{
        for (int i = 0; i < n; i++)
        {
                if (a[i]>a[i+1])
                {
                        return false;
                }
                
        }
        return true;
        
}
bool decreasing (int a[],int n)
{
         for (int i = 0; i < n; i++)
        {
                if (a[i]<a[i+1])
                {
                        return false;
                }
                
        }
        return true;
}
int main()
{
        int n;
        cin>>n;
        int a[n];
        for (int  i = 0; i < n; i++)
        {
                cin>>a[i];
        }
        n = sizeof(a) / sizeof(a[0]);
        if (increasing(a,n) || decreasing(a,n))
        {
                cout<<"Yes"<<endl;
        }
        else
        {
                cout<<"No"<<endl;
        }
        
        
        return 0;
}