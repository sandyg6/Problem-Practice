start, end=map(int,input("Enter the range (start and end):").split())
print("Even Numbers:")
for i in range(start, end+1):
    if i%2 == 0:
        print(i, end=" ")
print("\nOdd Numbers:")
for j in range(start, end+1):
    if j%2 == 1:
        print(j, end=" ")
