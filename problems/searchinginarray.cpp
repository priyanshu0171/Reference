#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {3,4,5,1,2}; 
    int key = 5;

    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr, arr + n);

    auto add =  find(arr, arr+n, key);

    if (add != end(arr)) {
        cout << distance(arr, add) << "\n";
    } else {
        cout << "element not present" << "\n";
    }


    return 0;
}