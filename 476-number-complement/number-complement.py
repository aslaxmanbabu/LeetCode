class Solution:
    def findComplement(self, num: int) -> int:
        
        def dec2bin(num):
            return "{0:b}".format(int(num))

        def bin2dec(x):
            return int(x, 2)
        
        def complement(x):
            r = []
            n = len(x)
            for i in range(n):
                if x[i] == '0':
                    r.append('1')
                else:
                    r.append('0')
            
            return "".join(r)

        return bin2dec(complement(dec2bin(num)))
        