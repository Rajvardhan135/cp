#include <iostream>
using namespace std;

void ZeroOneGame() {
	string s;
	int zero=0, one=0;

	cin >> s;

	for(int i=0; i<s.size(); i++) {
		if(s[i] == '1') one++;
		else zero++;
	}

	if(min(one, zero) % 2 == 0) cout << "NET" << endl;
	else cout << "DA" << endl;

}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		ZeroOneGame();
	}
}
