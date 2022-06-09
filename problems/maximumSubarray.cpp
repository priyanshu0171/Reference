// MAximum sum of subarrays using kadanes algorithm
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[5] = {1,-2, 2,5,4};

    int curr_sum = 0;
    int max_sum = INT_MIN;

    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++) {
        curr_sum+=arr[i];
        if (curr_sum < 0) {
            curr_sum = 0;
        } else {
            max_sum = max(max_sum, curr_sum);
        }
    }

    cout << max_sum << "\n";

    return 0;
}