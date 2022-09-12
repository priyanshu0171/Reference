#include<bits/stdc++.h>
using namespace std;

int main(){
    
    unordered_map<int, char> ump;
    ump.insert({1, 'a'});
    ump.insert({4, 'b'});
    ump.insert({2, 'c'});
    ump.insert({2, 'd'});

    for (auto it=ump.begin();it!=ump.end();it++) {
        cout << it->first << " : " << it->second << "\n";
    }

    return 0;
}