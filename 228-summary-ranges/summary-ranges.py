class Solution:
    def summaryRanges(self, nums: List[int]) -> List[str]:
        s = set(nums)
        r = []

        for n in nums:
            if n-1 not in s:
                start = n
                end = n + 1
                while end in s:
                    end += 1

                if start == end-1:
                    r.append(f"{start}")
                else:
                    r.append(f"{start}->{end-1}")

        return r
                 


        