LA = [1,3,5,7,8]
#before updation
print("The original array elements are :");
for x in range(len(LA)):
    print("LA", [x], " = ", LA[x])
#after updation
LA[2] = 10
print("The array elements after updation are: ")
for x in range(len(LA)):
    print("LA", [x], " = ", LA[x])