num = int(input("Enter the number of terms need to be printed: "))
divisors = [num]
for i in range(1,num//2+1):
    if num%1==0:
        divisors.append(i)
print(sorted(divisors))
