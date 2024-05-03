n= int(input("Enter a number: "))
print("The extracted digits are: ")
while n>0:
    rem=n%10
    print(rem)
    n//=10
