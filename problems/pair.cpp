#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // declare
     vector<vector<int>> v;
    v.push_back({1,2,3});
    v.push_back({4,5,6});
    for (int i=0;i<v.size();i++) {
        for(int j=0;j<v[0].size();j++) {
        cout << v[i][j] << ", ";
        }
    }
    return 0;
}