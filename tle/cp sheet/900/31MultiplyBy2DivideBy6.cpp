#include <iostream>
using namespace std;

void Multiply2DivideBy6() {
	long long num, count = 0;
	cin >> num;

	while(num != 1) {
		if(num % 6 == 0) num /= 6;
		else if(num % 3 == 0) num *= 2;
		else {
			cout << -1 << endl;
			return;
		}
		count++;
	}

	cout << count << endl;
}

int main() {
	int tc;
	cin >> tc;
	while(tc--){
		Multiply2DivideBy6();
	}
}