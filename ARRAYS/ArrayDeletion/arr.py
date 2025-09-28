if __name__ == '__main__':
	# Declaring array and deleting value
	LA = [0,0,0]
	n = len(LA)
	print("Array Before Deletion: ")
	for x in range(len(LA)):
		LA.append(x)
		LA[x] = x + 3
		print("LA", [x], " = " , LA[x])
	# delete the value if exists 
	# or show error it does not exist in the list 
	for x in range(1, n-1):
		LA[x] = LA[x+1]
		n = n-1
	print("Array After Deletion: ")
	for x in range(n):
		print("LA", [x], " = " , LA[x])