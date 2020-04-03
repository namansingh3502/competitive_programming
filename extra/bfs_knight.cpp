#include <bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	for(int t=0;t<test;t++){
		
/*		string start,last;
		int ans,count=0;
		pair<int, int> initial;
		pair<int, int> final;
		queue<pair<int, int> > cord;
		vector<vector<int> > board(9,vector<int> (9,0));
		vector<vector<int> > distance(9,vector<int> (9,98779));
		

        int row[] = {2,1,-1,-2,-2,-1,1,2};
		int col[] = {1,2,2,1,-1,-2,-2,-1};

		cin>>start>>last;

		int rows=(int)start[0]-96;
		int cols=(int)start[1]-48;

		distance[rows][cols]=0;
		board[rows][cols]=0;

		int end_rows=(int)last[0]-96;
		int end_cols=(int)last[1]-48;

		cord.push(make_pair(rows,cols));
		initial.first=rows;
		initial.second=cols;
		initial.first=end_rows;
		initial.second=end_cols;

		for(int i=0;i<cord.size();i++){
			
			initial=cord.front();
			cord.pop();

			if(initial==final){
				ans=distance[i][i];
				break;
			}
			for(int j=0;j<8;j++){
			int r,c;
			r=initial.first+row[j];
			c=initial.second+col[j];

			if((((0<r) && (r<9)) && ((0<c) && (c<9))) && board[r][c]){

			}	
				cord.push(make_pair(r,c));
                board[r+1][c+1] = 0;
                distance[r+1][c+1]=distance[i+1][i+1]+1;
			}
		}
		cout<<ans<<endl;
	}
	
}*/




	string start,last;

	
	
	vector<int> row;
	vector<int> col;

	vector<vector<int> > board(9,vector<int> (9,0));
	vector<vector<int> > distance(9,vector<int> (9,98779));
	
	cin>>start>>last;
	int sol=0;
	int rows=(int)start[0]-96;
	int cols=(int)start[1]-48;
	distance[rows][cols]=0;
	board[rows][cols]=1;

	int end_rows=(int)last[0]-96;
	int end_cols=(int)last[1]-48;

	row.push_back(rows);
	col.push_back(cols);

	
	if(rows!=end_rows || cols!=end_cols){
	for(int i=0;i<row.size();i++){

		if((row[i]+2)<9 && (col[i]+1)<9){
			if(board[row[i]+2][col[i]+1]!=1){
				row.push_back(row[i]+2);
				col.push_back(col[i]+1);
				board[row[i]+2][col[i]+1]=1;
				distance[row[i]+2][col[i]+1] = distance[row[i]][col[i]]+1;
			}

			if((row[i]+2)==end_rows && (col[i]+1)==end_cols){
				sol= distance[row[i]][col[i]]+1;
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
				sol= distance[row[i]][col[i]]+1;
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
				sol= distance[row[i]][col[i]]+1;
				break;
			}
		}
		if((row[i]-2)>0 && (col[i]+1)<9){
			if(board[row[i]-2][col[i]+1]!=1){
				row.push_back(row[i]-2);
				col.push_back(col[i]+1);
				board[row[i]-2][col[i]+1]=1;
				distance[row[i]-2][col[i]+1] = distance[row[i]][col[i]]+1;
			}
			if((row[i]-2)==end_rows && (col[i]+1)==end_cols){
				sol= distance[row[i]][col[i]]+1;
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
				sol= distance[row[i]][col[i]]+1;
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
				sol= distance[row[i]][col[i]]+1;
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
				sol= distance[row[i]][col[i]]+1;
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
				sol= distance[row[i]][col[i]]+1;
				break;
			}
		}
	}
}
cout<<sol<<endl;

}
}