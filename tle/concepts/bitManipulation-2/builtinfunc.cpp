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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // long long n;
    // cin >> n;
    // cout << __builtin_popcountll(n) << ll;
    // cout << __builtin_clzll(n) << ll;
    // cout << __builtin_ctzll(n) << ll;

    // bitset<10> b;
    // bitset<10> c(4);
    // bitset<10> d("1001");

    // cout << b << ll;
    // cout << c << ll;
    // cout << d << ll;

    bitset<10> b1, b2, b3;

    int n, m;
    cin >> n >> m;
    for(int i=0; i<n; i++) {
    	int x;
    	cin >> x;
    	b1[x] = 1;
    }

    for(int i=0; i<m; i++) {
    	int x;
    	cin >> x;
    	b2[x] = 1;
    }

    b3 = b1 & b2;

    cout << b3.count() << ll;

    return 0;
}