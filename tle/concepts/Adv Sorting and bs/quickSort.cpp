#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ln '\n'
ll mod = 1e9 + 7;

ll expo(ll a, ll b, ll m) {ll res=1;while(b>0){if(b&1){res*=a;res%=m;}a*=a;a%=m;b>>=1;}return res;}

int partition(vector<int> &nums, int l, int r) {
	int pivotEle = nums[l];
	int count = 0;
	for(int i=l+1; i<=r; i++) {
		if(nums[i] < pivotEle) count++;
	}
	int p = l+count;
	nums[l] = nums[p];
	nums[p] = pivotEle;

	int i = l, j = r;
	while(i < p && j > p) {
		if(nums[i] < pivotEle) i++;
		else if(nums[j] >= pivotEle) j--;
		else {
			int temp = nums[i];
			nums[i] = nums[j];
			nums[j] = temp;
			i++;
			j--;
		}
	}
	return p;
}

void quickSort(vector<int> &nums, int l, int r) {
	if(r <= l) return;
	int p = partition(nums, l, r);
	quickSort(nums, l, p-1);
	quickSort(nums, p+1, r);
}

void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0; i<n; i++) {
    	cin >> nums[i];
    }
    quickSort(nums, 0, nums.size()-1);
    for(int i=0; i<n; i++) {
    	cout << nums[i] << " ";
    }
    cout << ln;
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