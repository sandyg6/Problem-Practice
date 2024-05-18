a=int(input("Enter the first number of AP:"))
d=int(input("Enter the difference of each number in AP:"))
n=int(input("Enter the number of terms of AP need to be printed:"))

last = a + (n-1)*d

print("The Arithmetic progression:")
for i in range(a,last+1,d):
    print(i,end=" ")
    

