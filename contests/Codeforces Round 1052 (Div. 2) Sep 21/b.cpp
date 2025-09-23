#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ln '\n'
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> unique(m+1, -1), freq(n+1, 0);

    for(int i=1; i<=n; i++) {
    	int t;
    	cin >> t;
    	while(t--) {
    		int num;
    		cin >> num;
    		if(unique[num] == -1) {
    			unique[num] = i;
    		} else {
    			unique[num] = 0;
    		}
    	}
    }

    for(int i=1; i<=m; i++) {
    	if(unique[i] == -1) {
    		cout << "NO" << ln;
    		return;
    	} else if(unique[i] != 0) {
    		freq[unique[i]]++;
    	}
    }

    int count = 0;
    for(int i=1; i<=n; i++) {
    	if(freq[i] > 0) count++;
    }

    if(n-count >= 2) cout << "YES" << ln;
    else cout << "NO" << ln;

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