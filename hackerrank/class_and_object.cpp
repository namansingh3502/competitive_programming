#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
void input();
void calculateTotalScore();

class Student {
public:
        int sub[5];
        void input(){
            for(int i=0;i<5;i++){
                cin>>sub[i];}}
        int calculateTotalScore(){
            int totalmarks=0;
            for(int i=0;i<5;i++){
                totalmarks+=sub[i];
            }
            return totalmarks;
        }  
};

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}









