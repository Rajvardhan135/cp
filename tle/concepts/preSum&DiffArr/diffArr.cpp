#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main() {
	int n, m, k;
	cin >> n >> m >> k;
	vector<long long> v(n+1);
    vector<pair<pair<long long, long long>, long long>> ops(m+1);
	vector<long long> opsFreq(m+2, 0);
	vector<long long> diff(n+2, 0);

	for(int i=1; i<=n; i++) cin >> v[i];

	for(int i=1; i<=m; i++) cin >> ops[i].first.first >> ops[i].first.second >> ops[i].second;

	for(int i=1; i<=k; i++) {
		int l, r;
		cin >> l >> r;
		opsFreq[l]++;
		opsFreq[r+1]--;
	}

	for(int i=2; i<=m; i++) {
		opsFreq[i] += opsFreq[i-1];
	}

	for(int i=1; i<=m; i++) {
		ops[i].second *= opsFreq[i];
	}

	for(int i=1; i<=m; i++) {
		diff[ops[i].first.first] += ops[i].second;
		diff[ops[i].first.second+1] -= ops[i].second;
	}

	for(int i=1; i<=n; i++) {
		diff[i] += diff[i-1];
	}

	for(int i=1; i<=n; i++) {
		diff[i] += v[i];
		cout << diff[i] << " ";
	}

	return 0;
}
