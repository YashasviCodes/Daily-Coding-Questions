## Snakes and Ladders - QOTD 24 Jan 23

 ---

Leetcode Link : [Click](https://leetcode.com/problems/snakes-and-ladders/solutions/)

---

Time : $O(n*n)$ 

> in worst case we will have to visit all the cells of the matrix 

Space : O(n*n)

> 2 d matrix 'isVisited' to store boolen if the cell is visited or not 



Approach / Steps 

```cpp
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


*/
```

code :-

```cpp
private://fun.2 :  function to return row and col coordinates of any 'data' ,for any matrix of size 'n'
    void findCordinates(int n, int data, int &row, int &col){

        row = (n-1) - (data-1) / n;

        col = (data-1)%n;

        if(row%2 == n%2) col = n-1-col;
    }

public:
    // Main function
    int snakesAndLadders(vector<vector<int>>& board) {

        int n = board[0].size() ; //n x n matrix

        // step 1 : create a matrix isVisited[n][n], to not visit the already visited elements again (initialize all the elements as false initially)
        vector<vector<bool>> isVisited(n, vector<bool>(n,false));
        
        // step 2 : now create a q, and push 1 into it (because initially we are at 1 ) (also mark 1 as visited into the visited array[note thet 1 will be at board[n-1][0] place])
        queue<int> q;
        q.push(1);
        isVisited[n-1][0] = true;

        // step 3 : initialize steps = 0
        int steps = 0;

        // step 4 : now traverse this q while it is not empty
        while(!q.empty()){

            //step 5: find the curr size of the q and run a loop from 0 to curr size,note that this below loop is added coz we should increment the steps once all posiblites to where we can move for 1 step are visited.
            int size = q.size();
            for(int j = 0; j < size; j++){

                // step 6 : pop the front element 
                int frontEle = q.front();
                q.pop();

                // step 6 : if front element is already the final box, then return steps 
                if(frontEle == n*n) return steps;

                // step 7 : now run a loop from i = 1 to 6 
                for(int i = 1; i <= 6; i++){

                    // step 8 : create a int 'newData ' and add this front ele with i and store it in newData
                    int newData = frontEle + i;

                    // step 9 : if the newData is greater then the matrix last number, then in that case break the loop, coz we have explored the possiblities from 1 to 6 
                    if(newData > n*n) break;
                    
                    // step 10 : call fun.2 to and find the coordinates of this new Data in input matrix (board) 
                    int row, col;
                    findCordinates(n,newData,row,col);

                    // step 11 : if the current cell we are on is visited, then continue to next cell, else visit it
                    if(isVisited[row][col]) continue;
                    isVisited[row][col] = true;

                    
                    // step 12 : if current cell is not a snake or ladder then store the sum into the q 
                    if(board[row][col] == -1) q.push(newData);

                    // step 13 : if the current cell is a ladder or snake, then push the destination value of ladder / snake into queue and not the current cell value
                    else
                        q.push(board[row][col]);

                }
                
            }
            // step 14 : increment steps by 1 once all the possible next steps have been visited for 1 front element eg. incrment 1 when after cell = 1, (2,3,4,5,6,7) have also been visited and no answer was found 
            steps++;
            
        }

        // step 15 : return -1 when all loops are complete, and we still did not reached the final cell
        return -1;
    }
```



dry run for below test case :- 

Input :- 

```cpp
board = 
[[-1,-1,-1,-1,-1,-1],
 [-1,-1,-1,-1,-1,-1],
 [-1,-1,-1,-1,-1,-1],
 [-1,35,-1,-1,13,-1],
 [-1,-1,-1,-1,-1,-1],
 [-1,15,-1,-1,-1,-1]]
```

<img title="" src="file:///C:/Users/Yashasvi/Desktop/DSA%20-%20by%20LB/GFG,%20Leetcode%20-%20Que%20Of%20The%20Day/POTD%20-%20all%20markdowns/Markdown%20essentials/pics/Q9_Snakes_n_Ladders/test%20case.png" alt="test case.png" width="355">

***dry run :-***



![1.jpeg](C:\Users\Yashasvi\Desktop\DSA%20-%20by%20LB\GFG,%20Leetcode%20-%20Que%20Of%20The%20Day\POTD%20-%20all%20markdowns\Markdown%20essentials\pics\Q9_Snakes_n_Ladders\1.jpeg)

![2.jpeg](C:\Users\Yashasvi\Desktop\DSA%20-%20by%20LB\GFG,%20Leetcode%20-%20Que%20Of%20The%20Day\POTD%20-%20all%20markdowns\Markdown%20essentials\pics\Q9_Snakes_n_Ladders\2.jpeg)

![3.jpeg](C:\Users\Yashasvi\Desktop\DSA%20-%20by%20LB\GFG,%20Leetcode%20-%20Que%20Of%20The%20Day\POTD%20-%20all%20markdowns\Markdown%20essentials\pics\Q9_Snakes_n_Ladders\3.jpeg)

![4.jpeg](C:\Users\Yashasvi\Desktop\DSA%20-%20by%20LB\GFG,%20Leetcode%20-%20Que%20Of%20The%20Day\POTD%20-%20all%20markdowns\Markdown%20essentials\pics\Q9_Snakes_n_Ladders\4.jpeg)

![5.jpeg](C:\Users\Yashasvi\Desktop\DSA%20-%20by%20LB\GFG,%20Leetcode%20-%20Que%20Of%20The%20Day\POTD%20-%20all%20markdowns\Markdown%20essentials\pics\Q9_Snakes_n_Ladders\5.jpeg)

![6.jpeg](C:\Users\Yashasvi\Desktop\DSA%20-%20by%20LB\GFG,%20Leetcode%20-%20Que%20Of%20The%20Day\POTD%20-%20all%20markdowns\Markdown%20essentials\pics\Q9_Snakes_n_Ladders\6.jpeg)

![7.jpeg](C:\Users\Yashasvi\Desktop\DSA%20-%20by%20LB\GFG,%20Leetcode%20-%20Que%20Of%20The%20Day\POTD%20-%20all%20markdowns\Markdown%20essentials\pics\Q9_Snakes_n_Ladders\7.jpeg)

![8.jpeg](C:\Users\Yashasvi\Desktop\DSA%20-%20by%20LB\GFG,%20Leetcode%20-%20Que%20Of%20The%20Day\POTD%20-%20all%20markdowns\Markdown%20essentials\pics\Q9_Snakes_n_Ladders\8.jpeg)

END 
