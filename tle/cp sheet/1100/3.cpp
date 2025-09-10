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
	vector<ll> nums(n), temp, pre(n, 0);
	for(int i=0; i<n; i++) cin >> nums[i];

	temp = nums;
	sort(temp.begin(), temp.end());
	for(int i=1; i<n; i++) cout << temp[i] << " ";
	cout << ln << ln;
	pre[0] = temp[0];
	for(int i=1; i<n; i++) pre[i] = temp[i] + pre[i-1];
	for(int i=1; i<n; i++) cout << pre[i] << " ";
	cout << ln << ln;	

	for(int i=0; i<1; i++) {
		int num = nums[i];
		int l = 0, r = nums.size() - 1;

		while(l <= r) {
			int m = (l + r) / 2;
			cout << temp[m] << ln;
			if(num > temp[m]) l = m + 1;
			else if(num == temp[m]) {
				if(m != n-1 && pre[m] > temp[m+1]) l = m + 1;
				else r = m - 1;
			} 
			else if(m != 0 && pre[m-1] > temp[m]) l = m + 1;
			else r = m - 1;
		}
		cout << r << " ";
	}

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