#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        sort(strs.begin(), strs.end());
        
        string x = strs[0];
        int n = strs.size();
        string y = strs[n-1];
        
        string ret = "";
        
        int i=0;
        
        while(i<x.size()) {
            if (x[i] != y[i]) return ret;
            
            ret += x[i];
            i++;
        }
        return ret;
        
    }
};

int main()
{
    vector<string> strs = {"flower", "flow", "flight"};
    Solution ob;
    cout << ob.longestCommonPrefix(strs);
    return 0;
}