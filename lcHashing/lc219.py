# Example 1:
# Input: nums = [1, 2, 3, 1], k = 3

# You are asked to check if there are two duplicate numbers where the distance between their
#  indices is less than or equal to 3.
# In this case, nums[0] = 1 and nums[3] = 1, and the difference between their indices is abs(0 - 3) = 3.
# Since the difference 3 is less than or equal to k (3), the answer is true.

# Input: nums = [1, 0, 1, 1], k = 1

# You are checking for two identical numbers with a distance of at most 1 between their indices.
# Here, nums[2] = 1 and nums[3] = 1. The difference between their indices is abs(2 - 3) = 1.
# Since the difference is 1 and it is less than or equal to k (1), the answer is true.

nums = [1, 0, 1, 1]
k = 1

def containsNearbyDuplicate(nums, k):
    last_seen_index = {}

    for current_index, current_number in enumerate(nums):

        if current_number in last_seen_index:       #1 in {} false  #0 in {} false
            #1 in {1:0 , 0:1} is true   #1 in {1:3 , 0:1} is true
            previous_index = last_seen_index[current_number]    #previous_index = 0     #previous_index = 3

            if current_index - previous_index <= k:  #3 - 0 <= 1 false  
                return True

        last_seen_index[current_number] = current_index #[1:3]  #[0:1] 

    return False

