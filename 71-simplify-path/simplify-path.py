class Solution:
    def simplifyPath(self, path: str) -> str:
        result = []
        temp = path.split('/')

        for x in temp:
            if x == "..":
                if len(result) > 1:
                    result.pop()
                    result.pop()
            elif x != '.' and x:
                result.append('/')
                result.append(x)

        if len(result) == 0:
            result.append('/')

        return "".join(result)
                
        