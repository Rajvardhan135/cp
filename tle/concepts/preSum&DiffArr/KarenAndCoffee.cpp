#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long MAX = 200000;
    long long n, k, q;
    cin >> n >> k >> q;
    vector<long long> temp(MAX+2, 0);
    for(int i=0; i<n; i++) {
        int l, r;
        cin >> l >> r;
        temp[l]++;
        temp[r+1]--;
    }

    for(int i=1; i<=MAX+1; i++) {
        temp[i] += temp[i-1];
    }

    vector<long long> valid(MAX+2, 0);
    for(int i=1; i<=MAX; i++) {
        valid[i] = valid[i-1] + (temp[i] >= k ? 1 : 0);
    }
    // for(int i=90; i<=100; i++) cout << temp[i] << endl;
    while(q--) {
        int a, b;
        cin >> a >> b;
        cout << valid[b] - valid[a-1] << endl;
    }

    return 0;
}