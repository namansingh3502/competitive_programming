#include<bits/stdc++.h>
using namespace std;

int  countwords(string str){
	stringstream s(str);	//breaking input in word using string stream
	string word;
	int count=0;
	while(s>>word){
		count++;
	}
	return count;
}

int main(){
	string s="testing geeks for geeks geeks "
	"contribution placements";
	cout<<"Number of words are: "<<countwords(s);
	return 0;
}