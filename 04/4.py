num=int(input("Enter a number:"))
n=num
total = 0
while num>0:
    rem = num%10
    total+=rem
    num//=10
if n%total==0:
    print("Harshad Number")
else:
    print("Not a Harshad Number")