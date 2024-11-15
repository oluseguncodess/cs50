# The concept is this. Exceptions in python occur when there's an error. The program terminates and show an error(exception)

# we use try/except blocks to determine an action for if an error is found rather than the program terminating abruptly. we use the else statement to determine an action if no error was found

try:
    n = int(input("n: "))
except ValueError:
    print('not an integer')
else:
    print("integer")