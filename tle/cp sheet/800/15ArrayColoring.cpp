#include <iostream>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		int n; 
		cin >> n;

		int oddNum = 0;
		for(int i=0; i<n; i++) {
			int num;
			cin >> num;
			if(num % 2 != 0) oddNum++;
		}

		if(oddNum % 2 == 0) cout << "yes" << endl;
		else cout << "no" << endl;
	}


}