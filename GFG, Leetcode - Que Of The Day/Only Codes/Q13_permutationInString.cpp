
// (✔️)Solved - Permutation In String - 1 approach

/* ✔️Approach - 1 (using sliding window )

        explanation :- 

                -> // Fun.2 : areVectorsEqual() 
                
                    step 1 : we need to compare the frequencies of all the characters of v1 with those characters in v2, so for that, if for a index 'i' if freq of character is equal in both the vectors, then keep doing, if not then return false
                    step 2 : if both checked and no fault found, return true

            public:
                -> // Main function
                    step 0 : exception case - we need to check if the str1's any 1 permuation using all char of s1 is present in s2 or not, so just think if s1 is longer then s2, then there can never be a permutation of s1 in s2 so return false
                    
                    step 2 : create 2 vector<int> coz we want to map characters with index and set the values as the frequency, make sure to declare both of size 26, else runtime error will occur
                    
                    step 3 :map all characters of s1, with index of v1, and store their frequencies, also map 1st 'str1.length()' characters of s2 in v2 
                    step 4 : check if both the vectors , are equal then return true
                    step 5 : if not equal then run loop from where we left the index, till the end of s2
                        step 6 : fetch the last inserted character'a index in the string s2, then find the character at this index, then decrement this characters freq  (using formula = index - s1.length()) , if s1 = "abc" s2 = "a[bcd]ef" so using formula lets sat we are on index =  4 (e), and we need to find the ind of 1st character of window in s2, using formulaIndex = 4 - 3 = 1, so lets fetch the character = s2[formulaIndex] => s2[1] i.e b so combining all the story we have [ windowStartCharIndex = s2[index - s1.length()] - 'a' ]
                        step 7 : fetch the next character from the s2 and find its index in v2, then increment it by 1
                        step 8: increament the index
                        step 9: if v1 == v2, then return yes
                    step 10 : loop ends means no permutation of s1 found in s2

        ✅Time : O(n*26) - where n is length of str2 (longer string) and for each character we check after inserting it whether v1 == v2, so in checking them worst case time will be O(26) for each char of s2
        ✅Space : O(52) - v1 and v2 of 26 blocks each 

        ☑️solved at leetcode : https://leetcode.com/problems/permutation-in-string/description/

    */