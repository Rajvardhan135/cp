#include <bits/stdc++.h>
using namespace std;

#define ln '\n'
#define ll long long

const int MOD = 1e9+7;

vector<ll> coins(20);

void precompute() {
    for(int i=0; i<20; i++) {
        ll c = pow(3, i+1) + (i) * pow(3, i-1);
        coins[i] = c;
        // cout << i << " : " << coins[i] << ln;
    }
}

ll expo(ll a, ll b) {
    ll res = 1;
    while(b) {
        if(b & 1) res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}

ll bs(ll limit, ll target) {
    ll l = 0, r = limit, ans = limit;
    while(l <= r) {
        ll m = (l + r) / 2;
        ll cost = m + 3 * (limit - m);
        if(cost <= target) {
            ans = m;
            r = m - 1;
        } else l = m + 1;
    }
    return ans;
}

void solve() {
    ll total = 0;
    ll n, k;
    cin >> n >> k;
    vector<ll> count(20, 0);

    for(int i=19; i>=0; i--) {
        ll e = expo(3, i);
        if(e <= n) {
            n -= e;
            k--;
            count[i]++;
            if(e <= n) {
                n -= e;
                k--;
                count[i]++;
            }
        }
    }

    if(k < 0) {
        cout << -1 << ln;
        return;
    } 

    // for(int i=19; i>=0; i--) {
    //     cout << count[i] << " ";
    // }
    // cout << ln;

    for(int i=19; i>0; i--) {
        // cout << k << ln;
        if(count[i] > 0) {
            k += count[i];
            ll tk = bs(count[i], k);
            // cout << tk << " " << k << " " << count[i] << ln;
            k -= (tk + 3 * (count[i] - tk));
            count[i-1] += 3 * (count[i] - tk);
            count[i] = tk;
        } 
    }

    // for(int i=19; i>=0; i--) {
    //     cout << count[i] << " ";
    // }
    // cout << ln;

    for(int i=19; i>=0; i--) {
        total += (count[i] * coins[i]);
    }
    cout << total << ln;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    precompute();
    while (tc--) {
        solve();
    }

    return 0;
}