class Solution:
    def maxPoints(self, points: List[List[int]]) -> int:
        
        m = len(points)
        n = len(points[0])
        
        prev_row = points[0]

        for i in range(1, m):

            curr_row = [0] * n

            left_max = [0]*n
            left_max[0] = prev_row[0]
            for j in range(1, n):
                left_max[j] = max(left_max[j-1]-1, prev_row[j])
            
            right_max = [0]*n
            right_max[-1] = prev_row[-1]
            for j in range(n-2, -1, -1):
                right_max[j] = max(right_max[j+1] - 1, prev_row[j])
            
            for j in range(n):
                curr_row[j] = points[i][j] + max(left_max[j], right_max[j])
            
            prev_row = curr_row

        return max(prev_row) 