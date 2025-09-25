#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ln '\n'
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int recursiveBs(vector<int> &arr, int l, int h, int target) {
	if(l > h) return -1;
	int m = (l + h) / 2;
	if(arr[m] == target) return m;
	if(arr[m] < target) {
		return recursiveBs(arr, m+1, h, target);
	} else {
		return recursiveBs(arr, l, m-1, target);
	}
}

int bs(vector<int> &arr, int l, int h, int target) {
	int ind = lower_bound(arr.begin(), arr.end(), target) - arr.begin();
	return (ind == arr.size() || arr[ind] != target) ? -1 : ind;
}

// find square root
bool isSqrt(ll x, ll n) {
	return x <= (n / x);
}

void bsFindSqr(ll n) {
	ll l = 0, r = 1e18, ans = -1;

	auto helper = [&](ll m) -> bool{
		return (m <= (n / m));
	};

	while(l <= r) {
		ll m = (l + r) / 2;
		if(helper(m)) {
			ans = m;
			l = m + 1;
		} else {
			r = m - 1;
		}
	}
	cout << ans << ln;
}

void solve() {
    int n, target;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    cin >> target;

	// int ans = recursiveBs(arr, 0, n-1, target);
	// int ans = bs(arr, 0, n-1, target);
	// cout << ans << ln;
	// ll n = 16;
	// bsFindSqr(n);
	// cout << ans << ln;

	// implementation of lower bound

	int ans = n;
	
	auto helper = [&](auto &&self, int l, int r) -> void{
		if(r < l) return;
		int m = (l + r) / 2;
		if(arr[m] < target) {
			return self(self, m+1, r);
		} else {
			ans = m;
			return self(self, l, m-1);
		}
	};

	helper(helper, 0, n);

	cout << ans << ln;


}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}