#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string seq[] = {
        "2", "22", "222",
        "3", "33", "333",
        "4", "44", "444",
        "5", "55", "555",
        "6", "66", "666",
        "7", "77", "777", "7777",
        "8", "88", "888",
        "9", "99", "999", "9999"};
    string newSeq = "";

    string str;
    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        int idx = (int)str[i] - 65;
        newSeq += seq[idx];
    }
        cout << newSeq;

    return 0;
}