#include<iostream>
using namespace std;

void score(int last,int strength[],int bishu_strength){
	int num_kills=0,score=0;
	for(int i=0;i<last;i++){
		if(bishu_strength>=strength[i]){
			num_kills++;
			score+=strength[i];
		}
	}
	cout<<num_kills<<" "<<score<<endl;
}

int main(){
	int num_soldier,bishu_strength,num_rounds;   //3
	cin>>num_soldier;
	int power_soldier[num_soldier];						//1
	for(int i=0;i<num_soldier;i++){
		cin>>power_soldier[i];
	}
	cin>>num_rounds;
	if(num_soldier>=1&&num_rounds>=1){
	for(int i=0;i<num_rounds;i++){
		cin>>bishu_strength;
		score(num_soldier,power_soldier,bishu_strength);
	}
}
}