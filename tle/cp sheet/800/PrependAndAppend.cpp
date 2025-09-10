#include <iostream>
using namespace std;

void prependAndAppend() {
	int n;
	cin >> n;
	string s;
	cin >> s;

	int l = 0, r = n-1;

	while(l < r && ((s[l] == '0' && s[r] == '1') || (s[l] == '1') && s[r] == '0')) {
		l++;
		r--;
	}

	if(l == r) cout << 1 << endl;
	else if(l > r) cout << 0 << endl;
	else cout << (r - l + 1) << endl;

}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		prependAndAppend();
	}
}

