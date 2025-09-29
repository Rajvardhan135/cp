#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ln '\n'
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve() {
    ll n;
    string s;
    cin >> n >> s;

    vector<ll> a1, a2, b1, b2;

    ll prevA = 0, prevB = 0;

    for(int i=0; i<n; i++) {
    	if(s[i] == 'b') prevB++;
    	else {
    		ll cost = prevB * prevA;
    		if(a1.size() > 0) cost += a1[a1.size()-1];
    		a1.push_back(cost);
    		prevB = 0;
    		prevA++;
    	}
    }

    prevA = 0, prevB = 0;

    for(int i=n-1; i>=0; i--) {
    	if(s[i] == 'b') prevB++;
    	else {
    		ll cost = prevB * prevA;
    		if(a2.size() > 0) cost += a2[a2.size()-1];
    		a2.push_back(cost);
    		prevB = 0;
    		prevA++;
    	}
    }

    reverse(a2.begin(), a2.end());

    prevA = 0, prevB = 0;

    for(int i=0; i<n; i++) {
    	if(s[i] == 'a') prevA++;
    	else {
    		ll cost = prevB * prevA;
    		if(b1.size() > 0) cost += b1[b1.size()-1];
    		b1.push_back(cost);
    		prevB++;
    		prevA = 0;
    	}
    }

    prevA = 0, prevB = 0;

    for(int i=n-1; i>=0; i--) {
    	if(s[i] == 'a') prevA++;
    	else {
    		ll cost = prevB * prevA;
    		if(b2.size() > 0) cost += b2[b2.size()-1];
    		b2.push_back(cost);
    		prevB++;
    		prevA = 0;
    	}
    }

    reverse(b2.begin(), b2.end());

    ll ans = -1;

    for(int i=0; i<a1.size(); i++) {
    	ll totalCost = a1[i] + a2[i];
    	if(ans == -1) ans = totalCost;
    	else ans = min(totalCost, ans);
    }

    for(int i=0; i<b1.size(); i++) {
    	ll totalCost = b1[i] + b2[i];
    	if(ans == -1) ans = totalCost;
    	else ans = min(totalCost, ans);
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