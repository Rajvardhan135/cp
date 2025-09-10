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

void solve() {
    vector<long long> primes = {2, 3, 5, 7};
    long long l, r;
    cin >> l >> r;

    // l = max(l, 11ll);

    long long ans = 0;

    for(int i=0; i<primes.size(); i++) {
        long long num = primes[i];

        long long factors = (r / num) - ((l - 1) / num);

        factors = (num == 2) ? factors : (factors) / (num);

        cout << num << " " << factors << ll;

        ans += (factors);
    }

    cout << ((r - l + 1) - ans) << ll;

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