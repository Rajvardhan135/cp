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
    multiset<int> ms;
    for(auto &it:a) cin >> it;

    sort(a.begin(), a.end());
	
	for(int i=0; i<n; i++) {
		ms.insert(a[i]);
	}

	int cnt = 0;
	for(int i=0; i<n; i++) {
		int num = a[i];
		if(ms.count(num) > 0) {
			cnt++;
			while(ms.count(num) > 0) {
				auto it = ms.find(num);
				ms.erase(it);
				num++;
			}
		}
	}

	cout << cnt << ln;
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