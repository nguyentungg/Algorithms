#Python Implementation Insertion Sort

def InsertionSort(list):

  #We consider the first element to be already sorted

  for i in range (1, len(list)):

      key = list[i]
      j = i-1

      while key<list[j] and j>=0:

          list[j], list[j+1] = list[j+1], list[j]
          
          j -= 1
      

  return list

  
list = [2, 13, 7, 4, 9, 3, 6]

print(InsertionSort(list))