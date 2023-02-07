
// ✔️(Solved) - find nth element in 3 fibonacci series - 2 approach (1 solved, 1 TLE) 
// QOTD - 30 Jan 23
// Leetcode link : https://leetcode.com/problems/n-th-tribonacci-number/submissions

/* ✔️⭐ Approach - 2 (simple recursive approach)
        explanation :- 

        -> // Fun.2 : solve()

                 step 1 : base case 
                 step 2 : we will check if the Tn we want already exist in map, if yes then return that value
                
                 step 3 : if the desired value of Tn is not in the map then we need to calculate it every time we calculate a value of Tn we will store it in the map
                 step 4 : we want recursion to give us values of Tn-1 Tn-2 Tn-3, and then we add up and return them as Tn 
        
   ->// main fucntion
    
         step 1 : we want to map every Tn with its resulting value, 

    ✅Time : O(3^n) bit it is not 3^n is bigger test cases as we have used map to memorize the valuess
    ✅Space : o(n) - for map and recursive stack 

*/

/* [⚠️TLE] Approach - 1 (simple recursive approach)

    explanation :- 

    -> Main function
        step 1 :  base case for n=0 return 0, for n = 1 and 2 return 1
        step 2 :  we want recursion to give us values of Tn-1 Tn-2 Tn-3, and then we add up and return them as Tn 
    

    ⚠️Time : O(3^n) coz at every step we have 3 recursive calls i.e we need to calculate 3 different values
    ⚠️Space : O(n) - recursive call stack height

*/

