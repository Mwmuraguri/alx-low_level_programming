# 0x1E. C - Search Algorithms

A search algorithm is a method or technique used to find a specific item or value within a collection of data, such as an array, list, or database. The goal of a search algorithm is to determine whether the target item is present in the collection and, if so, its location or index.

Here are explanations of the two main types of search algorithms: linear search and binary search.

Linear Search:
Linear search is a simple search algorithm that sequentially checks each element in a list or array until the desired item is found or the end of the list is reached. It starts from the beginning and compares each element with the target item until a match is found or the end of the list is reached.

Pseudocode for Linear Search:
function linear_search(array, target):
    for each element in array:
        if element equals target:
            return element's index
    return -1  // Target not found
Binary Search:
Binary search is an efficient search algorithm used on sorted arrays or lists. It divides the search space in half with each comparison, effectively reducing the number of elements to be checked. It compares the target value with the middle element and decides which half of the array to continue the search in.

Pseudocode for Binary Search:

c
function binary_search(array, target):
    low = 0
    high = length of array - 1

    while low <= high:
        mid = (low + high) / 2
        if array[mid] == target:
            return mid  // Target found
        elif array[mid] < target:
            low = mid + 1
        else:
            high = mid - 1

    return -1  // Target not found
The choice of the best search algorithm depends on the specific scenario and the characteristics of the data:

Use Linear Search:

When the data is small or unsorted.
When the data set is not expected to be large, and simplicity is prioritized over efficiency.
Use Binary Search:

When the data is sorted.
When the data set is expected to be large, and efficiency is important.
In summary, linear search is simple but less efficient, while binary search is more efficient but requires the data to be sorted. The best choice depends on your specific use case and priorities regarding simplicity, speed, and data organization.
