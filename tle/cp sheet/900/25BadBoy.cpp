#include <iostream>
#include <cmath>
using namespace std;

void BadBoy() {
	int m, n, x1, y1, x2, y2;
	cin >> m >> n >> x1 >> y1;

    if((m-x1) > (x1-1)) {
    	if((n-y1) > (y1-1)) {
    		cout << m << " " << n << " " << 1 << " " << 1 << endl;
    	} else {
    		cout << m << " " << 1 << " " << 1 << " " << n << endl;
    	}
    } else {
    	if((n-y1) > (y1-1)) {
    		cout << 1 << " " << n << " " << m << " " << 1 << endl;
    	} else {
    		cout << 1 << " " << 1 << " " << m << " " << n << endl;
    	}
    }
}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		BadBoy();
	}
}