class Solution:
    def minHeightShelves(self, books: List[List[int]], shelfWidth: int) -> int:
        n = len(books)
        r = [float('inf')] * (n+1)
        r[0] = 0

        for i in range(1, n+1):
            total_thickness = 0
            max_height = 0
            for j in range(i-1, -1, -1):
                total_thickness += books[j][0]
                if total_thickness > shelfWidth:
                    break
                max_height = max(max_height, books[j][1])
                r[i] = min(r[i], r[j]+max_height)

        return r[n]
