#include <iostream>
#include <map>
#include <vector>
using namespace std;

void forbiddenInteger() {
	int n, k, x;
	cin >> n >> k >> x;

	if(k == n && x != n) {
		cout << "YES" << endl << 1 << endl << n << endl; 
		return;
	}

	vector<int> ans;
	int l = (x == 1) ? 2 : 1, r = (l == 2) ? n-2 : n-1;

	while(l <= r) {
		if(r <= k && x != r) {
			ans.push_back(l);
			ans.push_back(r);
			break;
		} else {
			ans.push_back(l);
			r -= l;
		}
	}

	int sum = 0;
	for(int i=0; i<ans.size(); i++) {
		sum += ans[i];
	}

	if(sum != n) {
		cout << "NO" << endl;
	} else {
		cout << "YES" << endl;
		cout << ans.size() << endl;
		for(int i=0; i<ans.size(); i++) {
			cout << ans[i] << " ";
		}
		cout << endl;
	}


}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		forbiddenInteger();
	}
}