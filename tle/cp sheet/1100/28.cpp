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

	int ans = 0, i = n - 1, val = nums[i];
	
	while(i >= 0) {
		for(; (i>=0&&nums[i]==val); i--);
		int flag = 0, len = n - i - 1;
		for(int k=0; k<len; k++) {
			if(i >= 0) {
				flag = 1;
				nums[i] = val;
			} else break;
			i--;
		}
		ans += flag;
	}

	cout << ans << ln;
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