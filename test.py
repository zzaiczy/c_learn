class sort:
    def __init__(self,sort_type):
        self.sort_type = sort_type
        
    def sort(self,nums):
        if self.sort_type == "heap":
            self.heap_sort(nums)
            print("use {} sort".format(self.sort_type))
            print(nums)

    def heap_sort(self,nums):
        l = len(nums)
        for i in range(len(nums)-1,-1,-1):
            self.heapify(i, nums, l)
        for i in range(len(nums)-1,0,-1):
            nums[i],nums[0] = nums[0],nums[i]
            self.heapify(0, nums, i)

    def heapify(self, i, nums, length):
        if i >= length: return 
        left = 2*i + 1
        right = 2*i + 2
        idx = i
        if left < length and nums[idx] < nums[left]:
            idx = left
        if right < length and nums[idx] < nums[right]:
            idx = right
        if idx != i:
            nums[i],nums[idx] = nums[idx],nums[i]
            self.heapify(idx, nums, length)

nums = [1,3,10,2,5,6,4,3,2]
a_sort = sort("heap")
a_sort.sort(nums)