#include <iostream>
#include <cmath>
#include <numeric> 
using namespace std;

void PermutationSwap() {
	int n;
	cin >> n;

	int ans = 0;

	for(int i=1; i<=n; i++) {
		int num;
		cin >> num;

		if(num != i) {
			int dist = abs(num - i);
			if(ans == 0) ans = dist;
			else ans = gcd(ans, dist);
		}
	}

	cout << ans << endl;

}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		PermutationSwap();
	}
}