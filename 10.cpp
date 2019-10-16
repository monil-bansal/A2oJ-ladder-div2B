#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int k;
	cin >> s;
	cin >> k;
	vector<int> w;
	int t = -1;
	for(int i=0;i<26;i++){
		int x;
		cin >>x;
		w.push_back(x);
		t = max(t,x);
	}
	// cout << t << endl;
	int l = s.length();
	int ans =0;
	for(int i=0;i<l;i++){
		int x = s[i]-'a';
		// cout << x << " ";
		// cout << w[x] << "*" << (i+1) <<endl;
		ans+= w[x]*(i+1);
	}
	// cout << endl;
	for(int i=1;i<=k;i++){
		// cout << t << "*" << l+i;
		ans+= t*(l+i);
		// cout << endl;
	}
	cout << ans;
	return 0;
}