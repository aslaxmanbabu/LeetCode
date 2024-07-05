class Solution:
    def insert(self, intervals: List[List[int]], newInterval: List[int]) -> List[List[int]]:

        intervals.sort()

        if not intervals:
            intervals.append(newInterval)
            return intervals

        for i in range(len(intervals)):
            if intervals[i][0] > newInterval[0]:
                intervals.insert(i, newInterval)
                newInterval = False
                break

        if newInterval:
            intervals.append(newInterval)

        i = 0
        while (i< len(intervals)):
            j = i+1
            while (j < len(intervals)):
                if intervals[i][1] >= intervals[j][0]:
                    if intervals[i][1] < intervals[j][1]:
                        intervals[i][1] = intervals[j][1]
                    del intervals[j]
                    j -= 1
                j += 1
            i += 1

        return intervals
        