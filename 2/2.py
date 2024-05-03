n= int(input("Enter a number: "))
count=0
while n>0:
    rem=n%10
    count+=1
    n//=10
print("Digit count: ",count)
