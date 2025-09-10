// #include <iostream>
// #include <cmath>
// using namespace std;

// void SwapAndDelete() {
// 	string s;
// 	int zero=0, one=0, cost=0, oneShift=0, zeroShift=0;

// 	cin >> s;

// 	for(int i=0; i<s.size(); i++) {
// 		if(s[i] == '0') zero++;
// 		else one++;
// 	}

// 	for(int i=0; i<s.size(); i++) {
// 		if(s[i] == '0' && oneShift == 0) {
// 			if(one > 0) {
// 				one--;
// 				zero--;
// 				zeroShift++;
// 			} else {
// 				cost = cost + zeroShift + zero;
// 				zeroShift = 0;
// 				zero = 0;
// 			}
// 		} else if(s[i] == '1' && zeroShift == 0) {
// 			if(zero > 0) {
// 				one--;
// 				zero--;
// 				oneShift++;
// 			} else {
// 				cost = cost + oneShift + one;
// 				oneShift = 0;
// 				one = 0;
// 			}
// 		} else if(s[i] == '0') {
// 			oneShift--;
// 		} else {
// 			zeroShift--;
// 		}
// 	}

// 	cout << cost << endl;
// }

// int main() {
// 	int tc;
// 	cin >> tc;
// 	while(tc--) {
// 		SwapAndDelete();
// 	}
// }

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
	string s;
	cin >> s;
	map<int, int> mp;
	mp['0'] = 0;
	mp['1'] = 0;
	for(int i=0; i<s.size(); i++) mp[s[i]]++;

	for(int i=0; i<s.size(); i++) {
		if(s[i] == '0') {
			if(mp['1'] > 0) mp['1']--;
			else {
				cout << (s.size() - i) << ln;
				return;
			}
		} else {
			if(mp['0'] > 0) mp['0']--;
			else {
				cout << (s.size() - i) << ln;
				return;
			}
		}
	}

	cout << 0 << ln;
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