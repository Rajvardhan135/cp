#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ln '\n'
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve() {
    int a, b, q;
    cin >> a >> b >> q;

    vector<ll> s(a), t(b);

    for(auto &it:s) cin >> it;
    for(auto &it:t) cin >> it;

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());


    for(int i=0; i<q; i++) {
    	ll x;
        cin >> x;
        ll ans = 1e10;
        int s1 = lower_bound(s.begin(), s.end(), x) - s.begin();
        int t1 = lower_bound(t.begin(), t.end(), x) - t.begin();
        vector<ll> temp1, temp2;

        if(s1 == 0) temp1.push_back(s[s1]);
        else if(s1 == a) {
            temp1.push_back(s[a-1]);
            if(a != n) temp1.push_back(s[a-2]);
        }
        else {
            if(s[s1] == x) temp1.push_back(s[s1]);
            else {
                temp1.push_back(s[s1]);
                temp1.push_back(s[s1-1]);
            }
        }

        if(t1 == 0) temp2.push_back(t[t1]);
        else if(t1 == b) temp2.push_back(t[b-1]);
        else {
            if(t[t1] == x) temp2.push_back(t[t1]);
            else {
                temp2.push_back(t[t1]);
                temp2.push_back(t[t1-1]);
            }
        }

        for(int i=0; i<temp1.size(); i++) {
            int dist = temp1[i];
            int cost = dist;

            int lb = t.lower_bound(t.begin(), t.end(), dist) - t.begin();
            if(lb == 0) cost += abs(dist - temp2[lb]);
            else if(lb == a) cost += min

        }


    }
    
}

int main() {
    fastio;
    // int t = 1;
    // cin >> t;
    // while (t--) {
    //     solve();
    // }
    solve();
    return 0;
}