class Solution:
    def sortPeople(self, names: List[str], heights: List[int]) -> List[str]:
        r = {}
        for i in range(len(heights)):
            r[heights[i]] = names[i]

        sorted_height = sorted(heights, reverse=True)
        result = []
        for h in sorted_height:
            result.append(r[h])

        print(r)
        return result
        