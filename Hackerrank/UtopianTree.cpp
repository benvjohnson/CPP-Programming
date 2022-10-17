/**
 * Problem : Utopian Tree
 * Link    : https://www.hackerrank.com/challenges/utopian-tree/problem
*/

int utopianTree(int n) {
        int cycle = 0, height = 1;
        if(n != 0){
            while(++cycle <= n){
                height = cycle%2==1?height*2:height+=1;
            }
        }
        return height;
}