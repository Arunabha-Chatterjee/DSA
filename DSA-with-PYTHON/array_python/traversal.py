from array import *
list=array('i',[])

size=int(input("Enter the size of the array : "))
for i in range (size):
    list.append(int(input("Enter "+str(i)+" no element of the array : ")))

print("Element have insert : ",end="")
for i in range (size):
    print(list[i],end=" ")