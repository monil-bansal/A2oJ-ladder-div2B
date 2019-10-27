#include <bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin >> n;
	int ans = 2*n-1;
	int l=0;
	for(int i=0;i<n;i++){
		int h;
		cin >> h;
		ans+=abs(h-l);
		l=h;
	}
	cout << ans;
	return 0;
}