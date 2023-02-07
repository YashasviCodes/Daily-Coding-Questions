## Find the town judge - QOTD 23 Jan 23

-----

Leetcode Link : [CLick](https://leetcode.com/problems/find-the-town-judge/description/)

-----

$⭐✔️Approach - 1 $ (using unordered map)



Time : $ O(n*m) $ 

> where n is number of rows, m is no of col$

Space : $O(n^2) $ 

> in worst case there can be n pairs in map, and each pair can have at max n-1 elements$



approach/steps : 

```cpp
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


*/
```



Code : 

```cpp
public:// -> Main function

    int findJudge(int n, vector<vector<int>>& arr) {

        // exception case - if there is only 1 person then he is the judge coz all knows judge, judge knows noone

        if(n==1) return 1;

        int rowSize = arr.size();

        int colSize = 2;

        // step 1 : create map(int,vector<int>) where int represents each element and vector represents all elements that the element knows

        unordered_map<int,vector<int>> map;

        // step 2 :insert each element and the elements it knows into map

        for(int i = 0; i < rowSize; i++){

            for(int j = 0; j < colSize; j++){

                map[arr[i][j]];

            }

            (map[arr[i][0]]).push_back(arr[i][1]);

        }

        // exception case : when n is more then total number of people that know each other(total entries in map) then return -1, coz that means their is more then 1 person that doesnt know any one

        if(map.size() < n) return -1;

        // step 3 : create a judge (int) and traverse whole map and whatever element has a empty vector as value, then it is the judge, if there is no judge, then return -1

        int judge = -999;

        int judgeCount = 0;

        for(auto i:map){

            if((i.second).size() == 0 ){

                judge = i.first;

                judgeCount++;

            }

        }

        // return -1 if (no judge is found or if there are more then 1 person that doesnt know any one)

        if(judgeCount > 1 || judge == -999) return -1;

        // now check if the judge we have found is known by every other element, if all knows hi, then return the judge at the end, if at least 1 element doesnt knows him then return -1

        for(auto i:map){

            int element = i.first;

            vector<int> knowsThem = i.second;

            int JudgeisPresent = false;

            for(auto j:knowsThem){

                if(j == judge) JudgeisPresent = true;

            }  

            // if atleast 1 element doesnt knows the judge then return -1, else keep going

            if(i.first == judge) continue; // dont check the judge, he knows himself we already know

            if(JudgeisPresent == false) return -1;

        }

        // when all knows the judge, we found our judge

        return judge;

    }

};
```

*Pictures for reference (Dry run) :-*

![1.jpeg](C:\Users\Yashasvi\Desktop\DSA%20-%20by%20LB\GFG,%20Leetcode%20-%20Que%20Of%20The%20Day\POTD%20-%20all%20markdowns\Markdown%20essentials\pics\Q8_JudgeInTown\1.jpeg)



![2.jpeg](C:\Users\Yashasvi\Desktop\DSA%20-%20by%20LB\GFG,%20Leetcode%20-%20Que%20Of%20The%20Day\POTD%20-%20all%20markdowns\Markdown%20essentials\pics\Q8_JudgeInTown\2.jpeg)

![3.jpeg](C:\Users\Yashasvi\Desktop\DSA%20-%20by%20LB\GFG,%20Leetcode%20-%20Que%20Of%20The%20Day\POTD%20-%20all%20markdowns\Markdown%20essentials\pics\Q8_JudgeInTown\3.jpeg)



END
