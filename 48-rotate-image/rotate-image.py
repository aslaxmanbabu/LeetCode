class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        n = len(matrix)
        for i in range(n):
            for j in range(n-1, i, -1):
                if i == j:
                    pass
                
                temp = matrix[i][j]
                matrix[i][j] = matrix[j][i]
                matrix[j][i] = temp

        for i in range(n//2):
            for row in matrix:
                row[i], row[n-1-i] = row[n-1-i], row[i]

        