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
    int n, s;
    cin >> n >> s;
    int zero=0, one=0, two=0;
    for(int i=0; i<n; i++) {
        int num;
        cin >> num;
        if(num == 0) zero++;
        else if(num == 1) one++;
        else two++;
    }

    int sum = one + 2 * two;
    if(s == sum || s-sum > 1) cout << -1 << ln;
    else {
        for(int i=0; i<zero; i++) cout << 0 << " ";
        for(int i=0; i<two; i++) cout << 2 << " ";
        for(int i=0; i<one; i++) cout << 1 << " ";
        cout << ln;
    } 
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