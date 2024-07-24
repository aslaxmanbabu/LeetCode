class Solution:
    def sortJumbled(self, mapping: List[int], nums: List[int]) -> List[int]:
        r = {}
        r1 = {}
        for i in range(len(mapping)):
            r[i] = mapping[i]

        d = Counter(nums)
        
        for num in nums:
            temp = ''
            for n in str(num):
                temp += str(r[int(n)])
            temp = int(temp)
            r1[num] = temp

        result = []
        re = sorted(r1.items(), key= lambda x: x[1])
        for x in re:
            for _ in range(d[x[0]]):
                result.append(x[0])

        return result
        