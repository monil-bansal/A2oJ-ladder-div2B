// #include <bits/stdc++.h>
// using namespace std;



// int main(){
// 	int n,t;
// 	cin  >>  n >> t;
// 	string str;
// 	cin >> str;
// 	// vector<int> v(n,0);
// 	// for(int i=1;i<n;i++){	 
// 	// 	if(str[i]=='G'){
// 	// 		v[i] = v[i-1]+1;
// 	// 	}
// 	// }
// 	// for(int i =0;i<n;i++){
// 	// 	if(str[i]!='G'){
// 	// 		for(int j=i+1+v[i];j<n && j<=i+t;j++){
// 	// 			if(str[j]=='G'){
// 	// 				str[i] = 'G';
// 	// 				str[j] = 'B';
// 	// 				break;
// 	// 			}
// 	// 		}
// 	// 	}
// 	// }


// 	for(int i=0;i<t;i++){
// 		for(int j=0;j<n-1;j++){
// 			if(str[j]=='B' && str[j+1]=='G'){
// 				str[j]='G';
// 				str[j+1] = 'B';
// 				j++;
// 			}
// 		}
// 	}

// 	cout << str;
// 	return 0;
// }

#include <iostream>
using namespace std;
main(){
	int x,y,i;
	string s;
	cin>>x>>y>>s;
	while(y--){
		for(i=0;i<s.size()-1;i++){
			if(s[i]=='B'&&s[i+1]=='G'){
				swap(s[i],s[i+1]),i++;
			}
		}
	}
	cout << s;
}