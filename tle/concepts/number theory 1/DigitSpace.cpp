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

const int N = 1e7;
int spf[N];

void findDigits(int num, vector<int> &digits) {
    while(num != 0) {
        int mod = num % 10;
        digits.push_back(mod);
        num /= 10;
    }
}

int formNumber(vector<int> &digits) {
    int n = digits.size();
    int num = 0;
    for(int i=0; i<n; i++) {
        num += digits[i] * pow(10, i);
    }
    return num;
}

void buildSpf() {
    for(int i=0; i<N; i++) spf[i] = i;
    for(int i=2; i*i<N; i++) {
        if(spf[i] == i) {
            for(int j=i*i; j<N; j+=i) {
                if(spf[j] == j) spf[j] = i;
            }
        }
    }
}

void findPrimeFactors(int num, set<int> &s) {
    while(num > 1) {
        s.insert(spf[num]);
        num /= spf[num];
    }
}

void solve() {
    int x, y;
    vector<int> digitsX, digitsY;
    set<int> setX, setY;
    cin >> x >> y;
    
    findDigits(x, digitsX);
    findDigits(y, digitsY);
    
    sort(digitsX.begin(), digitsX.end());
    sort(digitsY.begin(), digitsY.end());
    
    do {
        int num = formNumber(digitsX);
        findPrimeFactors(num, setX);
    } while(next_permutation(digitsX.begin(), digitsX.end()));
    
    do {
        int num = formNumber(digitsY);
        findPrimeFactors(num, setY);
    } while(next_permutation(digitsY.begin(), digitsY.end()));
    
    
    int ans = 1;
    
    for(auto num : setX) {
        if(setY.count(num) > 0) ans = num;
        // cout << num << " ";
    }
    
    cout << ans << ln;
}   

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    buildSpf();

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}