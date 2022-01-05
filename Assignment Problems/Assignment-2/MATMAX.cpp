#include <iostream>
#include<limits>
using namespace std;

int main()
{
        int t;
        cin>>t;
        while (t--)
        {
                int n,m;
                cin>>n>>m;
                int max=0,min=0;
                int DiffValue=0;
                for (int i = 0; i < n; i++)
                {
                        max=std::numeric_limits<int>::min();
                        min=std::numeric_limits<int>::max();

                        for (int j = 0; j < m; j++)
                        {
                                int a;
                                cin>>a;
                                if (a>max)
                                {
                                        max=a;
                                }
                                if (a<min)
                                {
                                        min=a;
                                }
                        }

                        if ((max-min)>DiffValue)
                        {
                             DiffValue=max-min;
                        }
                        
                }
                
                cout<<DiffValue<<endl;
        }
        
        return 0;
}