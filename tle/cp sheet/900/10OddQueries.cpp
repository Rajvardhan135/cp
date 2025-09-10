#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void OddQueries() {
	int n, q;
	cin >> n >> q;

	vector<int> diff1(n+2, 0), diff2(n+2, 0);
	vector<int> nums(n+2, 0);

	for(int i=1; i<=n; i++) {
		int num;
		cin >> nums[i];
	}

	int odd1 = 0, odd2 = 0;

	for(int i=1; i<=n; i++) {
		diff1[i] = odd1;
		diff2[n-i+1] = odd2;
		if(nums[i] % 2 == 1) odd1++;
		if(nums[n-i+1] % 2 == 1) odd2++;
	}

	for(int i=0; i<q; i++) {
		int l, r, k;
		cin >> l >> r >> k;

		int odd = 0;

		if((r-l+1) % 2 == 1 && k % 2 == 1) odd++;
		odd += (diff1[l] + diff2[r]);

		if(odd % 2 == 0) cout << "NO" << endl;
		else cout << "YES" << endl;
	}


}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		OddQueries();
	}
}
