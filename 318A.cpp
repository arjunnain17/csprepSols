#include "bits/stdc++.h"
using namespace std;
int main(){
	long long n,k,ans;
	cin >> n >> k;
	if (k>n/2){
		ans=2+(k-n/2-1)*2;
	}
	else {
		ans=1+(k-1)*2;
	}
	if (ans>n){
		ans-=2;
	}
	cout << ans << endl;

}