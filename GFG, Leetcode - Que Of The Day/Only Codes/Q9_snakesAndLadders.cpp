
// (✔️)Solved - Snakes and Ladders - 1 approach 
// QOTD Leetcode - 24 Jan 23 

/* ✔️⭐Approach - 1 (using BFS)

        explanation :- 

                ->//fun.2 : 
                    
                    step 1 : use formula 

                        row = (n-1) - (data-1) / n;
                        col = (data-1)%n;
                        if(row%2 == n%2) col = n-1-col;
                    

                ->// main function

                step 1 : create a matrix isVisited[n][n], to not visit the already visited elements again (initialize all the elements as false initially)
                step 2 : now create a q, and push 1 into it (because initially we are at 1 ) (also mark 1 as visited into the visited array[note thet 1 will be at board[n-1][0] place])
                step 3 : initialize steps = 0
                step 4 : now traverse this q while it is not empty
                    step 5: find the curr size of the q and run a loop from 0 to curr size,note that this below loop is added coz we should increment the steps once all posiblites to where we can move for 1 step are visited.
                        step 6 : pop the front element 
                        step 7 : if front element is already the final box, then return steps 
                        step 8 : now run a loop from i = 1 to 6 
                            step 9 : create a int 'newData ' and add this front ele with i and store it in newData
                            step 10 : if the newData is greater then the matrix last number, then in that case break the loop, coz we have explored the possiblities from 1 to 6  
                            step 11 : call fun.2 to and find the coordinates of this new Data in input matrix (board) 
                            step 12 : if the current cell we are on is visited, then continue to next cell, else visit it
                            step 13 : if current cell is not a snake or ladder then store the sum into the q 
                            step 14 : if the current cell is a ladder or snake, then push the destination value of ladder / snake into queue and not the current cell value
                    step 15 : increment steps by 1 once all the possible next steps have been visited for 1 front element eg. incrment 1 when after cell = 1, (2,3,4,5,6,7) have also been visited and no answer was found 
                step 16 : return -1 when all loops are complete, and we still did not reached the final cell

    ✅Time : O(n*n)
        - in worst case we will have to visit all the cells of the matrix
        
    ✅Space : O(n*n)
        - 2 d matrix 'isVisited' to store boolen if the cell is visited or not

    ☑️solved at leetcode : https://leetcode.com/problems/snakes-and-ladders/solutions
*/