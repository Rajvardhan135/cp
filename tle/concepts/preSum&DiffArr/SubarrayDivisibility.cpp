#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<long long> arr(n);
	vector<long long> pre(n);

	for(auto &it : arr) cin >> it;

	pre[0] = arr[0];

	for(int i=1; i<n; i++) pre[i] = arr[i] + pre[i-1];

	map<long long, long long> mp;

	long long total = 0;
	for(int i=0; i<n; i++) {
		int mod = pre[i] % n;
		int rem = mod > 0 ? n - mod : -n - mod;
		if(mod == 0) {
			total++;
		}
		else {
			total += mp[mod];
			total += mp[rem];
		}

		mp[mod]++;
	}

	for(auto it : mp) {
		cout << it.first << " " << it.second << endl;
	}

	cout << total << endl;
}