def insert(arr,element):
    arr.append(element)
    return arr

if __name__ == "__main__":
     LA=[0,0,0]
     x=0

for x in range(len(LA)):
    print("LA[",x,"]=",LA[x])

for x in range(len(LA)):
    LA.append(x)
    LA[x]= x+1

for x in range(len(LA)):
    print("LA[",x,"]=",LA[x])