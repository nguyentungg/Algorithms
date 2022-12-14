#Python Implementation Bubble Sort

def BubbleSort(list):

    for x in range(len(list)):
        flag = 0
        for i in range(len(list)-x-1):

            if list[i] > list[i+1]:

                temp = list[i]
                list[i] = list[i+1]
                list[i+1] = temp
                flag = 1

        if flag == 0:
            break

    return list


list = [2, 13, 7, 4, 9, 3, 6]

print(BubbleSort(list))