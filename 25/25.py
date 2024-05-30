def checkAbundant(n):
    sum=0
    for i in range(1,n):
        if n%i==0:
            sum+=i
    return sum

n=int(input("Enter a number:"))
num=checkAbundant(n)
if num>n:
    print("The given number is Abundant")
else:
    print("The given number is not Abundant")
