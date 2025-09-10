#include <iostream>
#include <cmath>
#include <numeric>
#include <vector>
using namespace std;

void Bestie() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(auto &it : nums) cin >> it;

    int num = 0;
    for(auto it : nums) {
        num = gcd(num, it);
    }

    if(num == 1) {
        cout << 0 << endl;
        return;
    }

   	int ans = 10e9;

   	for(int i=n-1; i>=0; i--) {
   		int cost = 0;
   		vector<int> temp(nums);
   		for(int j=i; j>=0; j--) {
   			cost += (n - j + 1);
   			temp[j] = gcd(temp[j], j+1);

   			int g = 0;
   			for(int k=0; k<n; k++) {
   				g = gcd(g, temp[k]);
   			}

   			if(g == 1) {
   				ans = min(cost, ans);
   			}
   		}
   	}

   	cout << ans << endl;

}

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        Bestie();
    }
}