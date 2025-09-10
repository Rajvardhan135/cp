#include <iostream>
#include <map>
#include <vector>
#include <cmath>
using namespace std;

int minNum() {
	int n;
	cin >> n;
	map<int, int> mp;
	mp[0] = 3;
	mp[1] = 1;
	mp[2] = 2;
	mp[3] = 1;
	mp[5] = 1;

	int count = 0;
	int i = 0;
	int ans = 0;
	for(; i<n; i++) {
		int d;
		cin >> d;
		if(count == 8) continue;
		if(mp[d] > 0) {
			mp[d]--;
			count++;
			if(count == 8) ans = i+1;
		}
	}

	return ans;
}

int main() {
	int n; 
	cin >> n;
	while(n--) {
		cout << minNum() << endl;
	}
}