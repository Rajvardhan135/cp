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

	vector<int> nums(n);
	for(int i=0; i<n; i++) cin >> nums[i];

	sort(nums.begin(), nums.end());
	
	int a, b;
	for(int i=30; i>=0; i--) {
		a = -1, b = -1;
		for(int j=0; j<n; j++) {
			if(!(nums[j] & (1 << i))) break;
			else if(a == -1) a = j;
			else {
				b = j;
				break;
			}
		}
	}

	int sum = nums[a] ^ nums[b];

	for(int i=0; i<n; i++) {
		if(i != a || i != b) 
	}

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