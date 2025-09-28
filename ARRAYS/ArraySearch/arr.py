def search(arr, n, value):
	for i in range(n):
		if (arr[i] == value):
			return i
	# If the key is not found
	return -1

if __name__ == '__main__':
	LA = [1,3,5,7,8]
	print("Array element are: ")
	for x in range(len(LA)):
		print("LA", [x], " = ", LA[x])
	value = 5
	n = len(LA)
	# element found using search operation
	index = search(LA, n, value)
	if index != -1:
		print("Element", value, "Found at position = " + str(index + 1))
	else:
		print("Element not found")