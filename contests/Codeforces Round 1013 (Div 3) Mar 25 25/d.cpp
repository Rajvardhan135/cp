#include <iostream>
#include <map>
#include <vector>
#include <cmath>
using namespace std;

int minBenchSize() {
	int n, m, k;
	cin >> n >> m >> k;

	int l = 1, h = m;
	int ans = 0;

	while(l <= h) {
		int mid = (l + h) / 2;
		int totalBench = mid * n;
		if(totalBench < k) l = mid + 1;
		else  {
			ans = mid;
			h = mid - 1;
		}
	}
	cout << ans << " " << m - ans  << " ";
	return ans - (m - ans) <= 1 ? 1 : ans - (m - ans);
}

int main() {
	int n; 
	cin >> n;
	while(n--) {
		cout << minBenchSize() << endl;
	}
}