#include<iostream>
#include<string>
using namespace std;

int main() {
	int n;
	cin >> n;
	while(n--) {
		int cost = 0;
		string numStr;
		cin >> numStr;
		int i;
		for(i=numStr.size()-1; i>=0; i--) {
			if(numStr[i] == '0') cost++;
			else break;
		} 
		for(int j=0; j<i; j++) {
			if(numStr[j] != '0') cost++;
		}
		cout << cost << endl;
	}
	return 0;
}