n=int(input("Enter a number:"))
flag = 0
while n>0:
    rem = n%10
    if rem==0:
        flag =1
    n//=10
if(flag==1):
    print("Duck number")
else:
    print("Not a Duck number")
        
    
