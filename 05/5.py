import math

def isArmstrong(n,c):
    tot=0
    for i in range(c):
        rem = n%10
        tot+= rem**c
        n//=10
    return tot

num = int(input("Enter a number: "))
number=num
count = 0
while(num>0):
    rem=num%10
    count+=1
    num//=10
check = isArmstrong(number, count)
if check == number:
    print("Armstrong Number")
else:
    print("Not a Armstrong Number")