#include <bits/stdc++.h>
using namespace std;



int main(){
	double r,x1,y1,x2,y2;
	cin >> r >> x1 >>y1>>x2>>y2;
	double diam = 2*r;
	double d = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	int ans = d/diam;
	if(fmod(d,diam)) ans++;
	cout << ans;
	return 0;
}