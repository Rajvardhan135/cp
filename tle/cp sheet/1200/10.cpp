#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ln '\n'
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve() {
    int n, q;
    cin >> n >> q;

    vector<ll> a(n), b, pre(n+1, 0);
    map<int, int> mp1, mp2;
    for(auto &it:a) cin >> it;


    for(int i=1; i<=n; i++) pre[i] += pre[i-1] + a[i-1];

    b.push_back(a[0]);
	mp1[a[0]] = 0;
	mp2[a[0]] = 0;

    for(int i=1; i<n; i++) {
    	int num = a[i];
    	if(num < b[b.size()-1]) continue;
    	else if(num == b[b.size()-1]) mp1[num] = i;
    	else {
    		b.push_back(num);
    		mp1[num] = i;
    		mp2[num] = i;
    	}
    }

    // cout << b.size() << ln;
    // for(int i=0; i<b.size(); i++) {
    // 	cout << b[i] << " " << mp1[b[i]] << ln;
    // }

    for(int i=0; i<q; i++) {
    	int k;
    	cin >> k;

    	// cout << "k: " << k << ln;

    	int bind = upper_bound(b.begin(), b.end(), k) - b.begin();

    	if(bind == b.size()) {
    		cout << pre[n] << " ";
    		continue;
    	}

    	// cout << b[bind] << ln;

    	int ind1 = mp1[b[bind]];
    	int ind2 = mp2[b[bind]];
    	// cout << ind1 << " " << ind2 << ln;
    	cout << pre[min(ind1, ind2)] << " ";
    	
    }
    cout << ln;
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