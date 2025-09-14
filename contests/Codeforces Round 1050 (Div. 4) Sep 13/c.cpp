#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ln '\n'
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve() {
    int n, m;
    cin >> n >> m;
    ll points = 0;
    int prev = 0;
    int loc = 0;
    for(int i=0; i<n; i++) {
    	int mt, next;
    	cin >> mt >> next;

    	if((mt-prev) % 2 == 0) {
    		if(loc == next) {
    			points += (mt-prev);
    		} else {
    			points += (mt-prev-1);
    		}
    	} else {
    		if(loc != next) {
    			points += (mt-prev);
    		} else {
    			points += (mt-prev-1);
    		}
    	}

    	prev = mt;
    	loc = next;
    }

    if(prev != m) {
    	points += (m-prev);
    }

    cout << points << ln;
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