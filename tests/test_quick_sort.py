import random
from Algorithms.Sort.quick_sort import quick_sort


def test_quick_sort_empty_array():
    arr = []
    quick_sort(arr, 0, len(arr) - 1)
    assert arr == []


def test_quick_sort_single_element():
    arr = [42]
    quick_sort(arr, 0, len(arr) - 1)
    assert arr == [42]


def test_quick_sort_sorted_array():
    arr = [1, 2, 3, 4, 5]
    quick_sort(arr, 0, len(arr) - 1)
    assert arr == [1, 2, 3, 4, 5]


def test_quick_sort_reverse_sorted_array():
    arr = [5, 4, 3, 2, 1]
    quick_sort(arr, 0, len(arr) - 1)
    assert arr == [1, 2, 3, 4, 5]


def test_quick_sort_unsorted_array():
    arr = [3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5]
    expected = sorted(arr)
    quick_sort(arr, 0, len(arr) - 1)
    assert arr == expected


def test_quick_sort_random_array():
    arr = [random.randint(1, 1000) for _ in range(100)]
    expected = sorted(arr)
    quick_sort(arr, 0, len(arr) - 1)
    assert arr == expected
