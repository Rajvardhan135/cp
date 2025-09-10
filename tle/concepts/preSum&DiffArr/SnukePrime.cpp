#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n, c;
	cin >> n >> c;
	vector<long long> start, finish, costs;
	set<long long> days;
	map<long long, long long> mp;

	for(long long i=0; i<n; i++) {
		long long startDay, finishDay, cost;
		cin >> startDay >> finishDay >> cost;
		days.insert(startDay);
		days.insert(finishDay+1);
		start.push_back(startDay);
		finish.push_back(finishDay+1);
		costs.push_back(cost);
	}

	long long counter = 0;
	for(auto num : days) {
		mp[num] = counter;
		counter++;
	}
	vector<long long> diff(counter+1, 0);

	for(int i=0; i<n; i++) {
		long long startInd = mp[start[i]];
		long long finishInd = mp[finish[i]];
		diff[startInd] += costs[i];
		diff[finishInd] -= costs[i];
	}

	for(long long i=1; i<=counter; i++) {
		diff[i] += diff[i-1];
	}

	auto itr = days.begin();

	long long minCost = 0;
	long long prev = *itr;
	itr++;

	for(int i=0; i<counter-1; i++) {
		long long numDays = *(itr) - prev;
		prev = *itr;
		itr++;
		minCost += min(diff[i], c) * numDays;
	}

	cout << minCost << endl;

	return 0;
}