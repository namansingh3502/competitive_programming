#include<iostream>
#include<vector>
#include<utility>
using namespace std;

#define ll long long
vector< vector < int > > current(100,vector< int > (100,0));
vector< vector < int > > inp(100,vector< int > (100,0));
int row,col;

int check(int i, int j){
	int sum;
	if( (i + 1) < row && (j - 1) >= 0 ){
		sum = current[i][j] + inp[ i + 1 ][ j - 1 ];
		if(current[ i + 1 ][ j - 1 ] < sum ){
			current[ i + 1 ][ j - 1 ] = sum;
			check( i + 1, j - 1 );
		}
		
	}

	if( (i + 1) < row ){
		sum = current[i][j] + inp[ i + 1 ][ j ];
		if(current[ i + 1 ][ j ] < sum){
			current[ i + 1 ][ j ] = sum;
			check( i + 1, j );
		}
		
	}

	if( (i + 1) < row && (j + 1) < col ){
		sum = current[i][j] + inp[ i + 1 ][ j + 1 ];

		if(current[ i + 1 ][ j + 1 ] < sum){
			current[ i + 1 ][ j + 1 ] = sum;
			check( i + 1, j + 1 );
		}
		
	}

	return 1;
}

int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>row>>col;
		//int current[row][col];
		//int inp[row][col];


		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++){
				cin>>inp[i][j];
				current[i][j]=0;
			}
		}

		for(int i = 0; i < col; i++){
			current[0][i] = inp[0][i];
			check(0,i);
		}

		int max = 0;
	
		for( int i = 0; i < col; i++ ){
			if( current[ row - 1 ][i] > max ){
				max = current[ row - 1 ][i];
			}
		}

		cout<<max<<endl;
	}

	return 0;
}