class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        row = []
        col = []
        rd = [0 for i in range(len(matrix[0]))]
        m = len(matrix)
        n = len(matrix[0])
        for i in range(m):
            for j in range(n):
                if matrix[i][j] == 0:
                    row.append(i)
                    col.append(j)

        for i in row:
            matrix[i] = rd

        for j in col:
            for i in range(len(matrix)):
                matrix[i][j] = 0
        