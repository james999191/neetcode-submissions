class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        for row in range(9):
            seen = set()
            for i in range(9):
                if board[row][i] == ".":
                    continue
                if board[row][i] in seen:
                    return False
                seen.add(board[row][i])
        
        for column in range(9):
            seen = set()
            for i in range(9):
                if board[i][column] == '.':
                    continue
                if board[i][column] in seen:
                    return False
                seen.add(board[i][column])
        
        for box in range(9):
            seen = set()
            for i in range(3):
                for j in range(3):
                    row = (box//3) * 3 + i
                    column = (box % 3) * 3 + j
                    if board[row][column] == ".":
                        continue
                    if board[row][column] in seen:
                        return False
                    seen.add(board[row][column])
        
        return True
        