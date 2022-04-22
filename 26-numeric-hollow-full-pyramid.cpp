/* Numeric hollow full pyramid 

    1
   1 2 
  1   3
 1     4 
1 2 3 4 5 


*/

#include<iostream>
using namespace std;

int main(){
    int n=5;

    for(int row=1;row<=n;row++){

        //spaces
        for(int col=1;col<=n-row;col++){
            cout<<" ";
        }

         if (row == 1 || row == n)
        {
            // number
            for (int col = 1; col <= row; col++)
            {
                cout << col<< " ";
            }
        }

         else
        {   
            // for remaining rows
             for (int col = 1; col <= row; col++)
            {
                if(col == 1){

                cout << col<< " ";
                }
            }
            // spaces
            for (int col = 1; col <= row-2; col++)
            {
                cout << "  ";
            }
            cout << row<<" ";
        }
        cout<<endl;
    }
    return 0;
}