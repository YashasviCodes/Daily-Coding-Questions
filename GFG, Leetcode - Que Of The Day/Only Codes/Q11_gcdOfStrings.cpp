// (✔️)Solved - GCD of 2 strings - 1 approach 
// QOTD - 1 feb 23
// link : https://leetcode.com/problems/greatest-common-divisor-of-strings/


/* ✔️⭐Approach - 1 (simple iterative approach )

        explanation :- 
        
            ->// Fun.3 : join() - returna a new string after concatinating a substring 'times' times
                step 1 :  for understanding assume that possibleDivisor = 'ab' and times = 3, so we need to return "ababab" so use a simple for loop and concatinate possibleDivisor string 'times' times into a empty string and then return it at the end

            ->// Fun.2 : isItADivisor() - returns true if given K length string is divisor , else false

                // note : k is length of substring, not the index
                step 1:  when the substrings length doesnt leave remainder 0 on dividing both, then this means substring cant be a divisor 
                step 2 :  if we reached here that means there can be substring of length k,
                
                //note : so how do we find if s.substr(0,k) is a divisor or not ? 

                        lets say our possible divisor = "ab" so we want to check if it divides str 1 = "ababab" and str2 = "abab" completely or not,  for that we will first find the number of times we need to concatenate our k so that it may form the str1 and str2 , and then we store them in 'times1' and 'times2' and then we will call fun.3 : which will concatenate k both times 'times1' and 'times2' and then check if they form both str1 and str2 ,  if yes then return true 
                

                step 3 : call fun.3 : join() and if both the new joined strings equals to st1, str2 then return true 
                    step 3.1 : reached here means 'possibleDivisor' is our divisor for str1, str2
                step 4 : means 'possibleDivisor' is not a divisor

            ->// Fun.1 : main fuction
            
                step 1 : we will start checking from the last of the smaller string, and then go on till 0, (reason discussed in nodes)
                note that i is not index, its the length of substr eg. for "abab" i starts from 4, and not 3, so thats why we will stop loop if the i becomes 0 (will not run for substring length 0)

                step 2 : check if a divisor of length 'i' is possible or not, if yes then check if is it a divisor or not, if yes then return it 
                step 3 : when no gcd found


    
       ✅Time : O(N*N) - where N is length of the min string 
       ✅Space : O(1)

    */
