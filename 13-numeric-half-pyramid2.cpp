/*
 Numeric Half pyramid-2

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21
22 23 24 25 26 27 28

*/

#include<iostream>
using namespace std;

int main(){
    int value=1;
    int n=7;

    for(int row=1;row<=n;row++){
        // for each row, print column  = row ka no.

        for(int col=1;col<=row;col++){
            cout<<value++<<" ";
            }
            // after every row, newline
            cout<<endl;
    }
    return 0;
}