/*
 Numeric Half pyramid

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/

#include<iostream>
using namespace std;

int main(){
    int n=5;

    for(int row=1;row<=n;row++){
        // for each row, print column  = row ka no.

        for(int col=1;col<=row;col++){
            cout<<col<<" ";
            }
            // after every row, newline
            cout<<endl;
    }
    return 0;
}