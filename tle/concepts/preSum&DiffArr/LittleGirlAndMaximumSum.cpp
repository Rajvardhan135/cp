#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>
#include <queue>
using namespace std;

auto comp = [](pair<long long, long long> a, pair<long long, long long> b) {
	return a.first > b.first;
};

int main() {
	int n, m;
	cin >> n >> m;
	vector<long long> v(n+1);
	vector<pair<long long, long long>> q(m+1);
	for(int i=1; i<=n; i++) cin >> v[i];
	for(int i=1; i<=m; i++) cin >> q[i].first >> q[i].second;

	vector<long long> diff(n+2, 0);
	for(int i=1; i<=m; i++) {
		diff[q[i].first]++;
		diff[q[i].second+1]--;
	}

	for(int i=1; i<=n; i++) {
		diff[i] += diff[i-1];
	}

	vector<pair<long long, long long>> diffPair(n);

	for(int i=0; i<n; i++) {
		diffPair[i] = {diff[i+1], i+1};
	}

	sort(diffPair.begin(), diffPair.end(), comp);

	priority_queue<long long> pq;

	for(int i=1; i<=n; i++) {
		pq.push(v[i]);
	}

	for(int i=0; i<n; i++) {
		int index = diffPair[i].second;
		v[index] = pq.top();
		pq.pop();
	}

	vector<long long> pre(n+1, 0);
	for(int i=1; i<=n; i++) {
		pre[i] += pre[i-1] + v[i];
	}

	long long total = 0;

	for(int i=1; i<=m; i++) {
		int l = q[i].first;
		int r = q[i].second;
		total += pre[r];
		total -= pre[l-1];
	}

	cout << total << endl;


	return 0;
}
