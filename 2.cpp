#include <bits/stdc++.h>
using namespace std;



int main(){
	int n,m;
	cin >> n >> m;
	int c = 1;
	long long ans = 0;
	for(int i=0;i<m;i++){
		int a;
		cin >> a;
		if(a>=c){
			ans+=a-c;
		}
		else{
			ans+= (n-c+a);
		}
		c=a;
	}
	cout << ans;
	return 0;
}