#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <cmath>
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

#define ln '\n'
#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> nums(n, -1);
	for(int i=1; i<n; i+=2) {
		if(i+1 == n) nums[i] = 2;
		else nums[i] = 3;
	}
	for(int i=0; i<n; i++) cout << nums[i] << " ";
	cout << ln;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}