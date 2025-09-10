#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <cmath>
using namespace std;

void solve() {

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;

    cin >> n >> k;
    queue<int> q;

    int temp = n;

    while(temp != 0) {
    	int i = 0;
    	while((1 << i) <= temp) i++;
    	i--;
    	q.push((1 << i));
    	temp -= (1 << i);
    }

    if(k < q.size() || k > n) cout << "NO" << endl;
    else {
    	cout << "YES" << endl;
    	while(q.size() < k) {
    		int front = q.front();
    		q.pop();
    		if(front == 1) q.push(1);
    		else {
    			q.push((front / 2));
    			q.push((front / 2));
    		}
    	}

    	while(!q.empty()) {
    		cout << q.front() << " ";
    		q.pop();
    	}
    } 


    return 0;
}