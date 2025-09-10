#include <iostream>
#include <vector>
using namespace std;

int main() {
	int m, n;
	cin >> m >> n;
	vector<vector<int>> v(m, vector<int>(n));
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			cin >> v[i][j];
		}
	}

	vector<vector<int>> pre(m, vector<int>(n, 0));
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			pre[i][j] = v[i][j];
			pre[i][j] += (i == 0 ? 0 : pre[i-1][j]);
			pre[i][j] += (j == 0 ? 0 : pre[i][j-1]);
			pre[i][j] -= (i == 0 || j == 0 ? 0 : pre[i-1][j-1]);

		}
	}

	int q; cin >> q;

	while(q--) {
		int l1, r1, l2, r2;
		cin >> l1 >> r1 >> l2 >> r2;
		int psum = pre[l2][r2];
		psum -= (r1 == 0 ? 0 : pre[l2][r1-1]);
		psum -= (l1 == 0 ? 0 : pre[l1-1][r2]);
		psum += ((l1 == 0 && r1 == 0) ? 0 : pre[l1-1][r1-1]);
		cout << psum << endl;
	}

	return 0;
}