// String to Zig Zag Pattern
// QOTD - 3 feb 23
// unsolved 
// link : https://leetcode.com/problems/zigzag-conversion/



// 1st attempt failed code for this question
/*
class Solution {
public:
    string convert(string s, int rowSize)
    {
        // we need a vector of vector of characters, to store our zigzag pattern (initialize the ans with '.' at all the places)
        int colSize;
        if(rowSize % 2 == 0)
            colSize = (s.length()/rowSize) + (s.length() % rowSize) + 2;
        
        else colSize = (s.length()/rowSize) +  (s.length() % rowSize);

        vector<vector<char>> ans(rowSize, vector<char>(colSize, '.'));

        // code 
        int index = 0;
        int col = 0;
        while(1){

            // inserting vertically (complete row)
            for(int row = 0; row <= rowSize-1; row++)
                ans[row][col] = s[index++];
            
            // incrementing column once a row is completely filled
            col++;

            // inserting col diagonally 
            int formulaRow = rowSize - 1 - (rowSize/2 + col - 1);

            int size;
            if(rowSize % 2 == 0){

                size = rowSize/2;
                for(int i = 0; i < size; i++)
                    ans[formulaRow][col++] = s[index++];
            }
            else{
                size = rowSize/2 - 1;
                for(int i = 0; i < size; i++)
                    ans[formulaRow][col++] = s[index++];
            }
            
            // diagonally insertion done
            if(col == colSize) break;
        }

        
        // now the pattern is saved in our 'ans' 2d vector, so traverse it row by row and whenever we get a character other than '.' then store it into a string 'resultStr' 
        string resultStr = "";
        for(int i = 0; i < rowSize; i++){
            for(int j = 0; j < colSize; j++)
                if(ans[i][j] != '.') 
                    resultStr.push_back(ans[i][j]);

        
        return resultStr;
        
        
    }

};

*/