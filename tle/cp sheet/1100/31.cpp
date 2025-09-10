#include <bits/stdc++.h>
using namespace std;

#define ln '\n'
#define ll long long

const int MOD = 1e9+7;

void solve() {
    int n, t;
    cin >> n >> t;
    vector<int> nums(51, 0);
    int k = 0;
    for(int i=1; i<=n; i++) {
        int num;
        cin >> num;
        if(nums[num] == 0) {
            nums[num] = i;
        }
    }

    for(int i=0; i<t; i++) {
        int ti;
        cin >> ti;

        cout << nums[ti] << " ";
        for(int i=1; i<51; i++) if(nums[i] < nums[ti]) nums[i]++;
        nums[ti] = 1;
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // int tc;
    // cin >> tc;
    // while (tc--) {
    //     solve();
    // }

    solve();

    return 0;
}