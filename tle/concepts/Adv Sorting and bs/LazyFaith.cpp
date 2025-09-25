#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ln '\n'
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve() {
    int s, t, q;
    cin >> s >> t >> q;

    vector<int> shrine(s), temple(t);

    for(auto &it:shrine) cin >> it;
    for(auto &it:temple) cin >> it;

    for(int i=0; i<q; i++) {
    	int x;
    	cin >> x;
    	int sh = lower_bound(shrine.begin(), shrine.end(), x) - shrine.begin();
    	
    	int dist1 = 0, dist2 = 0;

    	if(sh == s) dist1 += x - shrine[s-1];
    	else if(sh == 0) dist1 += shrine[0] - x;
    	else {
    		dist1 += min(shrine[sh] - x, x - shrine[sh-1]);
    	}

    	int tp = lower_bound(temple.begin(), temple.end(), dist1) - temple.begin();

    	// cout << dist1 << " ";

    	if(tp == t) dist1 += dist1 - temple[t-1];
    	else if(tp == 0) dist1 += temple[0] - dist1;
    	else {
    		dist1 += min(temple[tp] - dist1, dist1 - temple[tp-1]);
    	}

    	tp = lower_bound(temple.begin(), temple.end(), x) - temple.begin();
    	if(tp == t) dist2 += x - temple[t-1];
    	else if(tp == 0) dist2 += temple[0] - x;
    	else {
    		dist2 += min(temple[tp] - x, x - temple[tp-1]);
    	}

    	sh = lower_bound(shrine.begin(), shrine.end(), dist2) - shrine.begin();
    	if(sh == s) dist2 += dist2 - shrine[s-1];
    	else if(sh == 0) dist2 += shrine[0] - dist2;
    	else {
    		dist2 += min(shrine[sh] - dist2, dist2 - shrine[sh-1]);
    	}

    	cout << dist1 << " " << dist2 << ln;

    }
}

int main() {
    fastio;
    // int t = 1;
    // cin >> t;
    // while (t--) {
    //     solve();
    // }
    solve();
    return 0;
}