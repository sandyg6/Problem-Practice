num = int(input("Enter a number: "))
n = num
rev = 0
while n > 0:
    rev = rev*10 + n%10
    n//=10
if rev == num:
    print("Palindromic Number")
else:
    print("Not a Palindromic Number")