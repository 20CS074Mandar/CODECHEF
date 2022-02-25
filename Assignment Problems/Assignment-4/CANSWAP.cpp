#include <bits/stdc++.h>
using namespace std;
#define rep(i, size) for (int i = 0; i < size; i++)

void stringSorts(string &str)
{
        sort(str.begin(), str.end());
}
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
                string duplicate = s;
                stringSorts(duplicate);
                int count = 0;
                for (int i = 0; i < n; i++)
                {
                        if (duplicate[i] != s[i])
                                count++;
                }

                if(count==0 || count==2)
                        cout<<"YES"<<endl;
                else
                        cout<<"NO"<<endl;
        }

        return 0;
}