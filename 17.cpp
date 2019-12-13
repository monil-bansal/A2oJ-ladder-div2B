#include <bits/stdc++.h>
using namespace std;


int main(){
	vector<vector<int> >v;
	for(int i =0;i<3;i++){
		vector<int> temp;
		for(int j=0;j<3;j++){
			int x;
			cin >> x;
			temp.push_back(x);
		}
		v.push_back(temp);
	} 
	int A  = v[0][1] + v[0][2];
	int B  = v[1][0] + v[1][2];
	int C  = v[2][1] + v[2][0];
	int y = (A+C-B)/2;
	int x = (B+C-A)/2;
	int z = (A+B-C)/2;
	v[0][0] = x;
	v[1][1] = y;
	v[2][2] = z;

	for(int i =0;i<3;i++){
		for(int j=0;j<3;j++){
		
			cout << v[i][j] << " ";
		}
		cout << endl;
	} 
	return 0;
}