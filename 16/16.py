num1,num2= map(int,input("Enter two numbers:").split())
print("Before swapping:")
print("number 1:",num1)
print("number 2:",num2)
num1 = num1 + num2
num2 = num1 - num2
num1 = num1 - num2
print("After swapping:")
print("number 1:",num1)
print("number 2:",num2)
