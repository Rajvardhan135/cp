#include <iostream>
using namespace std;

void OddGrassHopper() {
	long long x, n, s, ans;
	cin >> x >> n;
	ans = x;
	for(s=n; s%4 != 0; s--) ;
	for(long long i=s+1; i<=n; i++) ans += (ans % 2 == 0 ? -i : i);
	cout << ans << endl;
}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		OddGrassHopper();
	}
}