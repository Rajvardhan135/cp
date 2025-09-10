#include <bits/stdc++.h>
using namespace std;

#define ln '\n'
#define ll long long

const int MOD = 1e9+7;

void solve() {
	int n, k;
	string s;
	cin >> n >> k >> s;


	int count = 0;
	for(int i=0; i<n; i++) if(s[i] == '1') count++;
	
	for(int i=0; i<n; i++) {
		if(s[i] == '1') {
			int c = 1;
			int j = i + 1;
			while(j < n && s[j] == '1') {c++; j++;}
			i = j + 1;
			if(c >= k) {
				cout << "NO" << ln;
				return;
			}
		}
	}

	cout << "YES" << ln;
	int c1 = 1, c2 = count+1;
	for(int i=0; i<n; i++) {
		if(s[i] == '1') {
			cout << c1 << " ";
			c1++; 
		} else {
			cout << c2 << " ";
			c2++;
		}
	}
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