// Javascript program for 3-way quick sort
function swap(arr, i, j) {
	let temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

// A utility function to print an array
function printarr(a, n) {
	for (let i = 0; i < n; ++i)
		document.write(a[i]);
	document.write("<br>");
}

/* This function partitions a[] in three parts
a) a[l..i] contains all elements smaller than pivot
b) a[i+1..j-1] contains all occurrences of pivot
c) a[j..r] contains all elements greater than pivot */

// It uses Dutch National Flag Algorithm
function partition(a, low, high, i, j) {
	// To handle 2 elements
	if (high - low <= 1) {
		if (a[high] < a[low])
			swap(a, high, low);
		i = low;
		j = high;
		return;
	}

	let mid = low;
	let pivot = a[high];
	while (mid <= high) {
		if (a[mid] < pivot)
			swap(a, low++, mid++);
		else if (a[mid] == pivot)
			mid++;
		else if (a[mid] > pivot)
			swap(a, mid, high--);
	}

	// update i and j
	i = low - 1;
	j = mid; // or high+1
}

// 3-way partition based quick sort
function quicksort(a, low, high) {
	if (low >= high) // 1 or 0 elements
		return;

	let i = low, j = high;

	// Note that i and j are passed
	partition(a, low, high, i, j);

	// Recur two halves
	quicksort(a, low, i);
	quicksort(a, j, high);
}

// Driver Code
let a = [4, 9, 4, 4, 1, 9, 4, 4, 9, 4, 4, 1, 4];

// let a[] = {4, 39, 54, 14, 31, 89, 44, 34, 59, 64, 64,
// 11, 41}; let a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// let a[] = {91, 82, 73, 64, 55, 46, 37, 28, 19, 10};
// let a[] = {4, 9, 4, 4, 9, 1, 1, 1};
let size = a.length;

// Function Call
printarr(a, size);
quicksort(a, 0, size - 1);
printarr(a, size);

