
/* Solid Diamond

   *
  * *
 * * *
* * * *
* * * *
 * * *
  * *
   * 

*/

#include<iostream>
using namespace std;

int main(){
    int n=4;

    for(int row=1;row<=n;row++){
// 1) full pyramid 

        //spaces
        for(int col=1;col<=n-row;col++){
            cout<<" ";
        }

        //star
        for(int col=1;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
// 2) inverted full pyramid
        for(int row = 1; row <=n;row++){
        //spaces
        for(int col = 1; col <=row-1;col++){
            cout<<" ";
        }
        //stars
        for(int col =1;col<=n-row+1;col++){
            cout<<"* ";
        }
        cout<<endl;
        }
    
    return 0;
}
