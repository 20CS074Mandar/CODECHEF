#include <bits/stdc++.h>
using namespace std;

int main()
{
        int t;
        cin >> t;
        while (t--)
        {
                int n;
                cin >> n;
                string s;
                cin >> s;
                int d;
                cin >> d;
                int isolate[];
                int p;
                for (int i =1; i <=d; i++)
                {
                        cin>>p;
                        isolate[p-1]=i;
                }
                
                queue<int>affect;
                for (int i = 1; s[i-1]!='\0'; i++)
                {
                        if(s[i-1]=='1')
                        {
                                affect.push(i);
                        }
                }
                
                

        }

        return 0;
}