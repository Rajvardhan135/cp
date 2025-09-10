#include <iostream>
#include <map>
#include <vector>
#include <cmath>
#include <bits/stdc++.h>
#include <functional>
using namespace std;

int teamTraining() {
	int n, s;
	cin >> n >> s;

	vector<int> v;
	for(int i=0; i<n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}

	sort(v.begin(), v.end(), greater<int>());

	int min = -1;
	int teams = 0;
	int count = 1;
	for(int i=0; i<n; i++) {
		min = v[i];
		// cout << min << " " << count << endl;
		if(count * min < s) {
			count++;
		} else {
			teams++;
			count = 1;
		}
	}

	return teams;
}

int main() {
	int n; 
	cin >> n;
	while(n--) {
		cout << teamTraining() << endl;
	}
}