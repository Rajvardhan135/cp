#include <iostream>
#include <string>
using namespace std;

void determineBalancedBracket() {
	string s;
	cin >> s;
	int c = 0;
	int flag = 0;
	for(int i=0; i<s.size()-1; i++) {
		if(s[i] == '(') c++;
		else {
			c--;
			if(c == 0) {
				cout << "YES" << endl;
				return;
			}
		}
	}
	cout << "NO" << endl;
}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		determineBalancedBracket();
	}
}