
// (✔️)Solved - Palindrome Partitioning 

 /*✔️⭐Appraoch - 1 (recursive & backtracking)

        explanation :- 

               -> // Fun.3 - to check if the string we are inserting into 'ans' vector is palindrome or not

                -> // Fun.2 : this function will fill out result 2d vector with all the possible /partitioning combinations that can be palindrome

                    step1 : base case- if the string is completely consumed, then push the ans into result
                    step 2 : run a loop for complete length of string (including i =  length )
                        step 2.1 : if the sub part doesnt exsist then break the loop 
                        step 2.2 : fetch the part of string and then check if it is palindrome or not 
                        step 2.3 : if part is palindrome then push it into the ans , and recursively call for index = index + i, while returning pop the last element of the ans 
            

                -> // MAIN Function
                        step 1 : create a 'ans' vector<string> and a 'result' 2d string vector, index = 0
                        step 2 : call function.2 palindromePart(s, result, ans, index)

        ✅T : O(n^n) 
          S - O(n^n) [worst case]

          
        ☑️solved at leetcode : https://leetcode.com/problems/palindrome-partitioning/description/

    */