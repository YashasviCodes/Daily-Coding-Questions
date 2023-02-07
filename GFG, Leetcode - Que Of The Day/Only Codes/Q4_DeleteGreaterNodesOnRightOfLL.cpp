
// (✔️)Solved - Delete Nodes that are greater on right on linked lists - 2 approaches 
// QOTD - GFG 

/* ✔️⭐Approach - 3 (using recursion ) - BEST

        basic idea :- what we do here is we want recursion to somehow remove the greater linked list of the right linked list and then return the head of new linked list from right, then we check the condition if the linekd list head is smaller then the linked list right head then return the head 
        explanation : 
        
            // -> main fun :
                step1 : base case - if the head is null then return null
                step 2 : recursion will somehow remove greater nodes for right linked list, and will return the head of new right part, connect the head and right head
                step 3 : if right head is greater then 'head' then return the righthHead, else return head
        
        ✅T : O(n) - number of nodes in linked list
        ✅S : O(n) - rec stack 

        ☑️solved at gfg : https://practice.geeksforgeeks.org/problems/delete-nodes-having-greater-value-on-right/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
        ☑️solved at leetcode : https://leetcode.com/problems/remove-nodes-from-linked-list/submissions/875226561/

    */

/* ✔️⭐Approach - 2 (using deque) - Optimal 
    
        explanation :- 
            
            Fun.1 : main fun
            
                 step 1 : create a doubly ended q dq<node*>, create temp node to store head
        
                 step2 : run a loop while temp is not null
                     step 3 : if dq is empty, push temp node from back of dq and update the temp = temp -> next
                     step 4 : else if the dq is non  empty
                     then if the dqs top is greater then dq back then pop the front node from 'dq'
                     step 5 : else if the temps data is smaller then the dq's back node then push the temp into the dq, and set temp = temp -> next
        
                 step 6 : create 2 nodes 'mainHead = dq.front()' and 'tail = mainHead' , pop the front of dq
                 Step 7 : run a loop while the dq is not empty
                     step 7.1 : create a temp node and save the front of dq intp it, now pop fron front 
                     step 7.2 : set tail -> next = temp, tail = temp
                 step 8 : return the mainHead
                
        ✅T : O(n)
        S : O(n) - for dequeue

        ☑️solved at gfg : https://practice.geeksforgeeks.org/problems/delete-nodes-having-greater-value-on-right/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
        ☑️solved at leetcode : https://leetcode.com/problems/remove-nodes-from-linked-list/submissions/875226561/


    */

   /*⚠️✔️[TLE] Approach - 1 (simple O(nsq sol))
        
        explanation :
        
        // -> Main fun 
                
         step 1 : create 3 pointers tempHead = head, temp = head -> next, tempHeadPrv = null
         step 2 : run a loop while thempHead & temp both are non null
             step 3 : when the temp's data is smaller than tempHeads data ,
                 step 4 : when the tempHead and head are on same node
                     step 4.1 : head = head -> next
                     step 4.2 : create a node 'a' and store tempHead into it, then delete 'a' node
                     step 4.3 : update tempHead = head
                     step 4.4 : temp = tempHead -> next
                 step 5 : else when the tempHead and heaad are not on same node
                     step 5.1 : create a node 'a' and store tempHead into it
                     step 5.2 : update tempHead = tempHead -> next
                     step 5.3 : update tempHeadPrv -> next = tempHead
                     step 5.4 : temp = tempHead -> next

            step 6 :  when the temps data is not smaller than tempHead's data
                 step 6.1 : set temp = temp -> next
                 step 6.2 : if tempHead = null then
                     step 6.3 : update tempHEadPrv = tempHead, tempHead = tempHead -> next, 
                     step 6.4 : if tempHead == null then break
                     step 6.5 : else temp = tempHead -> next
         step 7 : return the head node
        
        ⚠️T : O(N^2)  (worst case) -> n is total nodes in linked list 
        ✅S : O(1)
    
        ☑️solved at gfg : https://practice.geeksforgeeks.org/problems/delete-nodes-having-greater-value-on-right/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
        ⚠️TLE at TC 27/33 on leetcode : https://leetcode.com/problems/remove-nodes-from-linked-list/submissions/875226561/

    */ 