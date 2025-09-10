#include <bits/stdc++.h>
using namespace std;

#define ln '\n'
#define ll long long

const int MOD = 1e9+7;

void solve() {
	int n;
	cin >> n;

	vector<int> nums(n), ans;
	for(int i=0; i<n; i++) cin >> nums[i];

	int lg = n + 1;
	
	for(int i=0; i<n; i++) {
		cout << (lg - nums[i]) << " ";
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