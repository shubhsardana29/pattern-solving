/* Numeric palindrome pattern 1

1
121
12321
1234321
123454321

*/

#include<iostream>
using namespace std;

int main(){
    int n=5;
    int count;
    for(int row=1; row<=n;row++){
        count=0;
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