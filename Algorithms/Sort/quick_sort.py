# import random


# pythonic swap function
def swap(arr, i, j):
    arr[i], arr[j] = arr[j], arr[i]


# A simple approach to partition an array is to create a new temporary array which will store the rearranged elements.

# 1 = Iterate over the original array and add all elements that are smaller than or equal to the pivot to the temporary array.
# 2 = Add the pivot element to the temporary array.
# 3 = Fill the remaining part
# 4 = copy the elements from the temporary array back to the original array.

def partition(arr):
    # assuming the pivot is the last element
    pivot_value = arr[-1]
    array_size = len(arr)
    temp_array = []

    for n in arr:
        if n < pivot_value:
            temp_array.append(n)

    temp_array.append(pivot_value)

    for n in arr:
        if n > pivot_value:
            temp_array.append(n)

    for n in range(array_size):
        arr[n] = temp_array[n]


def quick_sort(arr, low, high):

    pivot = len(arr)-1
    print(f"Executing Quicksort for:\n{arr}\n")
    print(f"Staring from {low} to {high}\n")
    print(f"pivot i[{pivot}] val = {arr[pivot]}\n")

    partition(arr)

    print(arr)

    if arr[low] < arr[pivot]:
        pass
    else:
        pass
    #     if arr[low] <= arr[pivot]:
    #         high = high + 1
    #     if arr[low] > arr[high]:
    #         swap(arr, low, high)
    #     if arr[low] == arr[high]:
    #         pass


# List comprehension to generate 100 random numbers in the range of 1 to 100
# arr = [random.randint(1, 10**3) for x in range(10**1)]
arr = [3, 2, 5, 0, 1, 8, 7, 6, 9, 4]
control = arr
arr_len = len(arr)

print(f"\nBefore quick sort \n{arr}\n")

quick_sort(arr, 0, (arr_len-1))

print(f"After quick sort:\n{arr}")

# control.sort()
# print(control)
