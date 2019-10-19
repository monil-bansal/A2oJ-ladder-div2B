#include <bots/stdc++.h>
using namespace std;



int main(){
	vector<pair<int,int> > email; // 1-> u || 2->toFollow || 3->read
	//1->u || 2->u || 3->r || 4-> u || 5->r || 6->u

	// 1,2,4,6,3,5

	int n = email.size();
	// 1 2 3 4 5 6 7 
	int i=0;j=0;
	for(;i<n;i++){
		pair<int,bool> currEmail = email[i];
		if(currEmail.second==1){
			email[i] = email[j];
			email[j] = currEmail;
			j++;
		}
	}
	for(i=j;i<n;i++){
		pair<int,bool> currEmail = email[i];
		if(currEmail.second==2){
			email[i] = email[j];
			email[j] = currEmail;
			j++;
		}
	}
	return 0;
}