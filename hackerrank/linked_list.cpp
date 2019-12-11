#include<iostream>
#include<string>
using namespace std;

struct node {
	char name[11];
	char branch[4];
	char section;
	int sem;
};
int main(){
	struct node stud1,stud2;

	scanf("%c",&stud1.name[10]);
	scanf("%c",&stud1.branch[3]);
	scanf("%c",&stud1.section);
	scanf("%d",&stud1.sem);

	scanf("%c %c %c %d",&stud2.name[10],&stud2.branch[3],&stud2.section,&stud2.sem);

	printf("\n\n%c %c %c %d\n\n",stud1.name[10],stud1.branch[3],stud1.section,stud1.sem);
	printf("%c %c %c %d",stud2.name[10],stud2.branch[3],stud2.section,stud2.sem);

}