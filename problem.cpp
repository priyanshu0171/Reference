#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	auto start = high_resolution_clock::now();

	// code goes here
	// Problem statement
	// Finding minimum and maximum of an array
	vector<int> arr = {200, 145, 568, 245, 782};
	int n = sizeof(arr) / sizeof(arr[0]);

	sort(arr.begin(), arr.end());

	cout << "Maximum Number" << arr[0];
	cout << "\nMinimum number" << arr[n-1];



	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	cout << "\nExecution Time: " << duration.count() << "ms" << "\n";
	return 0;
}