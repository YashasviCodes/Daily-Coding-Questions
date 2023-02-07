// (✔️)Solved - Find the Town judge - 1 approach 

/* ✔️⭐Approach - 1 (using unordered map)

    explanation :- 

            // -> Main function
    
                step 0: exception case - if there is only 1 person then he is the judge coz all knows judge, judge knows noone 
                
                step 1 : create map(int,vector<int>) where int represents each element and vector represents all elements that the element knows
                
                step 2 :insert each element and the elements it knows into map 
                step 2.2 : exception case : when n is more then total number of people that know each other(total entries in map) then return -1, coz that means their is more then 1 person that doesnt know any one 
                
                step 3 : create a judge (int) and traverse whole map and whatever element has a empty vector as value, then it is the judge, if there is no judge, then return -1
                
                step 4 : return -1 if (no judge is found or if there are more then 1 person that doesnt know any one)
                step 5 : now check if the judge we have found is known by every other element, if all knows hi, then return the judge at the end, if at least 1 element doesnt knows him then return -1
                    step 5.1 :if atleast 1 element doesnt knows the judge then return -1, else keep going
                    step 5.2 : dont check the judge, he knows himself we already know

                step 6 : when all knows the judge, we found our judge


 n = number of elements in total matrix

   ✅T : O(n*m)  -> where n is number of rows, m is no of col
   S : O(n^2)  -> in worst case there can be n pairs in map, and each pair can have at max n-1 elements 


    ☑️solved at leetcode : https://leetcode.com/problems/find-the-town-judge/submissions/883509128/



*/
