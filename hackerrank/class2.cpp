#include<iostream>
using namespace std;

struct student_marks{
public:
		int sub1;
		int sub2;
		int sub3;
		int sub4;
		int sub5;
		int totalscore;
	};

int total_sum(int,int,int,int,int);

int main(){
	int n,student_ahead=0;
	cin>>n;
	struct student_marks student[n];
	for(int i=0;i<n;i++){
		cin>>student[i].sub1;
		cin>>student[i].sub2;
		cin>>student[i].sub3;
		cin>>student[i].sub4;
		cin>>student[i].sub5;
		student[i].totalscore=total_sum(student[i].sub1,student[i].sub2,student[i].sub3,student[i].sub4,student[i].sub5);
	}
	for(int i=1;i<n;i++){
		if(student[i].totalscore>student[0].totalscore){student_ahead++;}
	}
	cout<<student_ahead;
	return 0;
}

int total_sum(int a,int b,int c,int d,int e){
	int sum;
	sum=a+b+c+d+e;
	return sum;
}