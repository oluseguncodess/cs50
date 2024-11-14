# import a library from cs50
from cs50 import get_string

# store the input in a variable
answer = get_string("What's your name?: ")

# greet the person
print(f"Hello, {answer}")