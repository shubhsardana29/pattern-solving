/* alpha palindrome pattern 1

A
ABA
ABCBA
ABCDCBA
ABCDEDCBA

*/

#include<iostream>
using namespace std;

int main(){
    int n=5;
    char count;
    for(int row=1; row<=n;row++){
        count='A'-1;
        for(int col=1; col<=row;col++){
            count++;
            cout<<count<<" ";
        }
        for(int col=1; col<=row-1; col++){
            count--;
            cout<<count<<" ";
        }
        cout<<endl;
    }
    return 0;
}