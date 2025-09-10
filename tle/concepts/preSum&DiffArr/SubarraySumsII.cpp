#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main() {
	int n;
	long long k;

	cin >> n >> k;

	vector<long long> arr(n);
	vector<long long> pre(n);

	for(auto &it : arr) cin >> it;

	pre[0] = arr[0];

	for(int i=1; i<n; i++) pre[i] = arr[i] + pre[i-1];

	map<long long, long long> mp;

	long long total = 0;
	for(int i=0; i<n; i++) {
		if(pre[i] == k) total++;
		total += mp[pre[i]-k];
		mp[pre[i]]++;
	}
	cout << total << endl;
}