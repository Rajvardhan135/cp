#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <cmath>
#include <iostream>
#include <queue>
using namespace std;

#define ll '\n'

// void solve() {
// 	long long n, p;
// 	cin >> n >> p;
// 	vector<long long> a(n), b(n);
// 	priority_queue<pair<long long, long long>> q;

// 	for(int i=0; i<n; i++) {
// 		cin >> a[i];
// 		a[i] = min(a[i], n - 1);
// 	}
// 	for(int i=0; i<n; i++) cin >> b[i];

// 	long long pakA = n;
	
// 	for(int i=0; i<n; i++) {
// 		long long ai = a[i], bi = b[i];
// 		if(bi < p) {
// 			if(pakA > 1) {
// 				if(ai < pakA) {
// 					q.push({bi, ai});
// 					pakA -= ai;
// 					ai = 0;
// 				} else {
// 					q.push({bi, pakA-1});
// 					ai -= (pakA-1);
// 					pakA = 1;
// 				}
// 			}

// 			while(ai > 0 && !q.empty()) {
// 				auto [cost, units] = q.top();
// 				if(cost <= bi) break;
// 				q.pop();
// 				if(units > ai) {
// 					q.push({cost, units-ai});
// 					q.push({bi, ai});
// 					break;
// 				} else {
// 					q.push({bi, units});
// 					ai -= units;
// 				}
// 			}

// 		}
// 	}

// 	long long ans = 0;
// 	while(!q.empty())  {
// 		auto top = q.top();
// 		q.pop();
// 		ans += (top.first * top.second);
// 	}
// 	ans += (pakA * p);

// 	cout << ans << ll;
// }

void solve() {
	int n, p;
	vector<pair<int, int>> vec;
	cin >> n >> p;
	for(int i=0; i<n; i++) {
		int num;
		cin >> num;
		num = min(n-1, num);
		vec.push_back({num, 0});
	}
	for(int i=0; i<n; i++) cin >> vec[i].second;
		
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