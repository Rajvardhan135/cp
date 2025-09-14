#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ln '\n'
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve() {
    int n;
    cin >> n;
    vector<int> eve, odd;
    for(int i=0; i<n; i++) {
    	int num;
    	cin >> num;
    	if(num % 2 == 0) eve.push_back(num);
    	else odd.push_back(num);
    }

    int a = odd.size(), b = eve.size();

    if(a == 0) {
    	cout << 0 << ln;
    	return;
    } 

    ll ans = 0;

    sort(odd.begin(), odd.end());

    for(int i=0; i<b; i++) ans += eve[i];
   	
   	int state = 0;
   	int l = 0, r = a-1;
   	while(l <= r) {
   		if(state == 0) {
   			ans += odd[r];
   			r--;
   			state = 1;
   		} else {
   			l++;
   			state = 0;
   		}
   	}

   	cout << ans << ln;
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