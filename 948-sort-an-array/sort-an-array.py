class Solution:
    def sortArray(self, nums: List[int]) -> List[int]:

        def mergeSort(arr: List[int], left: int, mid: int, right: int):
            subArr1 = mid - left + 1
            subArr2 = right - mid

            leftArr = [0] * subArr1
            rightArr = [0] * subArr2

            for i in range(subArr1):
                leftArr[i] = arr[left+i]
            
            for j in range(subArr2):
                rightArr[j] = arr[mid+1+j]

            index1 = 0
            index2 = 0
            indexM = left

            while index1 < subArr1 and index2 < subArr2:
                if leftArr[index1] <= rightArr[index2]:
                    arr[indexM] = leftArr[index1]
                    index1 += 1
                else:
                    arr[indexM] = rightArr[index2]
                    index2 += 1
                
                indexM += 1

            while index1 < subArr1:
                arr[indexM] = leftArr[index1]
                indexM += 1
                index1 += 1

            while index2 < subArr2:
                arr[indexM] = rightArr[index2]
                indexM += 1
                index2 += 1

        def merge(arr: List[int], begin: int, end: int):
            if begin >= end:
                return

            mid = begin + (end - begin) // 2
            merge(arr, begin, mid)
            merge(arr, mid+1, end)
            mergeSort(arr, begin, mid, end)

        merge(nums, 0, len(nums)-1)

        return nums

        
