#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    queue<string> q;
    long long t;
    cin >> t;
    while (t--)
    {
        int i;
        string str;
        cin >> i;
        if (i == 0)
        {
            cin >> str;
            q.push(str);
        }
        else
        {
            if (!q.empty())
            {
                cout << q.front() << endl;
                q.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }
    return 0;
}