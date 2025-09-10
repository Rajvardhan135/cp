#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	while(n--) {
		int num;
		cin >> num;
		if(num % 2 == 0) cout << "NO" << endl;
		else cout << "YES" << endl;
	}

	return 0;
}