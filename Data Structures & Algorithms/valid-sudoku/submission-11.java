class Solution {
  public boolean isValidSudoku(char[][] board) {
    int[][] columns = new int[9][9];
    int[] square1 = new int[9];
    int[] square2 = new int[9];
    int[] square3 = new int[9];
    int[] row = new int[9];
    for (int i = 0; i<board.length; i++){
      if (i%3 == 0){
        square1 = new int[9];
        square2 = new int[9];
        square3 = new int[9];
      }
      row = new int[9];
      for (int j = 0; j<board[i].length; j++){
        if (board[i][j]!='.'){
          if (j<3){
            if (square1[(int)(board[i][j])-49] == 1){
              return false;
            }
            square1[(int)(board[i][j])-49] = 1;
          }
          else if (j<6){
            if (square2[(int)(board[i][j])-49] == 1){
              return false;
            }
            square2[(int)(board[i][j])-49] = 1;
          }
          else if (j<9){
            if (square3[(int)(board[i][j])-49] == 1){
              return false;
            }
            square3[(int)(board[i][j])-49] = 1;
          }

          if (row[(int)(board[i][j])-49] == 1){
            return false;
          }
          row[(int)(board[i][j])-49] = 1;

          if (columns[j][(int)board[i][j]-49] == 1){
            return false;
          }
          columns[j][(int)board[i][j]-49] = 1;
        }
      }
    }
    return true;
  }
}