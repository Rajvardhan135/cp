#include <iostream>
using namespace std;

void unitArray() {
	int n, neg=0, pos=0; 
	cin >> n;
	for(int i=0; i<n; i++) {
		int num;
		cin >> num;
		if(num == -1) neg++;
		else pos++;
	}

	if(pos >= neg && neg % 2 == 0) {
		cout << 0 << endl;
	} else if(pos >= neg && neg % 2 != 0) {
		cout << 1 << endl;
	} else if(pos < neg && neg % 2 == 0) {
		int transfer = neg - (n / 2);
		cout << ((transfer % 2 == 0) ? transfer : transfer + 1)  << endl;
	} else {
		int transfer = neg - (n / 2);
		cout << ((transfer % 2 != 0) ? transfer : transfer + 1)  << endl;
	}

}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		unitArray();
	}
}