class Solution:
    def frequencySort(self, nums: List[int]) -> List[int]:
        s = sorted(nums)
        r = {}
        count = {}
        result = []
        for i in s:
            if i in count.keys():
                count[i] += 1
                temp = r[count[i]-1]
                rem = temp[:count[i]-1]
                rem.append(i)
                r[count[i]-1] = temp[count[i]-1:]

                if count[i] in r.keys():
                    temp = r[count[i]]
                    r[count[i]] = rem + temp
                else:
                    r[count[i]] = rem
            else:
                count[i] = 1
                if count[i] in r.keys():
                    r[count[i]] = [i] + r[count[i]]
                else:
                    r[count[i]] = [i]

        print(r)

        for x in r.values():
            result += x

        print(result)
        return result
