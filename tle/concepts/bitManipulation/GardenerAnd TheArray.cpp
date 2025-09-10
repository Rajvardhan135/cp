#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void GardenerAndTheArray() {
	int n;
	cin >> n;
	unordered_map<int, int> mp;
	vector<vector<int>> nums(n);

	for(int i=0; i<n; i++) {
		int k;
		cin >> k;
		for(int j=0; j<k; j++) {
			int ki;
			cin >> ki;
			mp[ki]++;
			nums[i].push_back(ki);
		}
	}

	for(auto &vec:nums) {
		int i=0;
		for(; i<vec.size(); i++) {
			if(mp[vec[i]] <= 1) break;
		}
		if(i == vec.size()) {
			cout << "YES" << endl;
			return;
		}
	}

	cout << "NO" << endl;
}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		GardenerAndTheArray();
	}
}