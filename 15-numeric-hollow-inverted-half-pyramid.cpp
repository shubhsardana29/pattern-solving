/* numeric hollow inverted half pyramid 

1 2 3 4 5 6
2 _ _ _ 6
3 _ _ 6
4 _ 6
5 6
6

*/

#include<iostream>
using namespace std;

int main(){
    int n=6;
    for(int row=1;row<=n;row++){
        // for first and last row
        if (row==1||row==n)
        {
            if (row==n){
                cout<<row<<" ";
            }
            else{

            //print col. no.
            for(int col=1;col<=n-row+1;col++){
            cout<<col<<" ";
            }
         }
        }
        else{
            // for remaining rows
                cout<<row<<" ";
            //spaces
            for(int col=1;col<=n-row-1;col++){
                cout<<"  ";
            }
                cout<<n;
        }
        cout<<endl;
    }
    return 0;
}