#include <iostream>
using namespace std;

void RaisingBacteria() {
	int n, bacteria = 0;
	cin >> n;
	while(n != 0) {
		if(n & 1 > 0) bacteria++;
		n = n >> 1;
	}
	cout << bacteria << endl;
}

int main() {
	RaisingBacteria();
}
