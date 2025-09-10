#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void makeItBeautiful() {
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i=0; i<n; i++) {
		cin >> a[i];
	}

	sort(a.begin(), a.end());

	vector<int> newArr;
	int l = 0, r = n-1;

	while(r >= l) {
		if(r == l) {
			newArr.push_back(a[r]);
			break;
		} 
		newArr.push_back(a[r]);
		newArr.push_back(a[l]);
		r--;
		l++;
	}

	if(newArr[0] == newArr[1]) {
		cout << "NO" << endl;
		return;
	}

	cout << "YES" << endl;

	for(int i=0; i<n; i++) {
		cout << newArr[i] << " ";
	}

	cout << endl;

}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		makeItBeautiful();
	}
}