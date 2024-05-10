def isNeon(number):
    sqnum = number**2
    SumofDigits=0
    while sqnum>0:
        SumofDigits+= sqnum%10
        sqnum//=10
    return SumofDigits
    
num = int(input("Enter a number: "))
if isNeon(num)==num:
    print("Neon Number")
else:
    print("Not a Neon Number")
