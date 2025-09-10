#include <iostream>
using namespace std;

void extremelyRound() {
	string s;
	cin >> s;

	int l = s.size();
	int i = s[0] - '0';

	int ans = i + (l - 1) * 9;

	cout << ans << endl;

}

int main() {
	int tc;
	cin >> tc;

	while(tc--) {
		extremelyRound();
	}
}