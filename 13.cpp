// #include <bits/stdc++.h>
// using namespace std;

// long long mod = 1000000007;

// long long f(long long x,long long y,long long n){
// 	if(n==1) return x;
// 	if(n==2) return y;
// 	long long z;
// 	for(long long i=3;i<=n;i++){
// 		z = ((y%mod)-(x%mod))%mod;
// 		x=y;
// 		y=z;
// 	}
// 	return z%mod;
// }

// int main(){
// 	long long x,y,n;
// 	cin >> x >> y >> n;
// 	if(x==0 && y==0){
// 		cout << 0;
// 		return 0;
// 	}
// 	long long ans = f(x,y,n);
// 	if(ans>=0) cout << ans;
// 	else cout << mod+ans;
// 	return 0;
// }



#include <bits/stdc++.h>
using namespace std;
long long a,b,n,m=1000000007;
main() {
	std::cin>>a>>b>>n;
	long long c[6]={a-b,a,b,b-a,-a,-b};
	long long ans = c[n%6]+2*m;
	ans%=m;
	cout <<ans;
	return 0;
}