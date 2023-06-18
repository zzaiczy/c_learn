
class Solution:
    def __init__(self) -> None:
        pass

    def quock_sort(self,nums):
        if len(nums)<=1:return nums
        provit = nums[0]
        left,mid,right = [],[],[]
        for i in range(len(nums)):
            if nums[i]<provit:
                left.append(nums[i])
            elif nums[i]>provit:
                right.append(nums[i])
            else:
                mid.append(nums[i])
        left = self.quock_sort(left)
        right = self.quock_sort(right)
        return left+mid+right
    
    def swap(self,a,b):
        return b,a
    
    def partation(self,nums,begin,end):
        
        if begin>end:return
        provit = nums[begin]
        i,j = begin,end
        while i<j:
            while i<j and nums[j]>=provit:
                j-=1
            if i<j:
                nums[i] = nums[j]
                i+=1
            
            while i<j and nums[i]<=provit:
                i+=1
            if i<j :
                nums[j] = nums[i]
                j-=1
        
        nums[i] = provit
        return i
        
    def _quock_sort(self,nums,begin,end):
        if begin>=end:return nums

        mid = self.partation(nums,begin,end)
        self._quock_sort(nums,mid+1,end)
        self._quock_sort(nums,begin,mid-1)

        return nums
    
    def kthnumber(self,nums,k,begin,end):
        if begin>end:return -1
        mid = self.partation(nums,begin,end)
        
        if mid == k-1 : 
            return nums[k-1]
        elif mid>k-1:
            return self.kthnumber(nums,k,begin,mid-1)
        else:
            return self.kthnumber(nums,k,mid+1,end)

a=Solution()
#print(a.quock_sort([1,3,2,6,5,4,3,88],0,7))
#print(a.quock_sort([1,3,2,6,5,4,3,88]))

print(a.kthnumber([1,3,2,6,5,4,3,88,1,1,1,1,1],5,0,12))


        
            
             


