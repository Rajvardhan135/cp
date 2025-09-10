#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void MakeItDivisibleBy25() {
	int n;
	string s;

	cin >> s;
	n = s.size();

	int a = 100, b = 100, c = 100, d = 100;

	for(int i=n-1; i>=0; i--) {
		if(s[i] == '5' && (a == 100 || b == 100)) {
			for(int j=i-1; j>=0; j--) {
				if(s[j] == '2' && a == 100) a = (i - j - 1) + (n - i - 1);
				else if(s[j] == '7' && b == 100) b = (i - j - 1) + (n - i - 1);
			}
		} else if(s[i] == '0' && (c == 100 || d == 100)) {
			for(int j=i-1; j>=0; j--) {
				if(s[j] == '5' && c == 100) c = (i - j - 1) + (n - i - 1);
				else if(s[j] == '0' && d == 100) d = (i - j - 1) + (n - i - 1);
			}
		}
	}

	cout << min(a, min(b, min(c, d))) << endl;

}	

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		MakeItDivisibleBy25();
	}
}