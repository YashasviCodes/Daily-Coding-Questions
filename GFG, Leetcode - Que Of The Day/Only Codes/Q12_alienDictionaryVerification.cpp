// (✔️)Solved - Alien Dictionary verification - 1 approach 
// QOTD Leetcode - 2 Feb 23
// link : https://leetcode.com/problems/verifying-an-alien-dictionary/

/* ✔️⭐Approach - 1 (simple iterative)

        explanation :- 
            
    ->// Main function
         step 1: we need to store all the alphabets in with their order in string 'order', in a unorderd_map<char,int>
         step 2 : now we need to traverse the complete 'words' vector, and compare the characters of 2 adj strings 
             step 3 : run the loop untill any of the string gets completely consumed

                 step 4: when the ch1 is placed before ch2 in order, then no need to further check these 2 words, juste go to next 2 words
                 step 5 : when the ch1 is placed after ch2, that means its not sorted, returnf alse
                 step 6 : when both the characters are same, then go to next characters. 
             step 7 : when str2 ends but str1 is not fully consumed, this means not sorted, return false
         step 8 : all sorted, return true 

        ✅Time : O(n*m) - where n is number of strings in array 'words' and on av each word has m characters in it 
        ✅Space : O(26) - to store all the alphabets in the unordered_map 

*/

