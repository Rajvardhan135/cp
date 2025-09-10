#include <iostream>
#include <vector>
using namespace std;

void AGAGAXOOORRR() {
	int n;
	int maxEle = -1, minEle = (1 << 30), sum = 0, prev = sum;
	cin >> n;

	for(int i=0; i<n; i++) {
		int num;
		cin >> num;
		maxEle = max(maxEle, num);
		minEle = min(minEle, num);
		prev = sum;
		sum = sum ^ num;
	}

	// cout << maxEle << " " << minEle << " ";

	if(sum == 0 || prev == sum) cout << "YES" << endl;
	else cout << "NO" << endl; 

}

int main() {
	int tc;
	cin >> tc;
	while(tc--) AGAGAXOOORRR();
}