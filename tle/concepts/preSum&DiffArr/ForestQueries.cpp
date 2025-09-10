#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, q;
	cin >> n >> q;

	vector<vector <int>> forest(n+2, vector<int>(n+2, 0));
	vector<vector <int>> pre(n+2, vector<int>(n+2, 0));

	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			char c;
			cin >> c;
			forest[i][j] += (c == '*' ? 1 : 0);
		}
	}

	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			pre[i][j] = forest[i][j] + pre[i-1][j] + pre[i][j-1] - pre[i-1][j-1];
		}
	}
	

	while(q--) {
		int c1, r1, c2, r2;
		cin >> r1 >> c1 >> r2 >> c2;
		int trees = pre[r2][c2] - pre[r2][c1-1] - pre[r1-1][c2] + pre[r1-1][c1-1];
		cout << trees << endl; 
	}
}