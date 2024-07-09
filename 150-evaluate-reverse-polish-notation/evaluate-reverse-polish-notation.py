class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []
        for t in tokens:
            if t.isdigit() or (t.startswith('-') and t[-1].isdigit()) :
                stack.append(int(t))
            else:
                n2 = stack.pop()
                n1 = stack.pop()
                op = t
                
                if op == '+':
                    stack.append(n1 + n2)
                elif op == '-':
                    stack.append(n1 - n2)
                elif op == '*':
                    stack.append(n1 * n2)
                elif op == '/':
                    result = int(n1 / n2) if n1 * n2 >= 0 else -(-n1 // n2)
                    stack.append(result)

        return stack[0]
        