#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)

number = int(input("Last digit of:"))

print(int(input("Last digit of:"))[-1])

if number > 5:
    print("and is greater than 5")
elif number == 0:
    print("and is 0")
elif number < 6:
    print("and is less than 6 and not 0")
