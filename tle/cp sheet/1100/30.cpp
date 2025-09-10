#include <bits/stdc++.h>
using namespace std;

#define ln '\n'
#define ll long long

const int MOD = 1e9+7;

void solve() {
	int n;
	cin >> n;
	vector<int> nums(n);
	for(int i=0; i<n; i++) cin >> nums[i];
	int a = -1, b = -1;
	
	int l = 0, r = n - 1;
	while(l < r) {
		if(nums[l] == nums[r]) {
			l++;
			r--;
		} else {
			a = nums[l];
			b = nums[r];
			break;
		}
	}

	if(a == -1) {
		cout << "YES" << ln;
		return;
	}

	l = 0, r = n - 1;
	while(l < r) {
		if(nums[l] == nums[r]) {
			l++;
			r--;
		} else if(nums[l] == a) l++;
		else if(nums[r] == a) r--;
		else {
			break;
		}
	}

	if(l >= r) {
		cout << "YES" << ln;
		return;
	}

	l = 0, r = n - 1;
	while(l < r) {
		if(nums[l] == nums[r]) {
			l++;
			r--;
		} else if(nums[l] == b) l++;
		else if(nums[r] == b) r--;
		else {
			break;
		}
	}

	if(l >= r) {
		cout << "YES" << ln;
		return;
	}

	cout << "NO" << ln;

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