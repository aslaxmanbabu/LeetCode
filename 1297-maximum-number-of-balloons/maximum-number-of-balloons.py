class Solution:
    def maxNumberOfBalloons(self, text: str) -> int:
        template = {'a': 1, 'b': 1, 'l': 2, 'n': 1, 'o': 2}
        r = {}
        for t in text:
            if t in template.keys():
                if t in r.keys():
                    r[t] += 1
                else:
                    r[t] = 1
        r = {i: r[i] for i in sorted(r.keys())}
        if template.keys() != r.keys():
            return 0
        
        count = 0
        temp = r['a'] - template['a'] + 1
        for i in range(temp):
            for x in r.keys():
                if r[x]-template[x] >= 0:
                    r[x] -= template[x]
                else:
                    return count
            count += 1
            if all(k==0 for k in r.values()):
                return count 
        
        return count