people = {
    "name": "Bola", "number":"+234-912345678",
    "name": "Tunde", "number":"+234-812345678"
}

name = input("name: ")

if name in people:
    print(f"Number: {people[name]}")
else:
    print("Not found")