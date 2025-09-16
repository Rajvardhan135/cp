#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ln '\n'
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int recursive(vector<int> &a, vector<int> &b, long unsigned int i) {
	if(i == a.size()) {
		int sum = 0;
		if(a[i] > a[i-1] && b[i] > b[i-1]) sum++;
		if(b[i] > a[i-1] && a[i] > b[i-1]) sum++;
		return sum;
	}
	int sum = 0;
	if(b[i] > a[i-1] && a[i] > b[i-1]) {
		int t = a[i];
		a[i] = b[i];
		b[i] = t;
		sum += recursive(a, b, i+1);
		b[i] = a[i];
		a[i] = t;
	} if(a[i] > a[i-1] && b[i] > b[i-1]) {
		sum += recursive(a, b, i+1);
	} 
	return sum;
}

void solve() {
	int n;
	cin >> n;
    vector<int> a(n+1, 0), b(n+1, 0), dp(n, 0);
    for(int i=1; i<=n; i++) cin >> a[i];
    for(int i=1; i<=n; i++) cin >> b[i];

    if(n == 1) cout << 2 << ln;
	else {
		int sum = recursive(a, b, 1);
		cout << sum << ln;
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