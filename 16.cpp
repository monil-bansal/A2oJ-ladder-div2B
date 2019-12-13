#include <bits/stdc++.h>
using namespace std;

bool freq(string s, string t){
	vector<int> v(26,0);
	for(int i=0;i<t.length();i++){
		v[t[i]-'a']++;
	}
	for(int i=0;i<s.length();i++){
		v[s[i]-'a']--;	
	}
	for(int i=0;i<26;i++){
		if(v[i]>0) return false;
	}
	return true;
}

bool sub(string &s,string &t,int i,int j){
	if(j==t.length()) return true;
	if(i==s.length()) return false;

	if(s[i]==t[j]) return sub(s,t,i+1,j+1);
	return sub(s,t,i+1,j);
}

string find(string s, string t){
	if(!freq(s,t)) return "need tree";
	if(s.length()==t.length()) return "array";
	if(sub(s,t,0,0)) return "automaton";
	return "both";
}

int main(){
	string s;
	string t;
	cin >> s >> t;
	cout << find(s,t);
	return 0;
}