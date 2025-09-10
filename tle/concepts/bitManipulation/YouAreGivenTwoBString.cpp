#include <iostream>
#include <algorithm>
using namespace std;

void YouAreGivenTwoBString() {
	string x, y;
	cin >> x >> y;

	int posY = 0, posX = 0;
	reverse(x.begin(), x.end());
	reverse(y.begin(), y.end());

	for(; posY<y.size(); posY++) {
		if(y[posY] == '1') break;
	}

	posX = posY;

	for(; posX < x.size(); posX++) {
		if(x[posX] == '1') break;
	}

	cout << (posX - posY) << endl;


}

int main() {
	int tc;
	cin >> tc;
	while(tc--) YouAreGivenTwoBString();
}