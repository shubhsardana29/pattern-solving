
/* Numeric full pyramid 

        1
      2 3 2 
    3 4 5 4 3               
  4 5 6 7 6 5 4 
5 6 7 8 9 8 7 6 5 
*/

#include<iostream>
using namespace std;

int main(){
    int n=5;
    int count=0;

    for(int row=1;row<=n;row++){

        //spaces
        for(int col=1;col<=n-row;col++){
            cout<<"  ";
        }

        //number
        for(int col=1;col<=row;col++){
            cout<<++count<<" ";
        }
        for(int col=1; col<=row-1; col++){
            --count;
            cout<<count<<" ";
        }
        cout<<endl;
    }
    return 0;
}