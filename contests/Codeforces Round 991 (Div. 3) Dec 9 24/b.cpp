#include <iostream>
#include <vector>
#include <string>
using namespace std;

string canSort() {
	int n; cin >> n;
	vector<int> v(n);
	for(int i=0; i<n; i++) {
		int num; cin >> num;
		v[i] = num;
	}
	for(int i=1; i<n; i++) {
		if(v[i-1]-v[i] == 1) {
			int temp = v[i];
			v[i] = v[i-1];
			v[i-1] = temp;
		}
	}

	for(int i=1; i<n; i++) {
		if(v[i] <= v[i-1]) return "NO";
	}

	return "YES";
}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		cout << canSort() << endl;
	}

	return 0;
}