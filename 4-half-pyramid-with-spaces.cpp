/* half pyramid with spaces

   *
  **
 ***
****

*/
#include<iostream>
using namespace std;

int main(){
    int n=4;
    for(int row=1;row<=n;row++){
        //for each row

        //spaces
        for(int col=1;col<=n-row;col++){
            cout<<"  ";
        }
        //stars
        for(int col=1;col<=row;col++){
            cout<<"* ";
        }
        // after each row->newline
        cout<<endl;
    }
    return 0;
}