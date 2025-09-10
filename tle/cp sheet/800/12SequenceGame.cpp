#include <iostream>
#include <vector>
using namespace std;

void generateSequence() {
	int n;
	cin >> n;
	vector<int> a, b, c;

	for(int i=0; i<n; i++) {
		int ai;
		cin >> ai;
		a.push_back(ai);
	}

	b.push_back(a[0]);
	for(int i=1; i<n; i++) {
		b.push_back(a[i]);
		if(a[i] < a[i-1]) b.push_back(a[i]);
	}

	cout << b.size() << endl;
	for(int i=0; i<b.size(); i++) {
		cout << b[i] << " ";
	}
	cout << endl;

}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		generateSequence();
	}
}