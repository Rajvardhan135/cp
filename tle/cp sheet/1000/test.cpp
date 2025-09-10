#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int allocation(vector<int> &books, int n, int s, int curTotal, int curMaxP) {
    if(n == books.size() && s == 0) {
    	cout << "Cur MAx P " << curMaxP << endl;
        return curMaxP;
    }
    else if(n == books.size() && s != 0) return 10e9;
    cout << "Max Total " << curMaxP << " " << curTotal+books[n] << endl;
    return min(allocation(books, n+1, s, curTotal+books[n], max(curMaxP, curTotal+books[n])), allocation(books, n+1, s-1, books[n], max(curMaxP, books[n])));
    
}


int findPages(vector<int> &arr, int k) {
    // code here
    int maxPages = 10e9;
    int ans = allocation(arr, 0, k, 0, 0);
    cout << "final ans: " << ans << endl;
    return (ans == 10e9) ? -1 : ans;
}

int divide(int dividend, int divisor) {
    int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
    long long quotient = 0;

    long long a = dividend, b = divisor;

    int lb = pow(-2, 31);
    int ub = pow(2, 31)-1;

    a = abs(a);
    b = abs(b);
    
    while(a >= b) {
        long long temp = b;
        long long q = 1;
        while(temp <= a) {
        	// cout << q << " " << temp << endl;
            temp <<= 1;
            q *= 2;
        }
        q /= 2;
        quotient += q;
        temp >>= 1;
        a -= temp;
    }

    if(sign == -1) {
        if(-quotient < lb) return lb;
        else return -quotient;
    } else {
        if(quotient > ub) return ub;
        else return quotient;
    }
}

int main() {
	// vector<int> nums;
	// int target, ans;
	// for(int i=0; i<4; i++) {
	// 	int num;
	// 	cin >> num;
	// 	cout << "num: " << num << endl;
	// 	nums.push_back(num);
	// }
	// cin >> target;
	// ans = findPages(nums, target);
	// cout << ans << endl;

	cout << divide(2147483647, 3) << endl;
}