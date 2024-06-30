class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        m = len(matrix)
        n = len(matrix[0])
        max = m*n
        count = 0
        i = 0
        result = []
        while count < max:
            for e in range(i, n-i):
                print(matrix[i][e])
                result.append(matrix[i][e])
                count += 1
                if count == max:
                    return result
                    break
            
            for s in range(i+1, m-i):
                print(matrix[s][n-1-i])
                result.append(matrix[s][n-1-i])
                count += 1
                if count == max:
                    return result
                    break

            for w in range(n-2-i, i-1, -1):
                print(matrix[m-1-i][w])
                result.append(matrix[m-1-i][w])
                count += 1
                if count == max:
                    return result
                    break

            for u in range(m-2-i, i, -1):
                print(matrix[u][i])
                result.append(matrix[u][i])
                count += 1
                if count == max:
                    return result
                    break

            i+=1

        