# Python Implementation QuickSort

def QuickSort(list, start, end):

    if start < end:

        p = partition(list, start, end)
        QuickSort(list, start, p-1)
        QuickSort(list, p+1, end)


def partition(list, start, end):

    ptr = start
    pivot = end

    for i in range(start, end):

        if list[i] <= list[pivot]:
            list[ptr], list[i] = list[i], list[ptr]
            ptr += 1

    list[ptr], list[pivot] = list[pivot], list[ptr]

    return ptr


list = [2, 13, 7, 4, 9, 3, 6]

QuickSort(list, 0, len(list)-1)

print(list)
