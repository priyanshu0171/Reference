#include <bits/stdc++.h>
using namespace std;

// reverse an array
int main()
{

    vector<int> arr = {1, 2, 3};

    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i=n-1;i>=0;i-- ) {
        cout << arr[i] << " ";
    }
    return 0;
}