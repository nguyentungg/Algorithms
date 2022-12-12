# Reversing string using recursion

def reverseString(str):
    size = len(str)
    if len(str) == 0:
        return
    lastItem = str[size-1]
    print(lastItem, end='')
    return reverseString(str[0:size-1])


reverseString('yoyo mastery')
