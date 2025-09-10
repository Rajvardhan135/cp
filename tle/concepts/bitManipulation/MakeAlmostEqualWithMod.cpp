#include <iostream>
#include <vector>
#include <set>
using namespace std;

void MakeAlmostEqualWithMod() {
	int n;
	cin >> n;
	vector<long long> nums(n);
	for(auto &it:nums) cin >> it;

	for(int i=1; i<=61; i++) {
		long long num = (1ll << i);
		set<long long> st;
		for(auto it:nums) {
			st.insert(it % num);
			if(st.size() > 2) break;
		}
		if(st.size() == 2) {
			cout << num << endl;
			return;
		}
	}
}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		MakeAlmostEqualWithMod();
	}
}
