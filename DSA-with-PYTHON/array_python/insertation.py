from array import *
list=array('i',[])

size=int(input("Enter the size of the array : "))
for i in range (size):
    list.append(int(input("Enter "+str(i)+" no element of the array : ")))

print("Enterd element before insertation : ",end="")
for i in range (size):
    print(list[i],end=" ")
  
list.append(0) #add an element at the last (index = size)
new_element=int(input("\nEnter element wnat to insert : "))
index=int(input("Enter the index : "))

for i in range(size,index,-1):
    list[i]=list[i-1]
list[index]=new_element
print("Element after insertion an element : ",end="")
for i in range(size+1): 
    print(list[i],end=" ")