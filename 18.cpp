#include <bits/stdc++.h>
using namespace std;

int main(){

	int m , n ;
	cin >> m >> n;
	vector<vector<int> > A,B;

	for(int i=0;i<m;i++){

		vector<int> ta;
		vector<int> tb;

		for(int j=0;j<n;j++){
			int x; 
			cin>>x;
			tb.push_back(1);
			ta.push_back(x);
		}

		A.push_back(ta);
		B.push_back(tb);
	}

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(A[i][j]==0){
				for(int a=0;a<m;a++){
					B[a][j] = 0;
				}
				for(int a=0;a<n;a++){
					B[i][a] = 0;
				}
			}	
		}
	}

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){

			if(A[i][j]==1){
				bool check = false;
				for(int a=0;a<m;a++){
					if(B[a][j]==1){
						check = true;
						break;
					}
				}
				if(!check) for(int a=0;a<n;a++) if(B[i][a]==1){check = true;break;}
				if(!check){
					cout << "NO";
					return 0;
				}
			}
		}
	}

	cout << "YES" <<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout << B[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}