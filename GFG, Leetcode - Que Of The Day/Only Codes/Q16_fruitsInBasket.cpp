
// ✔️(Solved) Fruits in basket - 2 approaches

/* ✔️⭐Approach - 2 (optimised approach -1 )(using binary search with ordered_map & search space concept)

        explanation :- 

                -> // Fun.2 : isMidAPossibleAns() returns true, when mid can be a possible answer, else return false
                            step 1 : we will check eevery contigious 'mid' elements of the fruits array, and whenver we find that mid can be a ans, then return true, ekse return false
                            step 1 : create map to store element with their respective frequencies
                            step 2 : insert 1st 'mid' elemts into map
                            step 3 : if we found a ans, return true
                                step 3.1 : find the data to be removed
                                step 3.2 : find this data in teh map, and decrement it, and if its freq becomes 0, then delete this key-value pair
                                step 3.2 : increment the index by 1
                                step 3.3 : if we found a ans, return true
                            step 4 :  'mid' is not a possible ans 

                -> // Main function

                        step 1 : we will maintain 'int ans = INT_MIN' and will apply binary search on search space low = 1, high = size of vector 'fruits'
                        step 2 : run loop while low <= high
                            step 2.1 : when 'mid' is a possible ans, store it and find for a larger ans
                            step 2.2 : if mid is not a possible ans, then find a possible ans in the left side of the search space
                        step 3 : return ans 
    

     ✅T : O(N*logN*logN) - logN for main fun, NlogN for insertion in map
     ✅S : O(1)

     ☑️solved at leetcode : https://leetcode.com/problems/fruit-into-baskets/description/


*/


/*  [⚠️72/91 testcase TLE] - using unordered Map
        

        Approach - 1 (using binary search & search space concept) - unordered map
        
        ⚠️ T : O(N^2)*LogN
        ⚠️ S : O(N) - map

    */