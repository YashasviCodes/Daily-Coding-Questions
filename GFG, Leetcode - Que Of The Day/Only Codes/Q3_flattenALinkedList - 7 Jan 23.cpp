/*
(✔️)Solved - 2 approaches 

7 Jan 23 - POTD (GFG)

  Question :- FLATTENING A LINKED LIST 

   input : 
    5 -> 10 -> 19 -> 28
    |     |     |     | 
    7     20    22   35
    |           |     | 
    8          50    40
    |                 | 
    30               45

   output :  5-> 7-> 8- > 10 -> 19-> 20-> 22-> 28-> 30-> 35-> 40-> 45-> 50.



/* ✔️⭐Approach - 2 (using recursion)
        
        explanation : 
        
                 step 1 :base case : if the root is null or the roots next is null then return root, i.e cant merge empty or single linked list
                 step 2 : reursion will merge the right linked lists and then return the root after nerging so store it into 'rightRoot'
                 step 3 : store the current root as 'leftRoot'
                 step : merge the left and right linked lists with 2 pointer logic for linked lists 
                 step 4 : create 2 points to nodes 'temp1' and 'temp2' and store the roots of left and right roots into them
                 step 5 : create a head node and a tail pointer with data -1
                 step 5 : run a loop while the temp1 not null && temp2 is non null 
                     step 6 : check if temp1s data is lesser then temp2 them point it at the bottom of tail & set temp1 = temp1 -> bottom
                     step 7 : else repeat step6 for 'temp2'
                 step 8 : if temp1 is non null them, attach temp1 at the tail's bottom and set tails next as nullptr
                 step 9 : else if temp2 is non null then attack temp2 at the bottom of tail and set temp2's next as null
                 step 10 : return the bottom node of head (because head is dummy head with data -1)
                
        ✅T : O(n) - n is total number of nodes in all linked lists
        ✅S : O(k) - k is total number of root nodes - for recursive call stack

          ☑️solved at gfg : https://practice.geeksforgeeks.org/viewSol.php?subId=eefef0d3d0ec6ba5dc94fa1f2205988c&pid=700192&user=yashasvcb6y
          ☑️solved at gfg : https://practice.geeksforgeeks.org/problems/da62a798bca208c7a678c133569c3dc7f5b73500/1
    */


/* ✔️Approach - 1 (brute force)
    
            explanation :- 
                    
        -> // Fun.1 : main function
        
             step 1 : create a vector 'ans' 
             step 2 : store the root nodes into a queue (FIFO)
             step 3 : run a loop while the queue is non empty 
                 step 4 : fetch out the top node of queue and pop it from the queue and store it in 'temp' node
                 step 5 : run a loop while temp is not null 
                   step 5.1 : store the data of temp into 'ans' vector and set temp = temp -> bottom
             step 6 : sort the ans vector 
             step 7 : now create a whole new linked list from the vector 'ans' data (make sure to insert data at the bottom of each node)
             step 8 : delete the dummy node & return the bottom node of head (because head is dummy node with data -1)
        
        ⚠️T : O(NlogN) : n is numbre of nodes in complete linked list
        ⚠️S : O(N)

          ☑️solved at gfg : https://practice.geeksforgeeks.org/viewSol.php?subId=eefef0d3d0ec6ba5dc94fa1f2205988c&pid=700192&user=yashasvcb6y
          ☑️solved at gfg : https://practice.geeksforgeeks.org/problems/da62a798bca208c7a678c133569c3dc7f5b73500/1

    */

      