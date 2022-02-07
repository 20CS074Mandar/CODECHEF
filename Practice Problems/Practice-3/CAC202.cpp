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

                queue<int> booked;
                queue<int> arrived;
                stack<int> missed;

                // to check availability
                vector<bool> avail(n + 1, 0);
                for (int i = 0; i < n; i++)
                {
                        booked.push(i);
                        int val;
                        cin >> val;
                        arrived.push(val);
                }

                while (!booked.empty() or !arrived.empty())
                {
                        if (arrived.front() == booked.front() and !arrived.empty() and !booked.empty())
                        {
                                cout << arrived.front() << " ";
                                arrived.pop();
                                booked.pop();
                        }
                        else if (booked.front() < arrived.front() and !booked.empty())
                        {
                                missed.push(booked.front());
                                booked.pop();
                        }
                        else if (booked.empty() or arrived.front() < booked.front())
                        {
                                avail[arrived.front()] = 1;
                                if (arrived.front() == missed.top())
                                {
                                        while (!missed.empty() and avail[missed.top()])
                                        {
                                                cout << missed.top() << " ";
                                                missed.pop();
                                        }

                                }
                                arrived.pop();
                        }
                }
                cout<<endl;
        }

        return 0;
}