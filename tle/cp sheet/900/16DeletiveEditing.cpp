#include <iostream>
#include <map>
using namespace std;

void DeletiveEnding() {
	string s, t;
	map<char, int> mp;
	cin >> s >> t;

	for(int i=0; i<t.size(); i++) {
		mp[t[i]]++;
	}

	int p1 = s.size() - 1, p2 = t.size() - 1;

	while(p1 >= 0 && p2 >= 0) {
		if(s[p1] == t[p2]) {
			mp[t[p2]]--;
			p1--;
			p2--;
		} else if(mp[s[p1]] == 0) {
			p1--;
		} else {
			cout << "NO" << endl;
			return;
		}
	}

	if(p2 == -1) cout << "YES" << endl;
	else cout << "NO" << endl;

}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		DeletiveEnding();
	}
}