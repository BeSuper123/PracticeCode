digit = 0
newInt = 0
x = int(input("Please enter a positive integer: "))


print("The value you entered:", x)

while x > 0:
    digit = x % 10
    x = (x - digit)/10
    newInt = int(newInt * 10 + digit)

print("The new value:", newInt)