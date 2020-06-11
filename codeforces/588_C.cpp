#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

int main(){

    int vertex,edge;
    cin>>vertex>>edge;

    vector<vector<int> > domino(8,vector<int> (8,0));
    vector<vector<int> > map(vertex+1);
    priority_queue<pair<int,int> > length;
    vector<vector<int> > table(vertex+1,vector<int>(vertex+1,0));


    int x,y,rank=0;
    for(int i=0;i<edge;i++){
    	cin>>x>>y;
    	if(y>x){
    	map[x].push_back(y);}
    	else {map[y].push_back(x);}
	} 
	for(int i=1;i<=vertex;i++){
		length.push(make_pair(map[i].size(),i));
	}

	//cout<<endl;

	/*while(length.size()){
		pair<int,int> node = length.top();
		int m=node.first;
		int n=node.second;
		length.pop();
		for(int i=0;i<m;i++){
			if(map[n][i]!=7){
				table[n][map[n][i]]=map[n][i];
				domino[n][map[n][i]]=1;
				//cout<<"a"<<n<<" "<<map[n][i]<<" "<<table[n][map[n][i]]<<" "<<domino[n][map[n][i]]<<" ";
			}
			//cout<<endl;			
		}
		for(int i=0;i<m;i++){
			if(map[n][i]==7 && domino[n][6]!=1){
				table[n][map[n][i]]=map[n][i];
				domino[n][map[n][i]]=1;
				//cout<<"b"<<n<<" "<<map[n][i]<<" "<<table[n][map[n][i]]<<" "<<domino[n][map[n][i]]<<" ";
			}
			//cout<<endl;			
		}
	}
	if(vertex==7 && edge!=0){
		for(int i=1;i<7;i++){
			if(domino[i][6]!=1){
				domino[i][6]=1;
				table[7][6]=6;
			}
		}
	}
	int count=0;
	for(int i=1;i<=7;i++){
		for(int j=1;j<=7;j++){
			if(domino[i][j]){count++;
	}}}

	cout<<endl<<" ";
	for(int i=1;i<=vertex;i++){cout<<" "<<i;}

	for(int i=1;i<=vertex;i++){
		cout<<endl<<i<<" ";
		for(int j=1;j<domino[i].size();j++){
			cout<<domino[i][j]<<" "; 
	}}

	cout<<endl<<endl<<" ";
	for(int i=1;i<=vertex;i++){cout<<" "<<i;}

	for(int i=1;i<=vertex;i++){
		cout<<endl<<i<<" ";
		for(int j=1;j<table[i].size();j++){
			cout<<table[i][j]<<" "; 
	}}

	for(int i=1;i<=vertex;i++){
		cout<<endl<<i<<" ";
		for(int j=0;j<map[i].size();j++){
			cout<<map[i][j]; 
	}}
	cout<<endl;
	cout<<count<<endl;*/
	cout<<endl<<endl;

	for(int i=0;i<vertex;i++){
		pair<int,int> node = length.top();
		int p=node.first;
		int q=node.second;
		cout<<p<<" "<<q<<endl;
		length.pop();
	}

return 0;
} 
