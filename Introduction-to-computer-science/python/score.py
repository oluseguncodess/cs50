# get the average score given by a user

# import get_int frm cs50
from cs50 import get_int

# ensure they give a number that's greater than 1
while True:
    n = get_int("How many scores do you want to average? ")
    if n > 1:
        break

# create a variable to store the user's score
scores = []

# get the user's scores and append it to the list of scores
for i in range(n):
    score = get_int("score: ")
    scores += [score]

# get the average
average = sum(scores) / len(scores)

# print the average
print(f"Average: {average}")
