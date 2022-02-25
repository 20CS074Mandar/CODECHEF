    #include <bits/stdc++.h>
    #include <iostream>
    #include <stack>
    using namespace std;

    int lengthCheck(string exp)
    {
        stack<char> stck;
        int i=0;
        while (i <exp.length())
        {
            if (stck.empty() || exp[i] != stck.top())
            {
                stck.push(exp[i]);
                i++;
            }
            else
            {
                stck.pop();
                i++;
            }
        }
        return stck.size();
    }

    int main()
    {
        int T;
        cin >> T;
        while (T--)
        {
            string S;
            cin >> S;
            int x;
            x = lengthCheck(S);
            cout << x << "\n";
        }
    }
