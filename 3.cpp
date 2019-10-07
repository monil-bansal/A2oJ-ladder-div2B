#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m,k;
	cin >> n >> m >> k;
	vector<int> t(m+1);
	for(int i=0;i<=m;i++){
		cin >> t[i];
	}
	int ans = 0;
	int B = t[m];
	for(int i=0;i<m;i++){
		int A = t[i];
		int count = 0;
		for(int i=0;i<21;i++){
			if(((A>>i)&1) != ((B>>i)&1)) count++;
		}
		if(count <= k) ans++;
	}
	cout << ans;
	return 0;
}