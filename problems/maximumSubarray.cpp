#include <bits/stdc++.h>
using namespace std;

int main()
{
    // kadanes algorithm
    int arr[5] = {1, 2, 3, -2, 5};

    int sum = 0;
    int max_sum = INT_MIN;

    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {
        sum += arr[i];
        if (sum < 0)
        {
            sum = 0;
        }
        else
        {
            max_sum = max(max_sum, sum);
        }
    }
    cout << max_sum;

    return 0;
}