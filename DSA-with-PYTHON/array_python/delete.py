from array import *
list=array('i',[])
size=int(input("Enter size of the element : "))
for i in range(size):
    list.append(int(input("Enter "+str(i)+" no element of the array : ")))
print("Elements before deletation : ", end=" ")
for i in range(len(list)):
    print(list[i], end=" ")
index=int(input("\nEnter the index of the element want to delete : "))
list.pop(index)
print("Elements after deletation : ", end=" ")
for i in range(len(list)):
    print(list[i], end=" ")
print(("\n"))
