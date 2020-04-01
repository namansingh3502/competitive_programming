#include<iostream>
#include<vector>
using namespace std;

int main(){
	string start,last;
	int ans,count=0,element=1;

	vector<int> row;
	vector<int> col;

	vector<vector<int> > board(9,vector<int> (9,0));
	vector<vector<int> > distance(9,vector<int> (9,98779));
	
	cin>>start>>last;

	int rows=(int)start[0]-96;
	int cols=(int)start[1]-48;
	distance[rows][cols]=0;

	int end_rows=(int)last[0]-96;
	int end_cols=(int)last[1]-48;

	row.push_back(rows);
	col.push_back(cols);

	board[rows][cols]=1;

	for(int i=0;i<row.size();i++){

		if((row[i]+2)<9 && (col[i]+1)<9){
			if(board[row[i]+2][col[i]+1]!=1){
				row.push_back(row[i]+2);
				col.push_back(col[i]+1);
				board[row[i]+2][col[i]+1]=1;
				distance[row[i]+2][col[i]+1] = distance[row[i]][col[i]]+1;
			}
			if((row[i]+2)==end_rows && (col[i]+1)==end_cols){
				ans=1;
				break;
			}
		}
		if((row[i]+1)<9 && (col[i]+2)<9){
			if(board[row[i]+1][col[i]+2]!=1){
				row.push_back(row[i]+1);
				col.push_back(col[i]+2);
				board[row[i]+1][col[i]+2]=1;
				distance[row[i]+1][col[i]+2] = distance[row[i]][col[i]]+1;
			}
			if((row[i]+1)==end_rows && (col[i]+2)==end_cols){
				ans=1;
				break;
			}
		}
		if((row[i]-1)>0 && (col[i]+2)<9){
			if(board[row[i]-1][col[i]+2]!=1){
				row.push_back(row[i]-1);
				col.push_back(col[i]+2);
				board[row[i]-1][col[i]+2]=1;
				distance[row[i]-1][col[i]+2] = distance[row[i]][col[i]]+1;
			}
			if((row[i]-1)==end_rows && (col[i]+2)==end_cols){
				ans=1;
				break;
			}
		}
		if((row[i]-2)>0 && (col[i]-1)>0){
			if(board[row[i]-2][col[i]-1]!=1){
				row.push_back(row[i]-2);
				col.push_back(col[i]-1);
				board[row[i]-2][col[i]-1]=1;
				distance[row[i]-2][col[i]-1] = distance[row[i]][col[i]]+1;
			}
			if((row[i]-2)==end_rows && (col[i]-1)==end_cols){
				ans=1;
				break;
			}
		}
		if((row[i]-2)>0 && (col[i]-1)>0){
			if(board[row[i]-2][col[i]-1]!=1){
				row.push_back(row[i]-2);
				col.push_back(col[i]-1);
				board[row[i]-2][col[i]-1]=1;
				distance[row[i]-2][col[i]-1] = distance[row[i]][col[i]]+1;
			}
			if((row[i]-2)==end_rows && (col[i]-1)==end_cols){
				ans=1;
				break;
			}
		}
		if((row[i]-1)>0 && (col[i]-2)>0){
			if(board[row[i]-1][col[i]-2]!=1){
				row.push_back(row[i]-1);
				col.push_back(col[i]-2);
				board[row[i]-1][col[i]-2]=1;
				distance[row[i]-1][col[i]-2] = distance[row[i]][col[i]]+1;
			}
			if((row[i]-1)==end_rows && (col[i]-2)==end_cols){
				ans=1;
				break;
			}
		}
		if((row[i]+1)<9 && (col[i]-2)>0){
			if(board[row[i]+1][col[i]-2]!=1){
				row.push_back(row[i]+1);
				col.push_back(col[i]-2);
				board[row[i]+1][col[i]-2]=1;
				distance[row[i]+1][col[i]-2] = distance[row[i]][col[i]]+1;
			}
			if((row[i]+1)==end_rows && (col[i]-2)==end_cols){
				ans=1;
				break;
			}
		}
		if((row[i]+2)<9 && (col[i]-1)>0){
			if(board[row[i]+2][col[i]-1]!=1){
				row.push_back(row[i]+2);
				col.push_back(col[i]-1);
				board[row[i]+2][col[i]-1]=1;
				distance[row[i]+2][col[i]-1] = distance[row[i]][col[i]]+1;
			}
			if((row[i]+2)==end_rows && (col[i]-1)==end_cols){
				ans=1;
				break;
			}
		}
		element+=count;
	}

	for(int i=0;i<row.size();i++){
		cout<<row[i]<<" "<<col[i]<<" "<<distance[row[i]][col[i]]<<endl;
	}
}