/*

* * * *
* * * *
* * * *
* * * *

*/
#include<iostream>
using namespace std;

int main(){
    int n=4;

    // for rows
    for(int row=1; row<=n;row++){

        //for each row , print n starts or we have n col
        for(int col=1; col<=n;col++){
            cout<<"* ";
        }
        //after each row, there is a newline
        cout<<endl;   
    }
    return 0;
}