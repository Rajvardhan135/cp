#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, q;
	cin >> n >> q;

	vector<long long> arr(n+2, 0);
	vector<long long> pre(n+2, 0);

	for(int i=1; i<=n; i++) cin >> arr[i];
	pre[1] = arr[1];
	for(int i=2; i<=n; i++) {
		pre[i] = arr[i] + pre[i-1];
	}
	cout << endl;
	while(q--) {
		int a, b;
		cin >> a >> b;
		cout << pre[b] - pre[a-1] << endl;
	}

	return 0;
}