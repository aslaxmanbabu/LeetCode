class Solution:
    def maximumGain(self, s: str, x: int, y: int) -> int:
        if x < y:
            first, second = 'ba', 'ab'
            first_points, second_points = y, x
        else:
            first, second = 'ab', 'ba'
            first_points, second_points = x, y
        
        def remove_pairs(s: str, pair: str, points: int) -> (str, int):
            stack = []
            score = 0
            for char in s:
                if stack and stack[-1] == pair[0] and char == pair[1]:
                    stack.pop()
                    score += points
                else:
                    stack.append(char)
            return ''.join(stack), score
        
        s, score = remove_pairs(s, first, first_points)
        _, score2 = remove_pairs(s, second, second_points)
        
        return score + score2
            
        