/**
 * Problem : Pattern 
 * Link : https://practice.geeksforgeeks.org/problems/pattern/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_9
*/

#include<iostream>
using namespace std;

class Solution {
    public:
	void printDiamond(int n) {
	    int urow = 1;
        while(urow <= n){
            int uspace = 1;
            while(uspace <= n - urow){
                cout<<' ';
            	uspace++;  
            }
            int ucol = 1;
            while(ucol <= urow){
                cout<<"*"<<" ";
            	ucol++; 
            }
            cout<<endl;
            urow++;
        }
        int lrow = n;
        while(lrow >= 1){
            int lspace = 1;
            while(lspace <= n - lrow){
                cout<<' ';
            	lspace++;  
            }
            int lcol = 1;
            while(lcol <= lrow){
                cout<<"*"<<" ";
            	lcol++; 
            }
            cout<<endl;
            lrow--;
        }
	}
};


int main(){
    int number;
    cin >> number;
    Solution ob;
    ob.printDiamond(number);
    return 0;
}