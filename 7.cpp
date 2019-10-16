#include <bits/stdc++.h>
using namespace std;


int main(){
	int n,m;
	cin >> n >> m;
	map<string,string> ma;
	for(int i=0;i<m;i++){
		string a,b;
		cin >> a >> b;
		ma[a] = b;
	}
	for(int i=0;i<n;i++){
		string a;
		cin >>  a;
		string b = ma[a];
		if(a.length()<=b.length()){
			cout << a << " ";
		}
		else{
			cout << b << " ";
		}
	}
	return 0;
}