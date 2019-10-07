#include <bits/stdc++.h>
using namespace std;


long long C(long long a){
	return (a*(a-1))/2;
}

int main(){
	long long n,m;
	cin >> n >> m;
	long long mi,ma;
	ma = C(n-m+1);
	long long d = n/m;
	long long mod = n%m;
	mi = m*C(d) + d*mod;
	cout << mi << " " << ma;
	return 0;
}