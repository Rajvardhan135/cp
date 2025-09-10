#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    long long a, b, c, d;
    cin >> n;
    
    a = 0, b = 0, c = 0, d = n;

    a = a | (1ll << 32);

    b = b | (1ll << 33);

    c = c | (1ll << 34);
    d = d | (1ll << 34);

    a = a | (1ll << 35);
    b = b | (1ll << 35);
    d = d | (1ll << 35);


    cout << a << " " << b << " " << c << " " << d << endl;
   
}

int main() {
	int tc;
    cin >> tc;
    while(tc--) {
        solve();
    }

    cout << (((38654705664 & 42949672960) | 17179869184) ^ 51539607553) << endl;
}


