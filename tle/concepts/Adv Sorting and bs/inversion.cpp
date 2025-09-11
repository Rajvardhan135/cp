#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ln '\n'
ll mod = 1e9 + 7;

ll expo(ll a, ll b, ll m) {ll res=1;while(b>0){if(b&1){res*=a;res%=m;}a*=a;a%=m;b>>=1;}return res;}


int merge(vector<int> &nums, int l, int r) {
	int m = (l + r) / 2;
	vector<int> temp;
	int p = l, q = m + 1;

	int count = 0;

	while(p <= m || q <= r) {
		if(q > r) {
			temp.push_back(nums[p]);
			p++;
		} else if(p > m) {
			temp.push_back(nums[q]);
			q++;
		} else {
			if(nums[p] < nums[q]) {
				temp.push_back(nums[p]);
				p++;
			} else {
				temp.push_back(nums[q]);
				q++;
				count += (m - p + 1);
			}
		}
	}

	for(int i=0; i<temp.size(); i++) {
		nums[l+i] = temp[i];
	}

	return count;
}

int mergeSort(vector<int> &nums, int l, int r) {
	if(l == r) return 0;
	int m = (l + r) / 2;
	int inv1 = mergeSort(nums, l, m);
	int inv2 = mergeSort(nums, m+1, r);
	int intersect = merge(nums, l, r);

	return inv1 + inv2 + intersect;
}

void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0; i<n; i++) {
    	cin >> nums[i];
    }
    int inv = mergeSort(nums, 0, nums.size()-1);
    for(int i=0; i<n; i++) {
    	cout << nums[i] << " ";
    }
    cout << ln;
    cout << "inversion: " << inv << ln;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}