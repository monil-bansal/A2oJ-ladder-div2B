#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	cin >> str;

	int n = str.length();
	int x = str[n-1] - '0';
	bool done = false;
	for(int i=0;i<n-1;i++){
		int c = str[i] - '0';
		if(c%2==0 && c<x){
			done = true;
			char temp = str[i];
			str[i] = str[n-1];
			str[n-1] = temp;
			break;
		}
	}
	if(!done){
		for(int i=n-1;i>=0;i--){
			int c = str[i]-'0';
			if(c%2==0){
				char temp = str[i];
				str[i] = str[n-1];
				str[n-1] = temp;
				done = true;
				break;
			}
		}
	}
	if(done){
		cout << str;
	}
	else{
		cout << -1;
	}
	return 0;
}
