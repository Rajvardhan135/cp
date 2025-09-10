#include <iostream>
using namespace std;

void FortuneTelling() {
	long long n, x, y;
	bool o = 0;
	cin >> n >> x >> y;

	for(int i=0; i<n; i++) {
		int num;
		cin >> num;
		if(num & 1) o = !o;
	}
		
	// cout << e << " " << o << " " << eo << " ";

	if(o & 1) {
		if((x & 1) != (y & 1)) cout << "Alice" << endl;
		else cout << "Bob" << endl;
	} else {
		if((x & 1) == (y & 1)) cout << "Alice" << endl;
		else cout << "Bob" << endl;
	}
}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		FortuneTelling();
	}
}