class Solution:
    def averageWaitingTime(self, customers: List[List[int]]) -> float:

        if customers:
            pre = customers[0][0] + customers[0][1]
            time = customers[0][1]
        
        for i in range(1, len(customers)):
            if pre > customers[i][0]:
                pre += customers[i][1]
            else:
                pre = customers[i][0] + customers[i][1]
            time += (pre - customers[i][0])

        return time/len(customers)
