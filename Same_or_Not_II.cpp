#include <bits/stdc++.h>
using namespace std;

class MyStack
{
public:
    list<int> st;
    void push(int v)
    {
        st.push_back(v);
    };
    void pop()
    {
        if (!st.empty())
            st.pop_back();
    }
    int size(){
        return st.size();
    }
    int top(){
        return st.back();
    }
    bool empty(){
        return st.empty();
    }
};

class MyQueue
{
public:
    list<int> st;
    void push(int v)
    {
        st.push_back(v);
    };
    void pop()
    {
        if (!st.empty())
            st.pop_front();
    }
    int size(){
        return st.size();
    }
    int top(){
        return st.front();
    }
    bool empty(){
        return st.empty();
    }
};

int main()
{

    int n, m;
    cin >> n >> m;
    MyStack st;
    MyQueue q;
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
        if(st.top()!= q.top()){
            cout << "NO";
            return 0;
        }
        st.pop();
        q.pop();
    }
    cout << "YES";

    return 0;
}