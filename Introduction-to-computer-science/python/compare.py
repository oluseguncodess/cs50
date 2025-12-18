# get user two input and convert it to intergers
x = int(input("x: "))
y = int(input("y: "))

# write conditionals to check if the inputs are greater than, less than or equal to each other.
if x < y: 
    print(f"{x} is less than {y}")
elif x > y:
    print(f"{x} is greater than {y}")
else: 
    print(f"{x} is equal to {y}")