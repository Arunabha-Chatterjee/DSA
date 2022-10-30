size=int(input("Enter the size of the array : "))
array=[]
for i in range (size):
    element=int(input("Enter "+str(i)+" no element of the array : "))
    array.append(element)
print("Your enterd element : "+str(array))