#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string removeConsecutiveCharacter(string S)
    {
        string ret;
        ret = S[0];
        int n = S.size();
        for (int i = 1; i < n ; i++)
        {
            if (S[i] != S[i-1]){
                ret += S[i];
            }
        }
        return ret;
    }
};

int main()
{
    int t;
    cin >> t;
    Solution ob;
    cout << ob.removeConsecutiveCharacter("aabaa") << "\n";
}