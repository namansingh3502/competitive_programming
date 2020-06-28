#include<bits/stdc++.h>
using namespace std;

struct Node{

	int Data;
	Node* Small,* Big;

	Node( int x ){

		Data = x;
		Small = NULL;
		Big = NULL;

	}
};

Node* Head;

void insert( int x ){
	int ans = 0;

	Node* root = Head;

	while( ans == 0 ){

		if( root -> Data == x )
			ans = 1;

		else if( x > root -> Data ){
			
			if( root -> Big == NULL ){
				root -> Big = new Node( x );
				ans = 1;
			}
			else{
				root = root->Big;
			}
		}

		else if( x < root->Data ){
			
			if( root -> Small == NULL ){
				root -> Small = new Node( x );
				ans = 1;
			}
			else{
				root = root -> Small;
			}
		}

	}
}


void out(){

	queue < Node* > q;
	q.push( Head );
	Node* root;

	while( !q.empty() ){
		
		root = q.front();
		q.pop();
		
		if( root -> Small != NULL )
			q.push( root -> Small );
		
		if( root -> Big != NULL )
			q.push( root -> Big );
	
	}
}


int main(){
	int x;

	cin>>x;
	Head = new Node( x );

	for( int i = 1; i < 10; i++ ){

		cin>>x;
		insert( x );
	
	}

	cout<<endl<<endl;
	out();
	cout<<endl<<endl;

	for( int i = 0; i < 10; i++ ){

		cin>>x;
		insert( x );
		out();
		cout<<endl<<endl;

	}

	return 0;

}