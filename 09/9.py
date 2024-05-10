def isPrime(n):
    divisors = 0
    for i in range(2,n//2):
        if n % i == 0:
            divisors += 1
    return divisors

num = int(input("Enter a number: "))
if num == 1:
    print("Neither a Prime nor a Composite number\n")
elif isPrime(num)!=0:
    print("Not a Prime number\n")
else:
    print("Prime Number\n")
