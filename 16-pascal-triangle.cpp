/* pascal triangle 
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
1 6 15 20 15 6 1 

*/

#include<iostream>
using namespace std;

int fact(int n){
    int ans=1;
    for(int i=n; i>=1;i--){
        ans *=i;
    }
    return ans;  //factorial of given numbe
}
int ncr(int row,int col){  

    int a=fact(row);
    int b=fact(col);
    int c=fact(row-col);
    int finalAns=a/(b*c);       //generate result of 
                                                //      Row
                                                //         C              =  row !/ col ! * (row-col)!
                                                 //         column
    return finalAns;
}


int main(){
    int n=7;
    for(int row=0; row<n; row++){ 
        for(int col=0; col<=row; col++){
            int val=ncr(row,col);
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}