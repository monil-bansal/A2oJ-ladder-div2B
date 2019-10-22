#include <bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin >> v[i];
	}
	int pos = -1;
	int i=0;
	while(i<n-1 && v[i]<=v[i+1]) i++;
	if(i==n-1){
		cout << 0;
		return 0;
	}
	pos = i;
	i++;
	while(i<n-1 && v[i]<=v[i+1]) i++;
	if(i<n-1){
		cout << -1;
		return 0;
	}
	if(v[n-1]<=v[0]) 
		cout << n-pos-1;
	else cout << -1;
	return 0;
}