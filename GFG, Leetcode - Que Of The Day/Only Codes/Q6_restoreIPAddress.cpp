
// (✔️)Solved - Restire IP Addresss - 1 appproach 
// QOTD Leetcode - 21 Jan 23 


/* ✔️⭐Approach - 1 (recursive & backtracking)

    basic idea  :- for s = "1011" we have 3 choices at 1st level, i.e wheter we include then [1] , we can include [10] , and  also [101] , if we go futther [1011] this is out of the range 255 , so at every level we got 3 choices to make thats y we can use recursion and backtracking here 
    
    explanation :- 

            ->// Fun.2 : solve()
    
                step 1 : base case - if the ans is of length 4 , and all the characters of s are consumed, then push the ans into result
                step 2 : run a loop from 1 to 3 
                    step 3 : break - if index + i > s.size() i.e if this substring doesnt exist
                    step 4 : else - fetch out the substring from 's' and convert it into int and save it 
                    step 5 : check if the part is in range, and with no leading zeros then push it into ans 
                        step 6 : if the parts length is more then 1 with leading 0 then break the loop (i.e no need for check for greater value of i)
                        step 7 : if the parts length 1, then push it into ans (even when its 0) 
                            step 8 : recursively call for index + i, and pop the back while coming back
                            
         ->// Fun.1 : main function
             step 1 : create vector<string> ans and result, and index= 0 
             step 2 : call function.2 solve()
             step 3 : return result

    ✅T : O(3^n) - n  is total number of char in a string 
    ✅S : O(3^n) - recursive stack space

    
    ☑️solved at leetcode : https://leetcode.com/problems/restore-ip-addresses/description/
    ☑️solved at gfg : https://practice.geeksforgeeks.org/problems/generate-ip-addresses/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

*/
