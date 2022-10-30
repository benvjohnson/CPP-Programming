/**
 * Problem : Pattern 5
 * Link: https://practice.geeksforgeeks.org/problems/triangle-pattern/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_5
*/

#include<iostream>
using namespace std;

class Solution{
    public:
	void printTriangle(int n) {
	    int row = n;
	    while(row >= 1){
	        int col = 1;
	        while(col <= row){
	            cout<<"*\t";
	            col++;
	        }
	        cout<<endl;
	        row--;
	    }
	}
};

int main(){
    int number;
    cin >> number;
    Solution ob;
    ob.printTriangle(number);
    return 0;
}