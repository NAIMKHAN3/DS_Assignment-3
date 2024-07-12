#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    stack<int> st;
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        st.push(v);
    }
    for (int i = 0; i < m; i++)
    {
        int v;
        cin >> v;
        q.push(v);
    }
    if (st.size() != q.size())
    {
        cout << "NO";
        return 0;
    };
    while(!st.empty()){
        if(st.top()!= q.front()){
            cout << "NO";
            return 0;
        }
        st.pop();
        q.pop();
    }
    cout << "YES";

    return 0;
}