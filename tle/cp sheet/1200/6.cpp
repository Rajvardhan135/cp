#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ln '\n'
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    if(n == 1) {
    	cout << 1 << ln;
    	return;
    }
    int cnt = 0, flag = -1;


    for(int i=1; i<n; i++) {
    	if(flag == -1) {
    		if(a[i] > a[i-1]) {
    			flag = 1;
    			cnt++;
    		}
    		else if(a[i] < a[i-1]) {
    			flag = 0;
    			cnt++;
    		}
    	} else {
    		if(flag == 1 && a[i] < a[i-1]) {
    			cnt++;
    			flag = 0;
    		} else if(flag == 0 && a[i] > a[i-1]) {
    			cnt++;
    			flag = 1;
    		}
    	}
    }

    cout << (cnt + 1) << ln;
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