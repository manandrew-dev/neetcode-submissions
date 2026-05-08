class Solution {
 public:
  bool isValidSudoku(vector<vector<char>>& board) {
    vector<vector<int>> columns(9, vector<int>(9,0));
    vector<int> row(9);
    vector<int> square1(9);
    vector<int> square2(9);
    vector<int> square3(9);
    for (int i = 0; i<board.size(); i++){
      fill(row.begin(), row.end(), 0);
      
      if (i%3 == 0){
        fill(square1.begin(), square1.end(), 0);
        fill(square2.begin(), square2.end(), 0);
        fill(square3.begin(), square3.end(), 0);
      }

      for (int j = 0; j<board[i].size(); j++){
        if (board[i][j]!='.'){
          int element = ((int) board[i][j]) - 48;
          
          //row
          if (row[element-1]){
            return false;
          }
          row[element-1] = 1;

          //squares
          if (j<3){
            if (square1[element-1]){
              return false;
            }
            square1[element-1] = 1;
          } else if (j<6){
            if (square2[element-1]){
              return false;
            }
            square2[element-1] = 1;
          } else {
            if (square3[element-1]){
              return false;
            }
            square3[element-1] = 1;
          }

          //columns
          if (columns[j][element-1]){
            return false;
          }
          columns[j][element-1] = 1;
        }
      }
    }
    return true;
  }
};