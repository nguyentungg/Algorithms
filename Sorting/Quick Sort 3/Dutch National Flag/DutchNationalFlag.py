# python3 program for 3-way quick sort
	
# Function to find lexicographically minimum
def swap(a,i,j) :
	temp = a[i]
	a[i] = a[j]
	a[j] = temp

# A utility function to print an array	
def printarr(a, n) :
	
	for i in range (n) :
		print(a[i],end=' ')
	
	print("\n")

''' This function partitions a[] in three parts
a) a[l..i] contains all elements smaller than pivot
b) a[i+1..j-1] contains all occurrences of pivot
c) a[j..r] contains all elements greater than pivot '''

# It uses Dutch National Flag Algorithm
def partition(a, low, high, i, j) :
	# To handle 2 elements
	if high - low <= 1 :
		if a[high] < a[low] :
			swap(a,high, low)
		i = low
		j = high
		return

	mid = low; pivot = a[high];
	while mid <= high :
		if a[mid] < pivot :
			swap(a,low,mid)
			low+=1
			mid+=1
		elif a[mid] == pivot :
			mid+=1
		elif a[mid] > pivot :
			swap(a,mid,high)
			high-=1

	# update i and j
	i = low - 1
	j = mid # or high+1

# 3-way partition based quick sort	
def quickSort(a,low,high) :
	
	if low >= high : # 1 or 0 elements
		return
	
	i = low; j = high;
	
	# Note that i and j are passed as reference
	partition(a,low,high,i,j)
	
	# Recur two halves
	quickSort(a,low,i)
	quickSort(a,j,high)
	
# Driver code
if __name__ == "__main__" :
	
	a = [4, 9, 4, 4, 1, 9, 4, 4, 9, 4, 4, 1, 4]
	
	size = len(a)
	
	printarr(a,size)
	
	quickSort(a,0,size-1)
	
	printarr(a,size)
