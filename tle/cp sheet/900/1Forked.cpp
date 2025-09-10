#include <iostream>
#include <vector>
#include <set>
using namespace std;

void forked() {
	int a, b, kx, ky, qx, qy;
	cin >> a >> b >> kx >> ky >> qx >> qy;

	set<pair<int, int>> king;
	set<pair<int, int>> queen;

	king.insert({kx+a, ky+b});
	king.insert({kx+a, ky-b});
	king.insert({kx+b, ky+a});
	king.insert({kx+b, ky-a});
	king.insert({kx-a, ky+b});
	king.insert({kx-a, ky-b});
	king.insert({kx-b, ky+a});
	king.insert({kx-b, ky-a});

	queen.insert({qx+a, qy+b});
	queen.insert({qx+a, qy-b});
	queen.insert({qx+b, qy+a});
	queen.insert({qx+b, qy-a});
	queen.insert({qx-a, qy+b});
	queen.insert({qx-a, qy-b});
	queen.insert({qx-b, qy+a});
	queen.insert({qx-b, qy-a});

	int count = 0;

	for(auto &k : king) {
		for(auto &q : queen) {
			if(k.first == q.first && k.second == q.second) {
				count++;
			}
		}
	}

	cout << count << endl;

}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		forked();
	}
}

