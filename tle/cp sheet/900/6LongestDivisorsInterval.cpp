#include <iostream>
using namespace std;

void LongestDivisorsInterval() {
	long long n;
	cin >> n;

	int length = 0;

	for(long long i=1; (i<=n && n % i == 0); i++) length++;

	cout << length << endl;
}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		LongestDivisorsInterval();
	}
}