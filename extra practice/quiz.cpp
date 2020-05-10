#include<iostream>
#include<string>

using namespace std;

int main()
{
	char x;
	char answer;
	int correct=0;
	int incorrect=0;
	int error;

	cout<<"Press 'p' to participte or 'q' to quit";
	cin>>x;

	if (x=='p'||x=='P')
	{

		cout<<"WELCME TO THE QUIZ \nALL THE BEST";

		cout<<"first question";    			//first question
		cout<<"option 1\n ";
		cout<<"option 2\n ";
		cout<<"option 3\n ";
		cout<<"option 4\n ";
		cin>>answer;
											//correct answer

			if(answer=='4'){cout<<"CONGRATULATION YOUR ANSWER IS CORRECT \nLETS MOVE TO THE NXT QUESTION";
				correct++;
			}

											//incorrect answer
			else if(answer=='1'){cout<<"OOPS! YOUR ANSWER IS WRONG\nLETS TRY THE NEXT ONE";
			incorrect++;}
			else if(answer=='2'){cout<<"OOPS! YOUR ANSWER IS WRONG\nLETS TRY THE NEXT ONE";
			incorrect++;}
			else if(answer=='3'){cout<<"OOPS! YOUR ANSWER IS WRONG\nLETS TRY THE NEXT ONE";
			incorrect++;}

			  								//wrong input
			else cout<<"PLEASE ENTER A VALID INPUT";



		cout<<"second question";    		//second question
		cout<<"option a\n ";
		cout<<"option b\n ";
		cout<<"option c\n ";
		cout<<"option d\n ";
		cin>>answer;
											//correct answer

			if(answer=='c'||answer=='C'){cout<<"CONGRATULATION YOUR ANSWER IS CORRECT \nLETS MOVE TO THE NXT QUESTION";
				correct++;
			}

											//incorrect answer
			else if(answer=='a'||answer=='A'){cout<<"OOPS! YOUR ANSWER IS WRONG\nLETS TRY THE NEXT ONE";
			incorrect++;}
			else if(answer=='b'||answer=='B'){cout<<"OOPS! YOUR ANSWER IS WRONG\nLETS TRY THE NEXT ONE";
			incorrect++;}
			else if(answer=='d'||answer=='D'){cout<<"OOPS! YOUR ANSWER IS WRONG\nLETS TRY THE NEXT ONE";
			incorrect++;}

			  								//wrong input
			else {cout<<"PLEASE ENTER A VALID INPUT";}

		cout<<"third question";    			//third question
		cout<<"option a\n ";
		cout<<"option b\n ";
		cout<<"option c\n ";
		cout<<"option d\n ";
		cin>>answer;
											//correct answer

			if(answer=='b'||answer=='B'){cout<<"CONGRATULATION YOUR ANSWER IS CORRECT \nLETS MOVE TO THE NXT QUESTION";
				correct++;
			}

											//incorrect answer
			else if(answer=='a'||answer=='A'){cout<<"OOPS! YOUR ANSWER IS WRONG\nLETS TRY THE NEXT ONE";
			incorrect++;}
			else if(answer=='c'||answer=='C'){cout<<"OOPS! YOUR ANSWER IS WRONG\nLETS TRY THE NEXT ONE";
			incorrect++;}
			else if(answer=='d'||answer=='D'){cout<<"OOPS! YOUR ANSWER IS WRONG\nLETS TRY THE NEXT ONE";
			incorrect++;}

			  								//wrong input
			else {cout<<"PLEASE ENTER A VALID INPUT";}


		cout<<"fourth question";    		//fourth question
		cout<<"option a\n ";
		cout<<"option b\n ";
		cout<<"option c\n ";
		cout<<"option d\n ";
		cin>>answer;
											//correct answer

			if(answer=='a'||answer=='A'){cout<<"CONGRATULATION YOUR ANSWER IS CORRECT \nLETS MOVE TO THE NXT QUESTION";
				correct++;
			}

											//incorrect answer
			else if(answer=='d'||answer=='D'){cout<<"OOPS! YOUR ANSWER IS WRONG\nLETS TRY THE NEXT ONE";
			incorrect++;}
			else if(answer=='b'||answer=='B'){cout<<"OOPS! YOUR ANSWER IS WRONG\nLETS TRY THE NEXT ONE";
			incorrect++;}
			else if(answer=='c'||answer=='C'){cout<<"OOPS! YOUR ANSWER IS WRONG\nLETS TRY THE NEXT ONE";
			incorrect++;}

			  								//wrong input
			else {cout<<"PLEASE ENTER A VALID INPUT";}


											//score card

		cout<<"THANKS FOR PARTICIPATING\n";
		cout<<"HERE IS YOUR SCORE\n 		CORRECT ANSWERS: "<<correct<<"\n"<<" 		WRONG ANSWERS:"<<incorrect;

		error=4-(correct-incorrect);

		cout<<"\n 		WRONG INPUT: "<<error;
	}

	else if (x=='q'||x=='Q'){cout<<"THANK YOU";}
	else {cout<<"PLEASE ENTER A VALID INPUT";}

return 0;

}
