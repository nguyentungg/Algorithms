# Python Implementation

def Factorial_Recursive(value):
    if value == 2:
        return 2
    return value * Factorial_Recursive(value-1)


print(Factorial_Recursive(5))


def Factorial_Iterative(value):
    answer = 1
    while value > 1:
        answer = answer * value
        value -= 1
    return answer


print(Factorial_Iterative(5))
