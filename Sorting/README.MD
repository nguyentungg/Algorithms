# Sorting
![image](https://github.com/nguyentungg/Algorithms/assets/16759685/18e01187-74a2-4f70-88ba-ce917bdd2e4c)

# <p align="center">Array Sorting Algorithms</p>

| Algorithm                                                                                                                                       | Best Time Complexity | Average Time Complexity | Worst Time Complexity | Space Complexity |
| ----------------------------------------------------------------------------------------------------------------------------------------------- | -------------------- | ----------------------- | --------------------- | ---------------- |
|                                                                                                                                                 |
| [Quicksort](./04.%20Quick%20Sort)                                                                                                               | `Ω(n log(n))`        | `Θ(n log(n))`           | `O(n^2)`              | `O(log(n))`      |
| [Mergesort](./05.%20Merge%20Sort)                                                                                                               | `Ω(n log(n))`        | `Θ(n log(n))`           | `O(n log(n))`         | `O(n)`           |
| Timsort                                                                                                                                         | `Ω(n)`               | `Θ(n log(n))`           | `O(n log(n))`         | `O(n)`           |
| [Heapsort](https://github.com/thepranaygupta/Data-Structures-and-Algorithms/tree/main/01.%20DataStructures/04.%20Tree/05.%20Heap#7---heap-sort) | `Ω(n log(n))`        | `Θ(n log(n))`           | `O(n log(n))`         | `O(1)`           |
| [Bubble Sort](./01.%20Bubble%20Sort)                                                                                                            | `Ω(n)`               | `Θ(n^2)`                | `O(n^2)`              | `O(1)`           |
| [Insertion Sort](./02.%20InsertionSort)                                                                                                         | `Ω(n)`               | `Θ(n^2)`                | `O(n^2)`              | `O(1)`           |
| [Selection Sort](./03.%20Selection%20Sort)                                                                                                      | `Ω(n^2)`             | `Θ(n^2)`                | `O(n^2)`              | `O(1)`           |
| Tree Sort                                                                                                                                       | `Ω(n log(n))`        | `Θ(n log(n))`           | `O(n^2)`              | `O(n)`           |
| Shell Sort                                                                                                                                      | `Ω(n log(n))`        | `Θ(n(log(n))^2)`        | `O(n(log(n))^2)`      | `O(1)`           |
| Bucket Sort                                                                                                                                     | `Ω(n+k)`             | `Θ(n+k)`                | `O(n^2)`              | `O(n)`           |
| [Radix Sort](./07.%20Radix%20Sort)                                                                                                              | `Ω(nk)`              | `Θ(nk)`                 | `O(nk)`               | `O(n+k)`         |
| [Counting Sort](./06.%20Count%20Sort)                                                                                                           | `Ω(n+k)`             | `Θ(n+k)`                | `O(n+k)`              | `O(k)`           |
| Cubesort                                                                                                                                        | `Ω(n)`               | `Θ(n log(n))`           | `Θ(n log(n))`         | `O(n)`           |  

## Types of Algorithms:
There are several types of algorithms available. Some important algorithms are:

1. Brute Force Algorithm: It is the simplest approach for a problem. A brute force algorithm is the first approach that comes to finding when we see a problem.

2. Recursive Algorithm: A recursive algorithm is based on recursion. In this case, a problem is broken into several sub-parts and called the same function again and again.

3. Backtracking Algorithm: The backtracking algorithm basically builds the solution by searching among all possible solutions. Using this algorithm, we keep on building the solution following criteria. Whenever a solution fails we trace back to the failure point and build on the next solution and continue this process till we find the solution or all possible solutions are looked after.

4. Searching Algorithm: Searching algorithms are the ones that are used for searching elements or groups of elements from a particular data structure. They can be of different types based on their approach or the data structure in which the element should be found.

5. Sorting Algorithm: Sorting is arranging a group of data in a particular manner according to the requirement. The algorithms which help in performing this function are called sorting algorithms. Generally sorting algorithms are used to sort groups of data in an increasing or decreasing manner.

6. Hashing Algorithm: Hashing algorithms work similarly to the searching algorithm. But they contain an index with a key ID. In hashing, a key is assigned to specific data.

7. Divide and Conquer Algorithm: This algorithm breaks a problem into sub-problems, solves a single sub-problem and merges the solutions together to get the final solution. It consists of the following three steps:

    - Divide
    - Solve
    - Combine

8. Greedy Algorithm: In this type of algorithm the solution is built part by part. The solution of the next part is built based on the immediate benefit of the next part. The one solution giving the most benefit will be chosen as the solution for the next part.

9. Dynamic Programming Algorithm: This algorithm uses the concept of using the already found solution to avoid repetitive calculation of the same part of the problem. It divides the problem into smaller overlapping subproblems and solves them.

10. Randomized Algorithm: In the randomized algorithm we use a random number so it gives immediate benefit. The random number helps in deciding the expected outcome.

## Asymptotic Analysis (Complexity)

- Big O notation (O): This notation provides an upper bound on thegrowth rate of an algorithm’s running time or space usage. It represents <u>the worst-case</u> scenario, i.e., the maximum amount of time orspace an algorithm may need to solve a problem. For example, if analgorithm’s running time is O(n), then it means that the running timeof the algorithm increases linearly with the input size n or less.

- Omega notation (Ω): This notation provides a lower bound on thegrowth rate of an algorithm’s running time or space usage. It represents <u>the best-case</u> scenario, i.e., the minimum amount of time orspace an algorithm may need to solve a problem. For example, if analgorithm’s running time is Ω(n), then it means that the running timeof the algorithm increases linearly with the input size n or more.

- Theta notation (Θ): This notation provides both an upper and lowerbound on the growth rate of an algorithm’s running time or space usage. It represents <u>the average-case</u> scenario, i.e., the amount of time orspace an algorithm typically needs to solve a problem. For example, ifan algorithm’s running time is Θ(n), then it means that the runningtime of the algorithm increases linearly with the input size n.

## List categorizing the sorting algorithms based on their uses, similarities, and differences:
1. Simple Comparison-Based Sorts:
    - Selection Sort
    - Bubble Sort
    - Insertion Sort
    - Gnome Sort
    Purpose: These sorting algorithms are simple to implement and are suitable for small data sets or when simplicity is prioritized over efficiency.
2. Efficient Comparison-Based Sorts:
    - Merge Sort
    - Quick Sort
    - Heap Sort
    - TimSort
    - Strand Sort
    - Comb Sort
    - Cocktail Sort
    - Stooge Sort
    - Tag Sort (Index Sort)
    - Tree Sort
    - Odd-Even Sort / Brick Sort
    - 3-way Merge Sort
    Purpose: These sorting algorithms provide efficient sorting solutions with varying trade-offs between time complexity, space complexity, stability, and simplicity.
3. Integer-Based Sorts:
    - Counting Sort
    - Radix Sort
    - Bucket Sort
    - Pigeonhole Sort
    Purpose: These sorting algorithms are specialized for sorting non-negative integers or elements with fixed-size integer keys. They can achieve linear time complexity or improve efficiency for specific data distributions.
4. Unique and Unconventional Sorts:
    - BogoSort or Permutation Sort
    - Sleep Sort – The King of Laziness
    Purpose: These sorting algorithms are not practical or efficient but serve as examples of unconventional sorting approaches or for entertainment purposes.
5. Specific Use-Cases:
    - Pancake Sorting: Sorting an array by flipping elements using only one operation.
    - Structure Sorting in C++: Sorting arrays of structures based on specific structure members.
    Purpose: These sorting algorithms address specific use-cases or constraints, such as restricted operations or sorting complex data structures.
    
## When to use
1. Bubble Sort:
    - Description: Repeatedly swap adjacent elements if they are in the wrong order until the entire array is sorted.
    - Complexity: O(n^2)
    - Best Case: O(n) when the array is already sorted.
    - Worst Case: O(n^2) when the array is sorted in reverse order or has a large number of inversions.
    - Average Case: O(n^2)
    - In-Place: Yes
    - Stable: Yes (maintains the relative order of equal elements)
    - Usage: Bubble Sort is simple but inefficient. It is suitable for small data sets or educational purposes, but not recommended for large data sets.

    ```cpp
    void bubbleSort(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (nums[j] > nums[j + 1]) {
                    swap(nums[j], nums[j + 1]);
                }
            }
        }
    }
    //Usage:
    bubbleSort(nums);
    ```
2. Selection Sort:
    - Description: Find the minimum element and swap it with the first unsorted element. Repeat this process until the array is sorted.
    - Complexity: O(n^2)
    - Best Case: O(n^2)
    - Worst Case: O(n^2)
    - Average Case: O(n^2)
    - In-Place: Yes
    - Stable: No (may change the relative order of equal elements)
    - Usage: Selection Sort is simple but inefficient for large data sets, making it suitable for small data sets or educational purposes.

    ```cpp
    void selectionSort(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < n; j++) {
                if (nums[j] < nums[minIndex]) {
                    minIndex = j;
                }
            }
            swap(nums[i], nums[minIndex]);
        }
    }
    //Usage:
    selectionSort(nums);
    ```
3. Insertion Sort:
    - Description: Iterate over the array, selecting an element and inserting it into its correct position within the already sorted part of the array.
    - Complexity: O(n^2)
    - Best Case: O(n) when the array is already sorted.
    - Worst Case: O(n^2) when the array is sorted in reverse order.
    - Average Case: O(n^2)
    - In-Place: Yes
    - Stable: Yes
    - Usage: Insertion Sort is efficient for small data sets or partially sorted data. It can be used in cases where the array is nearly sorted or when the array is being built incrementally.

    ```cpp
    void insertionSort(vector<int>& nums) {
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            int key = nums[i];
            int j = i - 1;
            while (j >= 0 && nums[j] > key) {
                nums[j + 1] = nums[j];
                j--;
            }
            nums[j + 1] = key;
        }
    }
    //Usage:
    insertionSort(nums);
    ```

4. Quick Sort:
    - Description: Divide and conquer algorithm that selects a pivot element and partitions the array into two subarrays, one with elements smaller than the pivot and the other with elements larger than the pivot. Recursively apply this process to the subarrays.
    - Complexity: O(n log n) on average, O(n^2) worst case
    - Best Case: O(n log n)
    - Worst Case: O(n^2) when the pivot selection is inefficient (e.g., already sorted array)
    - Average Case: O(n log n)
    - In-Place: Yes
    - Stable: No (unless additional steps are taken)
    - Usage: Quick Sort is widely used due to its efficiency. It is suitable for general-purpose sorting when the order of equal elements doesn't need to be preserved.
    
    ```cpp
    int partition(vector<int>& nums, int low, int high) {
        int pivot = nums[high];
        int i = low - 1;
        for (int j = low; j <= high - 1; j++) {
            if (nums[j] < pivot) {
                i++;
                swap(nums[i], nums[j]);
            }
        }
        swap(nums[i + 1], nums[high]);
        return i + 1;
    }

    void quickSort(vector<int>& nums, int low, int high) {
        if (low < high) {
            int pivotIndex = partition(nums, low, high);
            quickSort(nums, low, pivotIndex - 1);
            quickSort(nums, pivotIndex + 1, high);
        }
    }
    //Usage:
    quickSort(nums, 0, nums.size() - 1);
    ```
5. Merge Sort:
    - Description: Divide the array into two halves, recursively sort each half, and merge the sorted halves to produce a sorted array.
    - Complexity: O(n log n)
    - Best Case: O(n log n)
    - Worst Case: O(n log n)
    - Average Case: O(n log n)
    - In-Place: No (requires additional space for merging)
    - Stable: Yes
    - Usage: Merge Sort is an efficient and stable sorting algorithm suitable for large data sets. It is often used in external sorting or situations where additional space is available.

    ```cpp
    void merge(vector<int>& nums, int low, int mid, int high) {
        int n1 = mid - low + 1;
        int n2 = high - mid;

        vector<int> left(n1);
        vector<int> right(n2);

        for (int i = 0; i < n1; i++) {
            left[i] = nums[low + i];
        }
        for (int j = 0; j < n2; j++) {
            right[j] = nums[mid + 1 + j];
        }

        int i = 0, j = 0, k = low;
        while (i < n1 && j < n2) {
            if (left[i] <= right[j]) {
                nums[k++] = left[i++];
            } else {
                nums[k++] = right[j++];
            }
        }

        while (i < n1) {
            nums[k++] = left[i++];
        }

        while (j < n2) {
            nums[k++] = right[j++];
        }
    }

    void mergeSort(vector<int>& nums, int low, int high) {
        if (low < high) {
            int mid = low + (high - low) / 2;
            mergeSort(nums, low, mid);
            mergeSort(nums, mid + 1, high);
            merge(nums, low, mid, high);
        }
    }
    //Usage:
    mergeSort(nums, 0, nums.size() - 1);
    ```
6. Heap Sort:
    - Description: Heap Sort is a comparison-based sorting algorithm that uses the properties of a binary heap. It divides the input into a sorted and an unsorted region, and it iteratively shrinks the unsorted region by extracting the maximum element from the heap and placing it at the end of the sorted region.
    - Complexity:
        - Time Complexity:
            - Best Case: O(n log n)
            - Worst Case: O(n log n)
            - Average Case: O(n log n)
    - Space Complexity: O(1)
    - In-Place: Yes
    - Stable: No
    - Usage: Efficient in terms of time complexity and is often used when not necessarily for stable sorting. It is particularly useful when sorting large datasets, as it has a relatively low space complexity.
    ```cpp
    void heapify(std::vector<int>& nums, int n, int i) {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < n && nums[left] > nums[largest]) {
            largest = left;
        }

        if (right < n && nums[right] > nums[largest]) {
            largest = right;
        }

        if (largest != i) {
            std::swap(nums[i], nums[largest]);
            heapify(nums, n, largest);
        }
    }

    void heapSort(std::vector<int>& nums) {
        int n = nums.size();

        for (int i = n / 2 - 1; i >= 0; i--) {
            heapify(nums, n, i);
        }

        for (int i = n - 1; i > 0; i--) {
            std::swap(nums[0], nums[i]);
            heapify(nums, i, 0);
        }
    }
    //Usage:
    heapSort(nums);
    ```
7. Shell Sort:
    - Description: Shell Sort is an in-place comparison-based sorting algorithm. It improves upon the insertion sort by breaking the original list into smaller sublists and sorting those sublists using insertion sort. The unique feature of Shell Sort is the choice of gap sequence, which determines how the elements are divided into sublists.
    - Complexity:
        - Time Complexity:
            - Best Case: O(n log n)
            - Worst Case: O(n^2)
            - Average Case: Depends on the gap sequence
        - Space Complexity: O(1)
    - In-Place: Yes
    - Stable: Depends on the implementation
    - Usage: Suitable for medium-sized datasets. It performs well on average, but its time complexity can vary depending on the chosen gap sequence. It is often used as an efficient alternative to other quadratic time complexity algorithms like Bubble Sort or Insertion Sort.

    ```cpp
    void shellSort(std::vector<int>& nums) {
        int n = nums.size();

        for (int gap = n / 2; gap > 0; gap /= 2) {
            for (int i = gap; i < n; i++) {
                int temp = nums[i];
                int j;
                for (j = i; j >= gap && nums[j - gap] > temp; j -= gap) {
                    nums[j] = nums[j - gap];
                }
                nums[j] = temp;
            }
        }
    }
    //Usage:
    shellSort(nums);
    ```

8. Counting Sort:

    - Description: Sorts elements based on their count occurrence.
    - Complexity:
            Time: O(n + k)
            Space: O(k)
    - In-Place: No
    - Stable: Yes
    - Usage: Efficient for sorting integers with a small range. Suitable when the range of input elements is known in advance.
    ```cpp
    void countingSort(vector<int>& arr) {
        int n = arr.size();

        // Find the maximum element in the array
        int maxElement = *max_element(arr.begin(), arr.end());

        // Create a count array to store the frequency of each element
        vector<int> count(maxElement + 1, 0);

        // Calculate the frequency of each element
        for (int i = 0; i < n; i++) {
            count[arr[i]]++;
        }

        // Update the array with the sorted elements
        int index = 0;
        for (int i = 0; i <= maxElement; i++) {
            while (count[i] > 0) {
                arr[index++] = i;
                count[i]--;
            }
        }
    }
    //Usage:
    countingSort(nums);
    ```


9. Radix Sort:
    - Description: Sorts elements by processing digits from least significant to most significant.
    - Complexity:
        Time: O(d * (n + k)), where d is the number of digits
        Space: O(n + k)
    - In-Place: No
    - Stable: Yes
    - Usage: Suitable for sorting integers or strings with fixed length. Helpful when the range of digits is limited.
    ```cpp
    void countingSortByDigit(vector<int>& arr, int exp) {
        const int base = 10;
        int n = arr.size();
        vector<int> count(base, 0);
        vector<int> output(n);

        for (int num : arr) {
            count[(num / exp) % base]++;
        }

        for (int i = 1; i < base; i++) {
            count[i] += count[i - 1];
        }

        for (int i = n - 1; i >= 0; i--) {
            output[count[(arr[i] / exp) % base] - 1] = arr[i];
            count[(arr[i] / exp) % base]--;
        }

        for (int i = 0; i < n; i++) {
            arr[i] = output[i];
        }
    }

    void radixSort(vector<int>& arr) {
        int maxVal = *max_element(arr.begin(), arr.end());

        for (int exp = 1; maxVal / exp > 0; exp *= 10) {
            countingSortByDigit(arr, exp);
        }
    }
    //Usage:
    radixSort(nums);
    ```

10. Bucket Sort:
    - Description: Sorts elements by distributing them into a set of buckets and sorting each bucket individually.
    - Complexity:
        - Time: O(n + k), where k is the number of buckets
        - Space: O(n + k)
    - In-Place: No
    - Stable: Yes
    - Usage: Effective for sorting uniformly distributed values within a specific range. Particularly useful when input elements are uniformly distributed.
    ```cpp
    void bucketSort(vector<double>& arr) {
        int n = arr.size();
        vector<vector<double>> buckets(n);

        for (int i = 0; i < n; i++) {
            int bucketIdx = n * arr[i];
            buckets[bucketIdx].push_back(arr[i]);
        }

        for (int i = 0; i < n; i++) {
            sort(buckets[i].begin(), buckets[i].end());
        }

        int index = 0;
        for (int i = 0; i < n; i++) {
            for (double num : buckets[i]) {
                arr[index++] = num;
            }
        }
    }
    //Usage:
    bucketSort(nums);
    ```

11. Bingo Sort:
    - Description: Sorts elements by repeatedly finding the smallest unsorted element and placing it in the correct position.
    - Complexity:
        - Time: O(n^2)
        - Space: O(1)
    - In-Place: Yes
    - Stable: Yes
    - Usage: Simple to implement, but less efficient compared to other sorting algorithms. Suitable for small-sized arrays.
    ```cpp
    void bingoSort(vector<int>& arr) {
        int n = arr.size();

        while (true) {
            bool sorted = true;

            for (int i = 0; i < n - 1; i++) {
                if (arr[i] > arr[i + 1]) {
                    swap(arr[i], arr[i + 1]);
                    sorted = false;
                }
            }

            if (sorted) {
                break;
            }
        }
    }
    //Usage:
    bingoSort(nums);
    ```

12. TimSort:
    - Description: Hybrid sorting algorithm derived from Merge Sort and Insertion Sort.
    - Complexity:
        Time: O(n log n)
        Space: O(n)
    - In-Place: No
    - Stable: Yes
    - Usage: Widely used in programming languages and libraries due to its adaptability to various data distributions. Provides good performance on many kinds of real-world data.
    ```cpp
    void insertionSort(vector<int>& arr, int left, int right) {
        for (int i = left + 1; i <= right; i++) {
            int key = arr[i];
            int j = i - 1;

            while (j >= left && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }

            arr[j + 1] = key;
        }
    }

    void merge(vector<int>& arr, int left, int mid, int right) {
        int n1 = mid - left + 1;
        int n2 = right - mid;

        vector<int> leftArr(n1);
        vector<int> rightArr(n2);

        for (int i = 0; i < n1; i++) {
            leftArr[i] = arr[left + i];
        }

        for (int i = 0; i < n2; i++) {
            rightArr[i] = arr[mid + 1 + i];
        }

        int i = 0;
        int j = 0;
        int k = left;

        while (i < n1 && j < n2) {
            if (leftArr[i] <= rightArr[j]) {
                arr[k] = leftArr[i];
                i++;
            } else {
                arr[k] = rightArr[j];
                j++;
            }
            k++;
        }

        while (i < n1) {
            arr[k] = leftArr[i];
            i++;
            k++;
        }

        while (j < n2) {
            arr[k] = rightArr[j];
            j++;
            k++;
        }
    }

    void timSort(vector<int>& arr) {
        int n = arr.size();
        const int minRun = 32;

        for (int i = 0; i < n; i += minRun) {
            insertionSort(arr, i, min(i + minRun - 1, n - 1));
        }

        for (int size = minRun; size < n; size *= 2) {
            for (int left = 0; left < n; left += 2 * size) {
                int mid = min(left + size - 1, n - 1);
                int right = min(left + 2 * size - 1, n - 1);
                merge(arr, left, mid, right);
            }
        }
    }
    //Usage:
    timSort(nums);
    ```

13. Comb Sort:
    - Description: Variation of Bubble Sort with a larger gap between elements being compared.
    - Complexity:
        - Time: O(n^2)
        - Space: O(1)
    - In-Place: Yes
    - Stable: No
    - Usage: Simple to implement. Can be faster than Bubble Sort, but still less efficient than advanced sorting algorithms.
    ```cpp
    int getNextGap(int gap) {
        gap = (gap * 10) / 13;
        if (gap < 1) {
            return 1;
        }
        return gap;
    }

    void combSort(vector<int>& arr) {
        int n = arr.size();
        int gap = n;
        bool swapped = true;

        while (gap != 1 || swapped) {
            gap = getNextGap(gap);
            swapped = false;

            for (int i = 0; i < n - gap; i++) {
                if (arr[i] > arr[i + gap]) {
                    swap(arr[i], arr[i + gap]);
                    swapped = true;
                }
            }
        }
    }
    //Usage:
    combSort(nums);
    ```

14. Pigeonhole Sort:
    - Description: Sorts elements by counting the occurrence of each element and placing them in order.
    - Complexity:
        - Time: O(n + range), where range is the range of elements
        - Space: O(range)
    - In-Place: No
    - Stable: Yes
    - Usage: Suitable when the range of input elements is small and known in advance. Not efficient for large ranges.
    ```cpp
    void pigeonholeSort(vector<int>& arr) {
        int minVal = *min_element(arr.begin(), arr.end());
        int maxVal = *max_element(arr.begin(), arr.end());
        int range = maxVal - minVal + 1;
        vector<int> holes(range, 0);

        for (int num : arr) {
            holes[num - minVal]++;
        }

        int index = 0;
        for (int i = 0; i < range; i++) {
            while (holes[i] > 0) {
                arr[index++] = i + minVal;
                holes[i]--;
            }
        }
    }
    //Usage:
    pigeonholeSort(nums);
    ```

15. Cycle Sort:
    - Description: Sorts elements by minimizing the number of memory writes.
    - Complexity:
        - Time: O(n^2)
        - Space: O(1)
    - In-Place: Yes
    - Stable: Yes
    - Usage: Efficient for minimizing writes to memory, particularly useful for devices with limited write endurance.
    ```cpp
    void cycleSort(vector<int>& arr) {
        int n = arr.size();

        for (int cycleStart = 0; cycleStart < n - 1; cycleStart++) {
            int item = arr[cycleStart];
            int pos = cycleStart;

            for (int i = cycleStart + 1; i < n; i++) {
                if (arr[i] < item) {
                    pos++;
                }
            }

            if (pos == cycleStart) {
                continue;
            }

            while (item == arr[pos]) {
                pos++;
            }

            if (pos != cycleStart) {
                swap(item, arr[pos]);
            }

            while (pos != cycleStart) {
                pos = cycleStart;

                for (int i = cycleStart + 1; i < n; i++) {
                    if (arr[i] < item) {
                        pos++;
                    }
                }

                while (item == arr[pos]) {
                    pos++;
                }

                if (item != arr[pos]) {
                    swap(item, arr[pos]);
                }
            }
        }
    }
    //Usage:
    cycleSort(nums);
    ```

16. Cocktail Sort:
    - Description: Variation of Bubble Sort that sorts elements bidirectionally.
    - Complexity:
        - Time: O(n^2)
        - Space: O(1)
    - In-Place: Yes
    - Stable: Yes
    - Usage: Similar to Bubble Sort but scans elements bidirectionally, which can provide slightly better performance in some cases.
    ```cpp
    void cocktailSort(vector<int>& arr) {
        bool swapped = true;
        int start = 0;
        int end = arr.size() - 1;

        while (swapped) {
            swapped = false;

            for (int i = start; i < end; i++) {
                if (arr[i] > arr[i + 1]) {
                    swap(arr[i], arr[i + 1]);
                    swapped = true;
                }
            }

            if (!swapped) {
                break;
            }

            swapped = false;
            end--;

            for (int i = end - 1; i >= start; i--) {
                if (arr[i] > arr[i + 1]) {
                    swap(arr[i], arr[i + 1]);
                    swapped = true;
                }
            }

            start++;
        }
    }
    //Usage:
    cocktailSort(nums);
    ```

17. Strand Sort:
    - Description: Sorts elements by repeatedly merging sublists until the entire list is sorted.
    - Complexity:
        - Time: O(n^2)
        - Space: O(n)
    - In-Place: No
    - Stable: Yes
    - Usage: Suitable for linked lists or when memory allocation is expensive. Not recommended for arrays.
    ```cpp
    vector<int> mergeSorted(vector<int>& arr1, vector<int>& arr2) {
        vector<int> merged;
        int i = 0;
        int j = 0;

        while (i < arr1.size() && j < arr2.size()) {
            if (arr1[i] < arr2[j]) {
                merged.push_back(arr1[i]);
                i++;
            } else {
                merged.push_back(arr2[j]);
                j++;
            }
        }

        while (i < arr1.size()) {
            merged.push_back(arr1[i]);
            i++;
        }

        while (j < arr2.size()) {
            merged.push_back(arr2[j]);
            j++;
        }

        return merged;
    }

    vector<int> strandSort(vector<int>& arr) {
        if (arr.size() <= 1) {
            return arr;
        }

        vector<int> sorted;
        vector<int> subsequence;
        subsequence.push_back(arr[0]);

        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] >= subsequence.back()) {
                subsequence.push_back(arr[i]);
            } else {
                sorted = mergeSorted(sorted, subsequence);
                subsequence.clear();
                subsequence.push_back(arr[i]);
            }
        }

        sorted = mergeSorted(sorted, subsequence);
        return sorted;
    }
    //Usage:
    strandSort(nums);
    ```

18. Bitonic Sort:
    - Description: Sorts elements in both ascending and descending order using a bitonic sequence.
    - Complexity:
        - Time: O(log^2(n))
        - Space: O(n log^2(n))
    - In-Place: Yes
    - Stable: No
    - Usage: Efficient for parallel processing and can exploit parallel architectures.
    ```cpp
    void bitonicSort(vector<int>& arr, int low, int count, bool ascending) {
        if (count > 1) {
            int k = count / 2;
            bitonicSort(arr, low, k, true);
            bitonicSort(arr, low + k, k, false);
            bitonicMerge(arr, low, count, ascending);
        }
    }

    void bitonicMerge(vector<int>& arr, int low, int count, bool ascending) {
        if (count > 1) {
            int k = count / 2;

            for (int i = low; i < low + k; i++) {
                compareAndSwap(arr, i, i + k, ascending);
            }

            bitonicMerge(arr, low, k, ascending);
            bitonicMerge(arr, low + k, k, ascending);
        }
    }

    void compareAndSwap(vector<int>& arr, int i, int j, bool ascending) {
        if ((arr[i] > arr[j] && ascending) || (arr[i] < arr[j] && !ascending))  {
            swap(arr[i], arr[j]);
        }
    }

    void sort(std::vector<int>& arr) {
        int low = 0;
        int count = arr.size();
        bool ascending = true;
        bitonicSort(arr, low, count, ascending);
    }
    //Usage:
    sort(arr);
    ```

19. Pancake Sorting:
    - Description: Sorts elements by flipping the elements in a prefix of the array.
    - Complexity:
        - Time: O(n^2)
        - Space: O(1)
    - In-Place: Yes
    - Stable: Yes
    - Usage: Simple to understand and implement, but not recommended for large-sized arrays.
    ```cpp
    int findMaxIndex(vector<int>& arr, int n) {
        int maxIdx = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] > arr[maxIdx]) {
                maxIdx = i;
            }
        }
        return maxIdx;
    }

    void flip(vector<int>& arr, int idx) {
        int start = 0;
        while (start < idx) {
            swap(arr[start], arr[idx]);
            start++;
            idx--;
        }
    }

    vector<int> pancakeSort(vector<int>& arr) {
        int n = arr.size();
        vector<int> sorted;

        for (int size = n; size > 1; size--) {
            int maxIdx = findMaxIndex(arr, size);

            if (maxIdx != size - 1) {
                flip(arr, maxIdx);
                flip(arr, size - 1);
                sorted.push_back(maxIdx + 1);
                sorted.push_back(size);
            }
        }

        return sorted;
    }
    //Usage:
    pancakeSort(nums);
    ```

20. BogoSort or Permutation Sort:
    - Description: Randomly shuffles elements until they are sorted by chance.
    - Complexity:
        - Time: Average: O((n+1)!)
        - Space: O(1)
    - In-Place: Yes
    - Stable: Yes
    - Usage: Not recommended for practical purposes due to its highly unpredictable and inefficient nature.
    ```cpp
    bool isSorted(vector<int>& arr) {
        int n = arr.size();
        for (int i = 1; i < n; i++) {
            if (arr[i] < arr[i - 1]) {
                return false;
            }
        }
        return true;
    }

    void shuffle(vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i < n - 1; i++) {
            int j = i + rand() % (n - i);
            swap(arr[i], arr[j]);
        }
    }

    void bogoSort(vector<int>& arr) {
        while (!isSorted(arr)) {
            shuffle(arr);
        }
    }
    //Usage:
    bogoSort(nums);
    ```

21. Gnome Sort:
    - Description: Sorts elements by repeatedly comparing adjacent elements and swapping if necessary.
    - Complexity:
        - Time: O(n^2)
        - Space: O(1)
    - In-Place: Yes
    - Stable: Yes
    - Usage: Simple to implement but less efficient than advanced sorting algorithms. Suitable for small-sized arrays.
    ```cpp
    void gnomeSort(vector<int>& arr) {
        int n = arr.size();
        int index = 0;

        while (index < n) {
            if (index == 0 || arr[index] >= arr[index - 1]) {
                index++;
            } else {
                swap(arr[index], arr[index - 1]);
                index--;
            }
        }
    }
    //Usage:
    gnomeSort(nums);
    ```

22. Sleep Sort – The King of Laziness:
    - Description: Sorts elements by creating a separate thread for each element and using sleep intervals.
    - Complexity:
        - Time: O(n)
        - Space: O(1)
    - In-Place: No
    - Stable: Yes
    - Usage: Not recommended for practical use due to its reliance on thread scheduling and non-deterministic behavior.
    ```cpp
    #include <thread>

    void sleepSort(vector<int>& arr) {
        vector<thread> threads;

        for (int num : arr) {
            threads.push_back(thread([num]() {
                this_thread::sleep_for(chrono::milliseconds(num));
                cout << num << " ";
            }));
        }

        for (auto& th : threads) {
            th.join();
        }
    }
    //Usage:
    sleepSort(nums);
    ```

23. Structure Sorting in C++:
    - Description: Sorts elements based on a specific field or attribute of a custom structure or class.
    - Complexity: Depends on the sorting algorithm used.
    - Space Complexity: Depends on the sorting algorithm used.
    - In-Place: Depends on the sorting algorithm used.
    - Stable: Depends on the sorting algorithm used.
    - Usage: Customizable sorting based on specific attributes or fields of custom structures or classes.
    ```cpp
    struct Person {
        string name;
        int age;
    };

    bool comparePerson(const Person& p1, const Person& p2) {
        return p1.age < p2.age;
    }

    void structureSort(vector<Person>& people) {
        sort(people.begin(), people.end(), comparePerson);
    }
    //Usage:
    comparePerson(p1, p2);
    ```

24. Stooge Sort:
    - Description: Recursively sorts elements by dividing the list into thirds and swapping elements if necessary.
    - Complexity:
        - Time: O(n^(log 3 / log 1.5))
        - Space: O(1)
    - In-Place: Yes
    - Stable: Yes
    - Usage: Simple to implement but not efficient for large-sized arrays.
    ```cpp
    void stoogeSort(vector<int>& arr, int low, int high) {
        if (arr[low] > arr[high]) {
            swap(arr[low], arr[high]);
        }

        if (high - low + 1 > 2) {
            int t = (high - low + 1) / 3;
            stoogeSort(arr, low, high - t);
            stoogeSort(arr, low + t, high);
            stoogeSort(arr, low, high - t);
        }
    }
    void stooge(vector<int>& arr){
        int low = 0;
        int high = arr.size() - 1;
        stoogeSort(arr, 0, high);
    }
    //Usage:
    stooge(arr);
    ```

25. Tag Sort (To get both sorted and original):
    - Description: Sorts elements by attaching tags to each element and rearranging them based on the tags.
    - Complexity:
        - Time: O(n)
        - Space: O(n)
    - In-Place: No
    - Stable: Yes
    - Usage: Useful when you need to track the original order of elements while sorting.
    ```cpp
    struct Element {
        int value;
        int index;
    };

    bool compareElement(const Element& e1, const Element& e2) {
        return e1.value < e2.value;
    }

    void tagSort(vector<int>& arr) {
        int n = arr.size();
        vector<Element> elements(n);

        for (int i = 0; i < n; i++) {
            elements[i].value = arr[i];
            elements[i].index = i;
        }

        sort(elements.begin(), elements.end(), compareElement);

        for (int i = 0; i < n; i++) {
            arr[i] = elements[i].value;
            elements[i].value = elements[i].index;
        }

        sort(elements.begin(), elements.end(), compareElement);

        for (int i = 0; i < n; i++) {
            elements[i].index = i;
        }

        for (int i = 0; i < n; i++) {
            int next = elements[i].value;
            while (next != i) {
                swap(elements[i].value, elements[next].value);
                swap(arr[i], arr[next]);
                next = elements[i].value;
            }
        }
    }
    //Usage:
    tagSort(nums);
    ```

26. Tree Sort:
    - Description: Sorts elements by inserting them into a binary search tree and performing an in-order traversal.
    - Complexity:
        - Time: Best Case: O(n log n), Worst Case: O(n^2)
        - Space: O(n)
    - In-Place: No
    - Stable: Yes
    - Usage: Suitable for sorting elements efficiently when a binary search tree is available.
    ```cpp
    struct TreeNode {
        int val;
        TreeNode* left;
        TreeNode* right;

        TreeNode(int val) : val(val), left(nullptr), right(nullptr) {}
    };

    void inorderTraversal(TreeNode* root, vector<int>& arr) {
        if (root == nullptr) {
            return;
        }

        inorderTraversal(root->left, arr);
        arr.push_back(root->val);
        inorderTraversal(root->right, arr);
    }

    void insert(TreeNode* root, int val) {
        if (val < root->val) {
            if (root->left == nullptr) {
                root->left = new TreeNode(val);
            } else {
                insert(root->left, val);
            }
        } else {
            if (root->right == nullptr) {
                root->right = new TreeNode(val);
            } else {
                insert(root->right, val);
            }
        }
    }

    vector<int> treeSort(vector<int>& arr) {
        TreeNode* root = new TreeNode(arr[0]);
        int n = arr.size();

        for (int i = 1; i < n; i++) {
            insert(root, arr[i]);
        }

        vector<int> sorted;
        inorderTraversal(root, sorted);

        return sorted;
    }
    //Usage:
    treeSort(nums);
    ```

27. Odd-Even Sort / Brick Sort:
    - Description: Sorts elements by comparing and swapping adjacent pairs of elements, both odd and even indices.
    - Complexity:
        - Time: O(n^2)
        - Space: O(1)
    - In-Place: Yes
    - Stable: Yes
    - Usage: Simple to implement but less efficient than advanced sorting algorithms. Suitable for small-sized arrays.
    ```cpp
    void oddEvenSort(vector<int>& arr) {
        int n = arr.size();
        bool sorted = false;

        while (!sorted) {
            sorted = true;

            for (int i = 1; i < n - 1; i += 2) {
                if (arr[i] > arr[i + 1]) {
                    swap(arr[i], arr[i + 1]);
                    sorted = false;
                }
            }

            for (int i = 0; i < n - 1; i += 2) {
                if (arr[i] > arr[i + 1]) {
                    swap(arr[i], arr[i + 1]);
                    sorted = false;
                }
            }
        }
    }
    //Usage:
    oddEvenSort(nums);
    ```

28. 3-way Merge Sort:
    - Description: Sorts elements by dividing them into three parts and recursively sorting each part.
    - Complexity:
        - Time: O(n log n)
        - Space: O(n)
    - In-Place: No
    - Stable: Yes
    - Usage: Provides efficient sorting for larger data sets, particularly useful for handling large amounts of data.
    ```cpp
    /* Merge the sorted ranges [low, mid1), [mid1,mid2)
    and [mid2, high) mid1 is first midpoint
    index in overall range to merge mid2 is second
    midpoint index in overall range to merge*/
    void merge(vector<int> &gArray, int low, int mid1,
    		int mid2, int high, vector<int> &destArray)
    {
    	int i = low, j = mid1, k = mid2, l = low;

    	// Choose smaller of the smallest in the three ranges
    	while ((i < mid1) && (j < mid2) && (k < high))
    	{
    		if(gArray[i] < gArray[j])
    		{
    			if(gArray[i] < gArray[k])
    			{
    				destArray[l++] = gArray[i++];
    			}
    			else
    			{
    				destArray[l++] = gArray[k++];
    			}
    		}
    		else
    		{
    			if(gArray[j] < gArray[k])
    			{
    				destArray[l++] = gArray[j++];
    			}
    			else
    			{
    				destArray[l++] = gArray[k++];
    			}
    		}
    	}

    	// Case where first and second ranges
    	// have remaining values
    	while ((i < mid1) && (j < mid2))
    	{
    		if(gArray[i] < gArray[j])
    		{
    			destArray[l++] = gArray[i++];
    		}
    		else
    		{
    			destArray[l++] = gArray[j++];
    		}
    	}

    	// case where second and third ranges
    	// have remaining values
    	while ((j < mid2) && (k < high))
    	{
    		if(gArray[j] < gArray[k])
    		{
    			destArray[l++] = gArray[j++];
    		}
    		else
    		{
    			destArray[l++] = gArray[k++];
    		}
    	}

    	// Case where first and third ranges have
    	// remaining values
    	while ((i < mid1) && (k < high))
    	{
    		if(gArray[i] < gArray[k])
    		{
    			destArray[l++] = gArray[i++];
    		}
    		else
    		{
    			destArray[l++] = gArray[k++];
    		}
    	}

    	// Copy remaining values from the first range
    	while (i < mid1)
    		destArray[l++] = gArray[i++];

    	// Copy remaining values from the second range
    	while (j < mid2)
    		destArray[l++] = gArray[j++];

    	// Copy remaining values from the third range
    	while (k < high)
    		destArray[l++] = gArray[k++];
    }


    /* Performing the merge sort algorithm on the
    given array of values in the rangeof indices
    [low, high). low is minimum index, high is
    maximum index (exclusive) */
    void mergeSort3WayRec(vector<int> &gArray, int low,
    					int high, vector<int> &destArray)
    {
    	// If array size is 1 then do nothing
    	if (high - low < 2)
    		return;

    	// Splitting array into 3 parts
    	int mid1 = low + ((high - low) / 3);
    	int mid2 = low + 2 * ((high - low) / 3) + 1;

    	// Sorting 3 arrays recursively
    	mergeSort3WayRec(destArray, low, mid1, gArray);
    	mergeSort3WayRec(destArray, mid1, mid2, gArray);
    	mergeSort3WayRec(destArray, mid2, high, gArray);

    	// Merging the sorted arrays
    	merge(destArray, low, mid1, mid2, high, gArray);
    }

    void mergeSort3Way(vector<int> &gArray, int n)
    {
    	// if array size is zero return null
    	if (n == 0)
    		return;

    	// creating duplicate of given array
    	vector<int> fArray(n);

    	// copying elements of given array into
    	// duplicate array
    	for (int i = 0; i < n; i++)
    		fArray[i] = gArray[i];

    	// sort function
    	mergeSort3WayRec(fArray, 0, n, gArray);

    	// copy back elements of duplicate array
    	// to given array
    	for (int i = 0; i < n; i++)
    		gArray[i] = fArray[i];
    }
    //Usage:
    mergeSort3Way(data,10);
    ```

## What is it, Why it was born, When to use, How to use
1. Selection Sort:
    - Description: Selection Sort repeatedly selects the minimum element from the unsorted portion and places it in the correct position.
    - Purpose: It is simple to implement and works well for small data sets or when the number of swaps needs to be minimized.
    - Usage: It can be used in scenarios where memory usage is a concern or when the data set is small and performance is not critical.

2. Bubble Sort:
    - Description: Bubble Sort compares adjacent elements and swaps them if they are in the wrong order, progressively moving the largest elements to the end of the array.
    - Purpose: It is straightforward to implement and works well for small data sets or when the data is nearly sorted.
    - Usage: It can be used in scenarios where simplicity and ease of implementation are more important than performance.

3. Insertion Sort:
    - Description: Insertion Sort builds the final sorted array one element at a time by repeatedly inserting an element into its correct position within the sorted portion.
    - Purpose: It performs well on small data sets or when the input is already partially sorted.
    - Usage: It is commonly used for small or partially sorted data sets, such as in online sorting or in scenarios where the data set is expected to have few inversions.

4. Merge Sort:
    - Description: Merge Sort divides the array into two halves, recursively sorts them, and then merges the sorted halves to obtain the final sorted array.
    - Purpose: It is an efficient sorting algorithm with a stable performance and is suitable for large data sets.
    - Usage: It is widely used in practice due to its stability, efficiency, and ability to handle large data sets.

5. Quick Sort:
    - Description: Quick Sort selects a pivot element and partitions the array such that elements smaller than the pivot are placed before it, and elements greater than the pivot are placed after it. The process is repeated recursively for the sub-arrays.
    - Purpose: It is known for its efficiency and is widely used due to its average-case time complexity of O(n log n).
    - Usage: It is a popular choice when average-case performance is crucial and the data set is large.

6. Heap Sort:
    - Description: Heap Sort builds a max-heap from the array and repeatedly extracts the maximum element, placing it at the end of the array.
    - Purpose: It provides an efficient sorting algorithm with a guaranteed worst-case time complexity of O(n log n).
    - Usage: It is commonly used when a stable, in-place sorting algorithm with good worst-case performance is required.

7. Shell Sort:
    - Description: Shell Sort is an extension of Insertion Sort that compares elements that are farther apart and gradually reduces the gap until it becomes 1.
    - Purpose: It improves the efficiency of Insertion Sort by partially sorting the array before performing the final Insertion Sort pass.
    - Usage: It is useful for medium-sized data sets and provides a balance between simplicity and performance.

8. Counting Sort:
    - Description: Counting Sort creates an auxiliary array to count the occurrences of each element, and then uses this information to place the elements in the correct order.
    - Purpose: It is used for non-negative integer sorting and provides a linear time complexity.
    - Usage: It is suitable for scenarios where the range of input values is known and small, such as sorting histograms or frequency tables.

9. Radix Sort:
    - Description: Radix Sort sorts elements by their individual digits or bits, from the least significant to the most significant.
    - Purpose: It is suitable for sorting integers or fixed-size strings and can handle large data sets efficiently.
    - Usage: It is commonly used in scenarios where the keys have a fixed size and can be efficiently accessed digit by digit.

10. Bucket Sort:
    - Description: Bucket Sort divides the input into a number of buckets, distributes the elements into the buckets, sorts each bucket individually, and then combines the sorted buckets.
    - Purpose: It is used for sorting elements with a uniform distribution, such as floating-point numbers.
    - Usage: It is suitable when the range of input values is known and small and can provide efficient performance.

11. Bingo Sort:
    - Description: Bingo Sort is a variation of Bubble Sort that performs a forward and reverse pass in each iteration.
    - Purpose: It aims to improve the performance of Bubble Sort by reducing the number of comparisons.
    - Usage: It can be used as an alternative to Bubble Sort when a slight improvement in performance is desired.

12. TimSort:
    - Description: TimSort is a hybrid sorting algorithm derived from Insertion Sort and Merge Sort. It divides the array into small sub-arrays and performs Insertion Sort on them, and then merges the sorted sub-arrays using Merge Sort.
    - Purpose: TimSort aims to achieve better performance by taking advantage of Insertion Sort's efficiency on small data sets and Merge Sort's efficiency on larger data sets.
    - Usage: It is widely used in programming languages and libraries, such as Python's built-in sorting algorithm.

13. Comb Sort:
    - Description: Comb Sort is an improvement over Bubble Sort that compares elements with a gap and gradually reduces the gap until it becomes 1.
    - Purpose: It aims to overcome the slow convergence of Bubble Sort by eliminating small values at the end of the array more quickly.
    - Usage: It can be used as an alternative to Bubble Sort when a slight improvement in performance is desired.

14. Pigeonhole Sort:
    - Description: Pigeonhole Sort is a variation of Counting Sort that uses an auxiliary array to count the occurrences of elements and then places them in the correct positions.
    - Purpose: It is used when the range of input values is known and small. It provides linear time complexity.
    - Usage: It is suitable for sorting elements with a limited range, such as integers or small strings.

15. Cycle Sort:
    - Description: Cycle Sort minimizes the number of memory writes by cyclically moving elements to their correct positions.
    - Purpose: It reduces the number of memory writes and is useful when the cost of writing to memory is high.
    - Usage: It can be used in scenarios where minimizing memory writes is crucial, such as on flash memory or in embedded systems.

16. Cocktail Sort:
    - Description: Cocktail Sort, also known as Bidirectional Bubble Sort, is a variation of Bubble Sort that sorts the array in both directions.
    - Purpose: It improves upon the performance of Bubble Sort by sorting elements in both directions, reducing the number of passes.
    - Usage: It can be used as an alternative to Bubble Sort when a slight improvement in performance is desired.

18. Strand Sort:
    - Description: Strand Sort is a recursive sorting algorithm that repeatedly identifies sorted subsequences and merges them.
    - Purpose: It is useful for sorting linked lists or arrays with limited auxiliary space.
    - Usage: It can be used when sorting linked lists or when the available auxiliary space is limited.

19. Bitonic Sort:
    - Description: Bitonic Sort is a parallel sorting algorithm that operates on sequences that are bitonic (first increasing and then decreasing) or can be made bitonic.
    - Purpose: It is designed for parallel computing environments and can take advantage of parallel processors or multiple threads.
    - Usage: It is used in parallel computing scenarios where efficient sorting algorithms that exploit parallelism are required.

20. Pancake Sorting:
    - Description: Pancake Sorting is a sorting algorithm that flips pancakes (elements) in the correct order by a series of flips.
    - Purpose: It is primarily used for educational purposes to demonstrate sorting algorithms that involve specific operations like flipping.
    - Usage: It is not commonly used in practical scenarios but can be used for educational purposes or as a learning exercise.

21. BogoSort or Permutation Sort:
    - Description: BogoSort, also known as Permutation Sort, generates random permutations of the input array until it finds a sorted permutation.
    - Purpose: It is primarily used as an example of an extremely inefficient sorting algorithm and is not suitable for practical use.
    - Usage: It is typically used to demonstrate the concept of inefficient algorithms or as a joke algorithm.

22. Gnome Sort:
    - Description: Gnome Sort is a simple sorting algorithm that repeatedly compares adjacent elements and swaps them if they are in the wrong order, moving backward until the element is in its correct position.
    - Purpose: It is a simple and intuitive algorithm that can be used for small data sets or as an educational tool.
    - Usage: It can be used in scenarios where simplicity and ease of understanding are more important than efficiency.

23. Sleep Sort – The King of Laziness:
    - Description: Sleep Sort is a joke algorithm that creates separate threads for each element, where each thread sleeps for an amount of time corresponding to its value. The elements are then printed in ascending order.
    - Purpose: It is not a practical sorting algorithm and is used as a humorous example of an unconventional sorting approach.
    - Usage: It is typically used for fun or as a joke rather than for actual sorting purposes.

24. Structure Sorting in C++:
    - Description: Structure Sorting refers to sorting an array of structures based on one or more structure members.
    - Purpose: It allows sorting complex data structures based on specific criteria defined by the structure members.
    - Usage: It is commonly used in scenarios where sorting arrays of structures is required, such as in databases or custom data types.

25. Stooge Sort:
    - Description: Stooge Sort is a recursive sorting algorithm that divides the array into three parts, sorts the first two-thirds recursively, and then sorts the last two-thirds, followed by sorting the first two-thirds again.
    - Purpose: It is an inefficient sorting algorithm with a high time complexity, primarily used for educational purposes or as a theoretical example.
    - Usage: It is rarely used in practical scenarios due to its inefficiency, but it can be used for educational purposes or as a theoretical exercise.

26. Tag Sort (To get both sorted and original):
    - Description: Tag Sort, also known as Index Sort, involves creating a separate array of indices that represents the original array's positions. The indices are sorted, and the original array is rearranged based on the sorted indices.
    - Purpose: It is used when the original order of elements needs to be preserved while obtaining the sorted order.
    - Usage: It can be used in scenarios where preserving the original order is important, such as when sorting arrays of objects based on specific attributes.

27. Tree Sort:
    - Description: Tree Sort builds a binary search tree from the elements and then performs an in-order traversal to obtain the sorted order.
    - Purpose: It provides efficient sorting with a time complexity of O(n log n) and is particularly useful when the elements are already in a tree structure.
    - Usage: It is commonly used when sorting data stored in binary search trees or when a sorted tree structure is available.

28. Odd-Even Sort / Brick Sort:
    - Description: Odd-Even Sort, also known as Brick Sort, compares and swaps adjacent elements in pairs, alternating between odd and even indices.
    - Purpose: It is a variation of Bubble Sort that improves upon its performance by sorting elements in parallel.
    - Usage: It can be used as an alternative to Bubble Sort when a slight improvement in performance is desired.

29. 3-way Merge Sort:
    - Description: 3-way Merge Sort is an extension of Merge Sort that divides the array into three parts and recursively sorts each part before merging them.
    - Purpose: It is designed to handle arrays with duplicate elements efficiently and provides a more balanced merge process.
    - Usage: It is particularly useful when dealing with arrays containing many duplicate elements or when stability is crucial in the sorting process.

## List of sorting algorithms categorized based on their utilization of other algorithms:

1. Hybrid Sorting Algorithms:
   - TimSort: Combines Merge Sort and Insertion Sort.
   - Introsort: Combines Quick Sort, Heap Sort, and Insertion Sort.

2. Recursive Sorting Algorithms:
   - Merge Sort: Recursively divides the array and merges sorted sub-arrays.
   - Quick Sort: Recursively partitions the array and applies Quick Sort on sub-arrays.
   - Strand Sort: Recursively splits the array and uses Merge Sort as a subroutine.

3. Heap-Based Sorting Algorithms:
   - Heap Sort: Utilizes a binary heap data structure for efficient extraction of the maximum element.

4. Radix-Based Sorting Algorithms:
   - Radix Sort: Sorts elements based on their individual digits or bits.

5. Bucket-Based Sorting Algorithms:
   - Bucket Sort: Divides the input into buckets, sorts each bucket, and combines the sorted buckets.

6. Combination Sorting Algorithms:
   - Introspective Sort: Combines Quick Sort, Heap Sort, and Insertion Sort to optimize performance.

7. Variation Sorting Algorithms:
   - Pancake Sorting: Uses flipping operations to sort an array.
   - Structure Sorting in C++: Sorts arrays of structures based on specific structure members.

## Other
- 1 - Sort 10 schools around your house by distance: \
`insertion sort`

- 2 - eBay sorts listings by the current Bid amount: \
`radix or counting sort`

- 3 - Sort scores on ESPN \
`Quick sort`

- 4 - Massive database (can't fit all into memory) needs to sort through past year's user data \
`Merge Sort`

- 5 - Almost sorted Udemy review data needs to update and add 2 new reviews \
`Insertion Sort`

- 6 - Temperature Records for the past 50 years in Canada \
`radix or counting Sort`
`Quick sort if decimal places`

- 7 - Large user name database needs to be sorted. Data is very random. \
`Quick sort`

- 8 - You want to teach sorting \
`Bubble sort`

