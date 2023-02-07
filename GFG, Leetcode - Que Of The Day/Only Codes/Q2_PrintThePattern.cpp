//(4-Sep-22)
/*

n = 3

1*2*3*
--4*5*
----6*   
    

*/

#include <iostream>
using namespace std;

void printThePattern(int n){

    int dashCount = 0;  //this we will use to print dashes in the pattern 

    int number = 1;   // this we will use to print numbers in our pattern, and its 1 coz number has to be printed in increasing order from start to end row  

    int N = n;
    

    // printing the left square
    for(int row = 0; row < n; row ++){

        //printing dashes before number
        int count = 0;
        while(count++ != dashCount) cout << "-";
        dashCount += 2;

        // printing columns
        int colCount = 2*(n - row);
        // cout << colCount << endl;
        for(int col = 1; col <= colCount; col = col + 2){
            cout << number++ << "*" ;
        }
        cout << endl;
    }

    // printing the right square
    number = (n * n + 1); // because number has to be printed in reverse now from start to end row
    for(int row = 0; row < n; row++){

        // note that on right part no dash needs to be printed

        // printing numbers 
        int colCount = 2*(n - row) - 1;
        for(int col = 1; col <= colCount; col = col + 2){
            cout << number-- << "*";
        }
        cout << endl;
    }
}

int main(){

    int n;
    cout << "Enter a number : ";
    cin >> n;

    printThePattern(n);



    
}