class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:

        def merge(arr1, arr2):
            left = len(arr1)
            right = len(arr2)
            result = []

            index_l = 0
            index_r = 0

            while index_l < left and index_r < right:
                if arr1[index_l] < arr2[index_r]:
                    result.append(arr1[index_l])
                    index_l += 1
                else:
                    result.append(arr2[index_r])
                    index_r += 1

            if index_l < left:
                result += arr1[index_l:]
            
            if index_r < right:
                result += arr2[index_r:]
            
            return result

        
        r = merge(nums1, nums2)
        n = len(r)

        if n%2 == 1:
            return float(r[(n//2)])
        else:
            return ( r[(n//2)-1] + r[(n//2)] ) / 2