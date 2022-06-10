#include <bits/stdc++.h>
using namespace std;
bool isValid(string s)
{
    stack<int> st;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else
        {
            if (st.empty())
                return false;
            else if (s[i] == ')' && st.top() != '(')
                return false;
            else if (s[i] == '}' && st.top() != '{')
                return false;
            else if (s[i] == ']' && st.top() != '[')
                return false;
            else
            {
                st.pop();
            }
        }
    }
    if (st.empty())
    {
        return true;
    }

    return false;
}

int main()
{
    string s = "()";
    bool res = isValid(s);
    cout << res;
    return 0;
}
