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
    cin >> n;
    n--;

    int k = 31 - __builtin_clz(n);

    for(int i=n; i>=1; i--) {
        if(k != -1 && !(i & (1 << k))) {
            cout << 0 << " ";
            k = -1;
        }
        cout << i << " ";
    }

    if(k != -1) cout << 0;

    cout << ln;
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