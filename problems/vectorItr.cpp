#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    for (int i = 0; i < 5; i++)
    {
        v.push_back(i+1);
    }
    auto jt = v.begin()+2;
    v.erase(jt);
    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }

    cout << "\n" << v.back();
    return 0;
}