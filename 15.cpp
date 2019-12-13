#include <bits/stdc++.h>
using namespace std;


int main(){
	int n,s,t;
	cin >> n >> s >> t;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin >> v[i];
		v[i]--;
	}
	// cout << endl;
	if(s==t){
		cout << 0;
		return 0;
	}
	s--;
	t--;
	for(int i=1;i<=n;i++){
		if(v[s]<0){
			cout << -1;
			break;
		}
		int temp = s;
		s = v[s];
		v[temp]=-1;
		if(s==t){
			cout << i;
			break;
		}
	}
	return 0;
}