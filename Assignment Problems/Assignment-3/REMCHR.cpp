#include <iostream>
#include<stack>
using namespace std;

int main()
{
        int t;
        cin>>t;
        while (t--)
        {
                string s;
                cin>>s;
                stack<char>ch;
                int i=0;
                while(i<s.length())
                {
                        if(ch.empty() || s[i]!=ch.top())
                        {
                                ch.push(s[i]);
                                i++;
                        }
                        else
                        {
                                ch.pop();
                                i++;
                        }
                }
                if(ch.empty())
                {
                        cout<<0<<endl;
                }
                else
                {
                        string updated_string=" ";
                        while (!ch.empty())
                        {
                                updated_string=ch.top()+updated_string;
                                ch.pop();
                        }
                        cout<<updated_string.length()-1<<endl;
                }
        }
        
        return 0;
}