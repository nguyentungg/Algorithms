#Python Implementation Selection Sort

def SelectionSort(list):

    size = len(list)

    for i in range(size):

        min_index = i

        for j in range(i+1, size):

            if list[min_index] > list[j]:
                min_index = j
        
        temp = list[i]
        list[i] = list[min_index]
        list[min_index] = temp

    return list


list = [2, 13, 7, 4, 9, 3, 6]

print(SelectionSort(list))