#include <iostream>
using namespace std;

void ThreeIndices() {
	int n, i = -1, j = -1, k = -1, num1 = -1, num2 = -1, num3 = -1;
	cin >> n; 

	for(int m=1; m<=n; m++) {
		int num;
		cin >> num;

		if(i != -1 && j != -1 && k != -1) continue;

		if(num1 == -1) {
			i = m;
			num1 = num;
		}
		else if(num2 == -1 && num < num1) {
			i = m;
			num1 = num;
		}
		else if(num2 == -1 && num > num1) {
			j = m;
			num2 = num;
		}
		else if(num > num2) {
			j = m;
			num2 = num;
		}
		else if(num2 != -1 && num < num2) {
			k = m;
			num3 = num;
		}
	}

	if(k != -1 && i != -1 && j != -1) {
		cout << "YES" << endl;
		cout << i << " " << j << " " << k << endl;
	} else cout << "NO" << endl;
}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		ThreeIndices();
	}
}
