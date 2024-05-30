def checkPronic(n):
    for i in range(1,n//2):
        if(i*(i+1)==n):
            return True
    return False

n=int(input("Enter a number:"))
if checkPronic(n):
    print("The given number is Pronic")
else:
    print("The given number is not Pronic")