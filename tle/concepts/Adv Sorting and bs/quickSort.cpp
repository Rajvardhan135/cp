#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ln '\n'
ll mod = 1e9 + 7;

ll expo(ll a, ll b, ll m) {ll res=1;while(b>0){if(b&1){res*=a;res%=m;}a*=a;a%=m;b>>=1;}return res;}


void quickSort(vector<int> &nums, int l, int r) {
	if(l >= r) return;
	int pivot = nums[l];
	int count = 0;
	for(int i=l+1; i<=r; i++) if(nums[i] < pivot) count++;

	nums[l] = nums[l+count];
	nums[l+count] = pivot;
	
	int i = l, j = l + count + 1;
	while(i < count && j <= r) {
		if(nums[i] < pivot) i++;
		else if(nums[j] > pivot) j++;
		else {
			int temp = nums[i];
			nums[i] = nums[j];
			nums[j] = temp;
			i++;
			j++;
		}
	}

	quickSort(nums, l, count-1);
	quickSort(nums, count+1, r);
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