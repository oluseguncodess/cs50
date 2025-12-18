# write a program that checks if an user input is an integer or not

# get user input
user = input("n: ")

# write conditionals
if user.isnumeric():
    print("Integer.")
else:
    print("Not integer.")