#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ln '\n'
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    int pos = 0, neg = 0, zer = 0;
    for(int i=0; i<n; i++) {
    	int num;
    	cin >> num;
    	nums[i] = num;
    	if(num < 0) neg++;
    	else if(num > 0) pos++;
    	else zer++;
    }

    sort(nums.begin(), nums.end());

    if(zer == 0 && neg % 2 == 0) cout << 0 << ln;
    else if(neg % 2 == 0 && zer != 0) cout << zer << ln;
    else {
    	int total = abs(nums[0]) + 1 + zer;
 		cout << total << ln;
    }


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