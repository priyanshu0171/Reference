#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 1};

    int n = sizeof(nums) / sizeof(nums[0]);
    bool flag = false;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            flag = true;
            break;
        }
    }
    flag != true ? cout << "false" : cout << "true";



    return 0;
}