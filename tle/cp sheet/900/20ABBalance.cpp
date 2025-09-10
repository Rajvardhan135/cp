#include <iostream>
using namespace std;

void ABBalance() {
	string s;
	int ab = 0, ba = 0, n;

	cin >> s;
	n = s.size();

	for(int i=1; i<n; i++) {
		if(s[i] == 'a' && s[i-1] == 'b') ba++;
		else if(s[i] == 'b' && s[i-1] == 'a') ab++;
	}


	if((ab + ba) % 2 == 0) cout << s << endl;
	else {
		if(s[n-1] == 'a') s[n-1] = 'b';
		else s[n-1] = 'a';
		cout << s << endl;
	}

}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		ABBalance();
	}
}