#include <iostream>
#include <cmath>
using namespace std;

void JellyfishAndUndertale() {
	long long a, b, n;
	cin >> a >> b >> n;

	long long time = b - 1;
	b = 1;

	for(long long i=0; i<n; i++) {
		long long tool; 
		cin >> tool;

		b = min(a, b + tool);
		time += b - 1;
		b = 1;
	}

	time += 1;
	cout << time << endl;

}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		JellyfishAndUndertale();
	}
}