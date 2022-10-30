/**
 *  Problem : Pattern 7
 *  Link : https://practice.geeksforgeeks.org/problems/triangle-pattern-1661492263/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_7
*/

#include<iostream>
using namespace std;

class Solution {
    public:
        void printTriangle(int n) {
		    int row = 1;
            while(row <= n){
            int space = 1;
                while(space <= n - row){
                    cout<<' ';
            	    space++;  
                }
                int col = 1;
                while(col <= (2 * row) - 1){
                    cout<<'*';
            	    col++; 
                }
                cout<<endl;
                row++;
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