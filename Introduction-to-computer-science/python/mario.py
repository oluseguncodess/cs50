# import the cs50 library
import cs50

# Initiate a do while loop
while True:
    n = cs50.get_int("n: ")
    if n > 0:
        break

# make mario block
for i in range(4): 
    print("#" * 4)

# make a simple mario block(vertical)
for i in range(n):
    print("#")

# make a simple horizontal mario block
print("?" * n)

