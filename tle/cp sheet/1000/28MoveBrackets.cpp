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
	int n;
	string s;
	cin >> n >> s;
	int cnt = 0, flag = 0;
	for(int i=0; i<n; i++) {
		if(s[i] == '(') flag++;
		else if(s[i] == ')' && flag > 0) flag--;
		else cnt++;
	}
	cout << cnt << ln;
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