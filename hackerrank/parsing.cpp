#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){

	int n,q;

	cin>>n>>q;

	string queries,input;
	vector< string > hrml;

	for( int i = 0; i < n; i++ ){
		cin >> input;
		hrml.push_back(input);
	}


	for( int i = 0; i < q; i++ ){

		cin >> queries;
		vector < string > tags;
		int k=0, j=0;

		while( queries[j] != '~' ){
			string tag_name = "";
			while( queries[j] != '.' && queries[j] == '~'  ) tag_name += queries[j++];
			tags.push_back(tag_name);
 		}
	
 		for( int i = 0; i < tags[i].size(); i++ ){
 			cout << tags[i] << endl;
 		}

 		for( int i = j; queries[i]; i++ ) cout << queries[i];
 		
 		cout << endl;

	}

}