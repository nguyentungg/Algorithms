# Python Implementation MergeSort

def MergeSort(list):

    if len(list) == 1:
        return list

    left = list[:int(len(list)/2)]
    right = list[int(len(list)/2):]

    return merge(
        MergeSort(left),
        MergeSort(right)
    )


def merge(left, right):

    i = 0
    j = 0
    newlist = []

    while i < len(left) and j < len(right):

        if (left[i] <= right[j]):
            newlist.append(left[i])
            i += 1
        else:
            newlist.append(right[j])
            j += 1

    while i < len(left):
        newlist.append(left[i])
        i += 1

    while j < len(right):
        newlist.append(right[j])
        j += 1

    return newlist


list = [1, 23, 45, 12, 8, 9, 25, 19, 22, 6, 15, 3]

print(MergeSort(list))
