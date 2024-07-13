class Solution:
    def calculate(self, s: str) -> int:
        stack = []
        s = s.replace(" ", "")
        def cal(n1: int, n2: int, op: str) -> int:
            if op == '+':
                result = n1 + n2
            elif op == '-':
                result = n1 - n2
            
            return result

        i = 0

        def parse_number(s: str, i: int) -> Tuple[int, int]:
            num = 0
            while i < len(s) and s[i].isdigit():
                num = num * 10 + int(s[i])
                i += 1
            return num, i - 1
        
        def br(s: str, i: int, stack: list) -> Tuple[int, List[int]]:
            temp = []
            i += 1
            while s[i] != ')':
                if s[i] in ('+', '-'):
                    print("Temp: ", temp)
                    if len(temp) == 0:
                        n1 = 0
                    else:
                        n1 = temp.pop()
                    print("Pop: ", temp)
                    op = s[i]
                    i += 1
                    if s[i] == '(':
                        i, temp = br(s, i, temp)
                        print(temp)
                        n2 = temp.pop()
                    else:
                        n2, i = parse_number(s, i)
                    temp.append(cal(n1, n2, op))
                else:
                    num, i = parse_number(s, i)
                    temp.append(num)
                i += 1
            stack.append(temp.pop())

            return i, stack

        i = 0
        while i < len(s):
            if s[i] == '(':
                i, stack = br(s, i, stack)
                i += 1
                print("Main: ", stack)

            if i >= len(s):
                break
            
            if s[i] in ('+', '-'):
                print("Stack_Main: ", stack)
                if len(stack) == 0:
                    n1 = 0
                else:
                    n1 = stack.pop()
                op = s[i]
                i += 1
                if s[i] == '(':
                    i, stack = br(s, i, stack)
                    print(stack)
                    n2 = stack.pop()
                else:
                    n2, i = parse_number(s, i)
                    print(n2)
                stack.append(cal(n1, n2, op))
            else:
                num, i = parse_number(s, i)
                stack.append(num)

            i += 1
        print(stack)
        r = ''.join(map(str, stack))

        return int(r)
        