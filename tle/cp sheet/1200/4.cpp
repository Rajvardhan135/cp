#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ln '\n'
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


void solve() {
    int n;
    cin >> n;
    int bn = (n * (n - 1)) / 2;
    map<int, int> mp;

    for(int i=0; i<bn; i++) {
    	int num;
    	cin >> num;
    	mp[num]++;
    }

    int i = n-1;
    for(auto &[key, freq]:mp) {
    	while(freq > 0) {
            cout << key << " ";
            freq -= i;
            i--;
        }
    }
    cout << 1000000000 << ln;

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