#include <iostream>
#include <stack>
using namespace std;
#define rep(j,size) for(int i=0;i<size;i++)
int validParenthesis(string s)
{
        stack<char>expresn;
        for (int i = 0;s[i]!='\0'; i++)
        {
                if (expresn.empty())
                {
                        expresn.push(s[i]);
                }
                else if(expresn.top()=='(' && s[i]== ')' || expresn.top()=='[' && s[i]== ']' || expresn.top()=='{' && s[i]== '}')
                {
                        expresn.pop();
                }
                else
                    expresn.push(s[i]);
        }
        if(expresn.empty())
        {
                return 1;
        }
        else
        {
                return 0;
        }
}
int main()
{
        int t;
        cin>>t;
        while (t--)
        {
                string str;
                cin>>str;
                cout<<validParenthesis(str)<<endl;
        }
        
        return 0;
}