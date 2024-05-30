n=int(input("Enter a number:"))
l,u=1,n
print("The series:")
for i in range(n):
    print(l,u,end=" ")
    l+=1
    u-=1