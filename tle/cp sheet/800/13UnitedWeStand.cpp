#include <iostream>
#include <vector>
#include <map>
using namespace std;

void unitedWeStand() {
	int n;
	cin >> n;

	map<int, int> mp;
	vector<int> a, b, c;

	for(int i=0; i<n; i++) {
		int num;
		cin >> num;
		mp[num] = num;
		a.push_back(num);
	}

	if(mp.size() == 1) cout << -1 << endl;
	else {
		int largestValue = mp.rbegin()->first;
		for(int i=0; i<n; i++) {
			if(a[i] == largestValue) c.push_back(a[i]);
			else b.push_back(a[i]);
		}
		cout << b.size() << " " << c.size() << endl;
		for(int i=0; i<b.size(); i++) cout << b[i] << " ";
			cout << endl;
		for(int i=0; i<c.size(); i++) cout << c[i] << " ";
			cout << endl;
	}
}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		unitedWeStand();
	}
}