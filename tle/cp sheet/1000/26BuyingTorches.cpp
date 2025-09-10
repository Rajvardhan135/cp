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

void solve() {
	ll x, y, k;
	cin >> x >> y >> k;

	ll coalCost = k * y;
	// cout << "coal cost " << coalCost << ln;

	ll trades = (coalCost / (x - 1));
	ll stickProduced = (trades * (x-1)) + 1;
	if(stickProduced <= coalCost) {
		trades++;
		stickProduced += (x-1);
	}
	// cout << "trades done: " << trades << ln;
	// cout << "stick produced " << stickProduced << ln;

	// obtaining coal
	trades += k;
	// cout << "trades done " << trades << ln;

	ll remSticks = stickProduced - coalCost;
	// cout << "remaining sticks " << remSticks << ln; 

	ll reqSticks = k - remSticks;
	if(reqSticks > 0) {
		trades += (reqSticks / (x - 1));
		stickProduced = ((reqSticks / (x - 1)) * (x-1)) + 1;
		if(stickProduced <= reqSticks) {
			trades++;
			stickProduced += (x-1);
		}
	}

	cout << trades << ln;


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