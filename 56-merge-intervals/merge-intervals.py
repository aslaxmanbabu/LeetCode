class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        i,j = 0, 0
        intervals.sort()
        while i < len(intervals):
            j = i+1
            while j < len(intervals):
                if intervals[i][1] >= intervals[j][0]:
                    if intervals[i][1] < intervals[j][1]:
                        intervals[i][1] = intervals[j][1]
                    del intervals[j]
                    j -= 1
                j += 1
            i += 1
        
        return intervals
        