#include "bits/stdc++.h"
using namespace std;
int main(){
	int n;
	int x=0;
	cin >> n;
	for (int i=0;i<n;i++){
		string a;
		cin >> a;
		if (a[0]=='+' or a[1]=='+' or a[2]=='+'){
			x++;
		}
		else {
			x--;
		}
	}
	cout << x << endl;
}