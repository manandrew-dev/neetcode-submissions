class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        columns = []
        for i in range(9):
            columns.append([0]*9)
        for i in range(len(board)):
            if i%3 == 0:
                row1 = [0]*9
                row2 = [0]*9
                row3 = [0]*9
                square1 = [0]*9
                square2 = [0]*9
                square3 = [0]*9
            for j in range(len(board[i])):
                if board[i][j]!=".":
                    if i%3 == 0:
                        if row1[int(board[i][j])-1]:
                            return False
                        row1[int(board[i][j])-1] = 1
                    elif i%3 == 1:
                        if row2[int(board[i][j])-1]:
                            return False
                        row2[int(board[i][j])-1] = 1
                    elif i%3 == 2:
                        if row3[int(board[i][j])-1]:
                            return False
                        row3[int(board[i][j])-1] = 1

                    if j<3:
                        if square1[int(board[i][j])-1]:
                            return False
                        square1[int(board[i][j])-1] = 1
                    elif j<6:
                        if square2[int(board[i][j])-1]:
                            return False
                        square2[int(board[i][j])-1] = 1
                    else:
                        if square3[int(board[i][j])-1]:
                            return False
                        square3[int(board[i][j])-1] = 1

                    if columns[j][int(board[i][j])-1]:
                        return False
                    columns[j][int(board[i][j])-1] = 1
        return True





 