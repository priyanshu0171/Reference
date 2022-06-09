#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {7, 3, 2, 4, 9, 12, 56};
    int m = 3;

    int min_diff = INT_MAX; // positive infinity

    int n = sizeof(arr)/ sizeof(arr[0]);

    sort(arr, arr+n);

    for (int i=0;i<n-m;i++) {
        int curr_dif = arr[i+m-1] - arr[i];
        min_diff = min(min_diff, curr_dif);
    }

    cout << min_diff << "\n";


    return 0;
}