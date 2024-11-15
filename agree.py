# get user input and make it lowercase
user = input("Do you agree with these terms and conditions? ").lower()

# write conditionals for the user's input
if user in ["y", "yes"]:
    print("Agreed.")
elif user in ["n", "no"]:
    print("Not agreed.")
