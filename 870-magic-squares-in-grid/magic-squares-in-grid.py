class Solution:
    def numMagicSquaresInside(self, grid: List[List[int]]) -> int:

        if len(grid) < 3 or len(grid[0]) < 3:
            return 0
        result = 0
        row = len(grid) - 3 + 1
        col = len(grid[0]) - 3 + 1
        rrr = [1, 2, 3, 4, 5, 6, 7, 8, 9]

        def matrix3(grid, j: int):
            res = []
            for r in grid:
                res.append(r[j: (3+j)])
            
            return res
        
        def row_sum(res) -> int:
            sumL = sum(res[0])
            count_r = 1
            for k in range(1, 3):
                if sumL == sum(res[k]):
                    count_r += 1
                else:
                    count_r = 0
                    break
            return count_r, sumL
        
        def diagonal(res, sumL: int):
            count_d = 0
            if sumL == res[0][0] + res[1][1] + res[2][2]:
                count_d +=1
            else:
                return 0

            if sumL == res[0][2] + res[1][1] + res[2][0]:
                count_d += 1
            else:
                return 0
            
            return count_d

        for i in range(row):
            for j in range(col):    
                res = [r[j:j+3] for r in grid[i:i+3]]
                print(res)
                dupli = dict(sum(map(Counter, res), Counter()))
                if len(dupli.keys()) != 9 or sorted(dupli.keys()) != rrr:
                    continue 
                count, sumL = row_sum(res)
                if count == 0:
                    continue
                temp_col = [sum(idx) for idx in zip(*res)]
                for t in temp_col:
                    if sumL == t:
                        count += 1
                    else:
                        count = 0
                        break
                
                count += diagonal(res, sumL)
                
                if count == 8:
                    result += 1
                else:
                    break
        
        return result
        

        