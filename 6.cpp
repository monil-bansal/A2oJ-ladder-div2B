#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<long long> v(n);
	for(int i=0;i<n;i++){
		cin >> v[i];
	}

	// cout << " B ";
	long long f=-1,l=-1;
	bool s = false;
	int start=1,end=1;
	int c = 0;
	bool ans = true;
	// cout << "  M  ";
	for(int i=0;i<n-1;i++){
		if(!s){
			if(v[i]<v[i+1]) continue;
			if(c){
				ans = false;
				break;			
			}
			c++;
			start = i+1;
			f = v[i];
			s = true;
			continue;
		}
		if(v[i]>v[i+1]){
			if(i==n-2){
				if(start>1 && v[start-2]>v[n-1]){
					// cout << "m";
					ans = false;
				}
			}
			continue;
		}
		end = i+1;
		if(f>v[i+1]){
			ans = false;
			break;
		}
		s = false;
	}

	if(ans){
		if(v[n-1]<v[n-2]){
			end = n;
		}
		cout << "yes" <<endl;
		cout << start << " " << end;
	}
	else{
		cout << "no";
	}
	return 0;
}