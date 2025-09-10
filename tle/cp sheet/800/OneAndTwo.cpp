#include <iostream>
#include <vector>
using namespace std;

void oneAndTwo() {
	int n, two = 0;
	cin >> n;
	vector<int> a(n);
	for(int i=0; i<n; i++) {
		cin >> a[i];
		if(a[i] == 2) two++;
	}

	if(two % 2 == 1) {
		cout << -1 << endl;
		return;
	} if(two == 0) {
		cout << 1 << endl;
		return;
	}

	int count = 0;

	for(int i=0; i<n; i++) {
		if(a[i] == 2) count++;
		if(count == two / 2) {
			cout << (i + 1) << endl;
			return;
		}
	}

}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		oneAndTwo();
	}
}