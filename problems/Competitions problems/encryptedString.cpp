#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string str;
    int k;

    cin >> n;
    cin >> str;
    cin >> k;

    for (int i = 0; i < n; i++)
    {
        int asc = str[i];
        if ((asc > 64 && asc < 91) || (asc > 96 && asc < 123))
        {
            if (asc > 64 && asc < 91)
            {
                if (asc+k > 90) {
                    asc = asc + k - 26;
                    cout << (char)asc;
                } else {
                    asc = asc + k;
                    cout << (char)asc;
                }
            }
            else if (asc > 96 && asc < 123)
            {
                if (asc + k > 122)
                {
                    asc = asc + k - 26;
                    cout << (char)asc;
                }
                else
                {
                    asc = asc + k;
                    cout << (char)asc;
                }
            }
        } else {
           cout << str[i];
        }
    }

    return 0;
}
