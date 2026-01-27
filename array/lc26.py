class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        result = []
        hashmap = {}
        for i in nums:
            hashmap[i] = hashmap.get(i , 0)+1

        for i in hashmap.keys():
            print(i)
            result.append(i)
        print(result)
        return result
    
if __name__ == "__main__":
    sol = Solution()
    print(sol.removeDuplicates([1,1,2]))