#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ln '\n'
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll calcAp(ll a, ll d, ll n) {
    return ((n * (2 * a + (n - 1) * d)) / 2);
}

void solve() {
    ll n, a, b;
    cin >> n >> a >> b;
    map<ll, ll> mp1, mp2;

    ll t1 = a, t2 = b;

    for(ll i=2; i*i<=t1; i++) {
        while(t1 % i == 0) {
            mp1[i]++;
            t1 /= i;
        }
    }
    if(t1 != 1) mp1[t1]++;

    for(ll i=2; i*i<=t2; i++) {
        while(t2 % i == 0) {
            mp2[i]++;
            t2 /= i;
        }
    }
    if(t2 != 1) mp2[t2]++;

    ll pro = 1;

    for(auto &[key, pair]:mp1) {
        if(mp2.find(key) != mp2.end()) {
            pro *= max(pow(key, pair), pow(key, mp2[key]));
        } else {
            pro *= pow(key, pair);
        }
    }
    for(auto &[key, pair]:mp2) {
        if(mp1.find(key) == mp1.end()) {
            pro *= pow(key, pair);
        }
    }

    ll f1 = (n / a) - (n / pro);
    ll f2 = (n / b) - (n / pro);

    // cout << f1 << " " << f2 << " ";

    ll ans = calcAp(n, -1, f1) - calcAp(1, 1, f2);
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