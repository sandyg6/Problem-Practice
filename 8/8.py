n= int(input("Enter a number:"))
num = n
sqOfnum = n*n
lenOfNum = 0
while n>0:
    lenOfNum +=1
    n//=10
digitofSq = sqOfnum % pow(10,lenOfNum)
if num==digitofSq:
    print("Automorphic Number")
else:
    print("Not an Automorphic number")