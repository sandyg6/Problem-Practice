start= int(input("Enter the start range:"))
end=int(input("Enter the end range:"))
first = start*(start-1)//2
last = end*(end+1)//2
sum_of_numbers = last-first
print(f"The sum of numbers within the range {start} and {end} is {sum_of_numbers}")