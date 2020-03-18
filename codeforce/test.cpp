#include <string>
#include <algorithm>
#include <iostream>

int main()
{
    std::string test="Hello";
    std::cout << "Original string: " << test << std::endl;
    std::reverse(test.begin(), test.end());
    std::cout << "Reversed string: " << test << std::endl;
    return 0;
}


/*#include<iostream>
#include<string>
#include<vector>
#include<utility>
using namespace std;

int main(){
	vector< pair < string, int > > words_count(4);
	int x=30502,y=90261;
	words_count[0].first="naman";
	words_count[0].second= x;
	words_count[1].first="aman";
	words_count[1].second= 261095;
	words_count[2].first="papa";
	words_count[2].second= y;

	for(int i=0;i<3;i++){
		cout<<words_count.size();
	}
}*/