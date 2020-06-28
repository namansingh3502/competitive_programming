#include<bits/stdc++.h>
using namespace std;

struct Node {
	int Data;
	Node* Next;
};

Node* Head = new Node();

void strt(){
	int x;
	Node* root = Head;

	for(int i = 0; i < 5; i++ ) {
		cin>>x;
		root->Data = x;
		if( i < 4 ){
			root->Next = new Node();
			root = root->Next;
		}
		else
			root->Next = NULL;
	}
}

void out(){
	Node* root = Head;

	while(root != NULL ){
		cout<<root->Data<<" -> ";
		root = root->Next;
	}
	cout<<NULL<<endl<<endl;
}

void insert(int x, int y){
	Node* root = Head;
	Node* new_node = new Node();

	for( int i = 1 ; i < y; i++ ){
		root = root->Next;
	}

	new_node->Data = x;
	new_node->Next = root->Next;
	root->Next = new_node;

}

int main(){
	int n;

	strt();

	out();

	cin>>n;
	cout<<"x at y"<<endl;
	int x,y;
	for(int i = 0; i < n; i++ ){
		cin>>x>>y;
		insert(x,y);
		out();
	}

	cout<<"from"<<endl;
	cin>>n;
	for( int i = 0; i < n; i++ ){
		cin>>x;
	}

}