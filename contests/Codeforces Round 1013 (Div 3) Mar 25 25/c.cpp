#include <iostream>
#include <map>
#include <vector>
#include <cmath>
using namespace std;

void printPermutation() {
	int n;
	cin >> n;
	if(n % 2 == 0) {
		cout << -1 << endl;
		return;
	}
	vector<int> v;
	v.push_back(0);
	int length = 1;	
	for(int i=1; i<n; i++) {
		int nextInd = (i + length) % n;
		v.push_back(nextInd);
		length++;
	}

	for(int i=0; i<n; i++) {
		cout << v[i] + 1 << " ";
	}
	cout << endl;
}

int main() {
	int n; 
	cin >> n;
	while(n--) {
		printPermutation();
	}
}