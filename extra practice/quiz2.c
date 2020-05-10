#include<stdio.h>

int wrong();
int correct();
int error();
int check1();
int Q1();
int Q2();
int Q3();
int Q4();

int main(){
	char x;

	int positive=0, negetive=0;
	
	printf("\n\n\nPress 'P' to participte or 'Q' to quit\n");
	scanf("%c",&x);

	if (x=='p'||x=='P')
	{
		printf("\nWELCME TO THE QUIZ \nALL THE BEST\n");
		Q1();
	}
	else if(x=='q'||x=='Q')
	{
		printf("THANK YOU");
	} 

	else {
	printf("wrong input"); 	
	}

 }
	




int Q1() 				//first question
{	
		int ans;
		printf("\nfirst question\n"); 			
		printf(" option 1\n ");
		printf("option 2\n ");
		printf("option 3\n ");
		printf("option 4\n ");

		scanf("%d",&ans);


		if(ans==4)
		{
			correct();
			Q2();
		}

		else if(ans==1||ans==2||ans==3){
			wrong();
			
			Q2();
		}

		else
		{
			error();
			Q1();
		}

		return 0;
}

int Q2()				//second question     
{
	int ans;
	int score=0;					
	printf("\nSecond question\n"); 			
	printf(" option 1\n ");
	printf("option 2\n ");
	printf("option 3\n ");
	printf("option 4\n ");

	scanf("%d",&ans);


		if(ans==3)
		{
			correct();
			score++;
			Q3();
		}

		else if(ans==1||ans==2||ans==4){
			wrong();
			
			Q3();
		}

		else
		{
			error();
			Q2();
		}

		return 0;
}

int Q3()				//third question
{
	int ans;
	printf("\nThird question\n"); 			
	printf(" option 1\n ");
	printf("option 2\n ");
	printf("option 3\n ");
	printf("option 4\n ");

	scanf("%d",&ans);


		if(ans==2)
		{
			correct();
			Q4();
		}

		else if(ans==1||ans==4||ans==3){
			wrong();
			
			Q4();
		}

		else
		{
			error();
			Q3();
		}

		return 0;
}

int Q4()				//fourth question
{
	int ans;
	printf("\nFOURTH question\n"); 			
	printf(" option 1\n ");
	printf("option 2\n ");
	printf("option 3\n ");
	printf("option 4\n ");

	scanf("%d",&ans);


		if(ans==1)
		{
			printf("Congratulation your answer is correct\n\n");
		}

		else if(ans==4||ans==2||ans==3){
			wrong();
		}

		else
		{
			error();
			Q4();
		}

		printf("\nTHANKS FOR PLAYING\n");
		return 0;
}


		//Evaluation

int correct(){
	printf("Congratulation your answer is correct.\n Lets try next question");
	return 0;
}

int wrong(){
	printf("Opps! your answer is wrong. Better luck next time");
	printf("Lets move to next question");

	return 0;
}

int error(){
	printf("Enter valid numbers");
	return 0;
}

			
