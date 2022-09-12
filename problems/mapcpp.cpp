#include <bits/stdc++.h>
using namespace std;

int main()
{

    map<int, char> mp;
    mp.insert({1, 'a'});
    mp.insert({4, 'b'});
    mp.insert({2, 'c'});

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " : " << it->second << "\n";
    }

    return 0;
}