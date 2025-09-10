#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <cmath>
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

#define ln '\n'
#define ll long long

ll findDist(ll x1, ll y1, ll x2, ll y2) {
	return abs(x1-x2) + abs(y1-y2);
}

void solve() {
	ll n, k, s, e, sx, sy, ex, ey;
	cin >> n >> k >> s >> e;
	vector<pair<ll, ll>> majorCities, cities;
	for(int i=0; i<n; i++) {
		ll x, y;
		cin >> x >> y;
		// cout << x << " " << y << ln;
		if(i == s-1) {
			sx = x;
			sy = y;
		} else if(i == e-1) {
			ex = x, ey = y;
		}
		if(i >= k) cities.push_back({x, y});
		else majorCities.push_back({x, y});
	} 

	// cout << sx << " " << sy << " " << ex << " " << ey << ln;

	ll sDist = -1, eDist = -1;
	for(int i=0; i<k; i++) {
		ll dist = findDist(majorCities[i].first, majorCities[i].second, sx, sy);
		if(sDist == -1) {
			sDist = dist;
		}
		else {
			sDist = min(sDist, dist);
		}

		dist = findDist(majorCities[i].first, majorCities[i].second, ex, ey);
		if(eDist == -1) {
			eDist = dist;
		}
		else {
			eDist = min(eDist, dist);
		}
	}

	// cout << sDist << " " << eDist << ln;

	if(s <= k && e <= k) cout << 0 << ln;
	else if(s <= k) {
		cout << min(findDist(sx, sy, ex, ey), eDist) << ln;
	} else if(e <= k) {
		cout << min(findDist(sx, sy, ex, ey), sDist) << ln;
	} else {
		if(k > 0) cout << min(findDist(sx, sy, ex, ey), sDist + eDist) << ln;
		else cout << findDist(sx, sy, ex, ey) << ln;
	}

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