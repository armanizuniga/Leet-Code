#Python program to count max number of ones in an array

def max_number_of_ones(nums):
	max = 0
	count = 0
	for i in range(len(nums)):
		if nums[i] == 1:
			count = count + 1

		if nums[i] == 0:
			count = 0

		if count > max:
			max = count

	return max

		
