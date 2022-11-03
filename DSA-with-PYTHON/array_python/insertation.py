from array import *
list=array('i',[])

size=int(input("Enter the size of the array : "))
for i in range (size):
    list.append(int(input("Enter "+str(i)+" no element of the array : ")))

print("Elements before insertation : ",end="")
for i in range (len(list)):
    print(list[i],end=" ")
  
element=int(input("\nEnter element wnat to insert : "))
index=int(input("Enter the index : "))

list.insert(index, element)
print("Enterd element after insertation : ",end="")
for i in range (len(list)):
    print(list[i],end=" ")
print("\n")