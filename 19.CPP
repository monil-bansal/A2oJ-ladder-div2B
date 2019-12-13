#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<pair<int,int>  > in;
	vector<pair<int,int> > out;
	
	map<int,int> home;
	for(int i=0;i<n;i++){
		int h,a;
		cin >> h >> a;
		in.push_back(make_pair(h,a));
		home[h]++;
		out.push_back(make_pair(n-1,0));
	}

	for(int i=0;i<n;i++){
		int x = home[in[i].second];
		out[i].first+=x;
		out[i].second += n-1-x;
	}
	

	for(int i=0;i<n;i++){
		cout << out[i].first << " " << out[i].second << endl;
	}

	return 0;
}