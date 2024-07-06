class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        r = {')':'(', '}':'{', ']':'['}

        for b in s:
            if b in r.values():
                stack.append(b)
            else:
                if len(stack) == 0:
                    return False
                x = stack.pop()
                if x != r[b]:
                    return False

        if len(stack) != 0:
            return False
        
        return True

        