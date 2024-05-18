num1,num2= map(int,input("Enter two numbers:").split())
min = (num1<num2)*num1 + (num2<num1)*num2
max = (num1>num2)*num1 + (num2>num1)*num2
print(f"The maximum number is {max}")
print(f"The minimum number is {min}")
