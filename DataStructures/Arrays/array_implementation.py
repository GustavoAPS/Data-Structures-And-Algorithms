# Initializa a List
arr = [10, 20, 30, 40, 50]

# Value to delete
key = 40

# Remove the element with the specified value
# If present in the list
if key in arr:
    arr.remove(key)
else:
    print("Element Not Found")

# Output the modified list
print(arr) 