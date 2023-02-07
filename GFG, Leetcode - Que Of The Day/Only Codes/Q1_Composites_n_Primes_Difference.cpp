/*  Solved (✔️)

Given two integers L and R find the difference of number of composites and primes between the range L and R (both inclusive).

Input: L = 4, R = 6
Output: 1

Explanation: Composite no. are 4 and 6.   And prime is 5.  ans => 2 - 1 = 1

*/

/* ✔️⭐ Approach (iterative) :- 

         exp -> step 1 : create 2 vectors 'primes' & 'composites'
                step 2 : from L to R iterate each number
                step 3 : handle exception cases  1 , 2.
                step 4 : every time a prime and composite number is found, simply store them into the vectors
                step 5 : find the difference between lengths of composites & primes vectors, return result.

         T : O(nlog(n))     where n = R - L + 1
	     S : O(n)
 */

#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int CompPrimeDifference(int L, int R){
		    
    //  step 1 : create 2 vectors 'primes' & 'composites'
    vector<int> primes;
    vector<int> composites;
    
    // step 2 : from L to R iterate each number
    for(int number = L; number <= R; number++){
        
        //exception case - L = R = 1 
        if(number == 1) continue;
        if(number == 2){
            primes.push_back(2);
            continue;
        } 
        
        // step 3 :- for each element check if its prime/ composite and store it accordingly 
        int root = ceil(sqrt(number)); 
        
        bool isComposite = false;
        for(int i = 2; i <= root; i++){
            
            // when a composite number found
            if(number % i == 0){
                composites.push_back(number);
                isComposite = true;
                break;
            }
            
        }
        
        // when a prime number found
        if(isComposite == false) primes.push_back(number);
        
    }
    
    // step - 4 : find the difference between lengths of composites & primes vectors, return result.
    return composites.size() - primes.size();
    
}


int main(){
    
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - " << endl;

    int left, right;

    cout << "Enter Left & Right (space separated) : ";
    cin >> left >> right;

    int result = CompPrimeDifference(left, right);

    cout << "Resulting Difference : " << result << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - " << endl;

}



// solved at gfg  :- https://practice.geeksforgeeks.org/problems/composite-and-prime0359/1