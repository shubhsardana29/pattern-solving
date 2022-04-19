/*
 Half pyramid

*
* *
* * *
* * * *
* * * * *

*/

#include<iostream>
using namespace std;

int main(){
    int n=5;

    for(int row=1;row<=n;row++){
        // for each row, print stars = row ka no.

        for(int col=1;col<=row;col++){
            cout<<" * ";
            }
            // after every row, newline
            cout<<endl;
    }
    return 0;
}