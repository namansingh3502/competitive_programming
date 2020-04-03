#include <bits/stdc++.h>
using namespace std;

int ans(pair<int, int> initial, pair<int, int> final)
{
    bool board[8][8];
    for (int i = 0; i < 8; ++i)
        for (int j = 0; j < 8; ++j)
            board[i][j] = true;
    queue<pair<int, int> > Q;
    Q.push(initial);
    Q.push(make_pair(-1, -1));
    int count = 0;
    while(Q.size() > 1)
    {
        pair<int, int> node = Q.front();
        Q.pop();
        if(node == final)
            break;
        // cout << "pint";
        if(node == make_pair(-1, -1))
        {
            count++;
            Q.push(node);
            continue;
        }
        int i, j;
        i = node.first;
        j = node.second;
        int xcor[] = {
            i - 1, i - 2, i - 2, i - 1, i + 1, i + 2, i + 2, i + 1};
        int ycor[] = {
            j - 2, j - 1, j + 1, j + 2, j + 2, j + 1, j - 1, j - 2};
        for(int k = 0; k < 8; k++)
        {
            int x = xcor[k];
            int y = ycor[k];
            if(((0 <= x) and (x < 8)) and ((0 <= y) and (y < 8)) and board[x][y])
            {
                Q.push(make_pair(x, y));
                board[x][y] = false;
            }
        }
    }

    return count;
}

int my(int rows,int cols,int end_rows,int end_cols ){
	
	vector<int> row;
	vector<int> col;

	vector<vector<int> > board(9,vector<int> (9,0));
	vector<vector<int> > distance(9,vector<int> (9,98779));
	
	//cin>>start>>last;
	int sol=0;
	//int rows=(int)start[0]-96;
	//int cols=(int)start[1]-48;
	distance[rows][cols]=0;
	board[rows][cols]=1;

	//int end_rows=(int)last[0]-96;
	//int end_cols=(int)last[1]-48;

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

	return sol;
}

int main(){
	int wa=1;
for(int i=1;i<9;i++){
	for(int j=1;j<9;j++){
		for(int k=1;k<9;k++){
			for(int l=1;l<9;l++){
					int a=i-1;
					int b=j-1;
					int c=k-1;
					int d=l-1;
				int a1=my(i,j,k,l);
				int b1=ans(make_pair(a,b),make_pair(c,d));
				if(a1!=b1){
					cout<<wa<<endl;
					cout<<i<<" "<<j<<" "<<k<<" "<<l<<endl;
					cout<<a1<<" "<<b1<<endl;
					wa++;}
				
			}
			}
		}
	}
}

