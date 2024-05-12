n=int(input("Enter a number:"))
for rows in range(1,n+1,1):
    for cols in range(n,rows,-1):
        print(" ",end="")
    print("*",end="")
    for cols in range(1,(rows-1)*2,1):
        print(" ",end="")
    if rows==1:
        print("\n",end="")
    else:
        print("*\n",end="")
    
for rows in range(n-1,0,-1):
    for cols in range(n,rows,-1):
        print(" ",end="")
    print("*",end="")
    for cols in range(1,(rows-1)*2,1):
        print(" ",end="")
    if rows == 1:
        print("\n",end="")
    else:
        print("*\n",end="")
