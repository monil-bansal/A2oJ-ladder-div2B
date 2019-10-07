// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n ,l;
// 	cin >> n >> l;
// 	vector<int> a(n);
// 	for(int i=0;i<n;i++){
// 		cin >> a[i];
// 	}
// 	sort(a.begin(),a.end());
// 	float ans= max(a[0],l-a[n-1]);
// 	for(int i=0;i<n-1;i++){
// 		float d = a[i+1]-a[i];
// 		d /= 2;
// 		if(ans<d) {
// 			ans=d;
// 		}
// 	}
// 	printf("%0.10f",ans);

// 	return 0;
// }

#include<bits/stdc++.h>
using namespace std;main(){int a,b,c[10001],i;float f=0,d;cin>>a>>b;for(i=1;i<=a;i++)cin>>c[i];sort(c+1,c+a+1);f=max(c[1],b-c[a]);for(i=1;i<=a;i++){d=c[i+1]-c[i];d/=2;if(f<d)f=d;}printf("%.10f",f);}
