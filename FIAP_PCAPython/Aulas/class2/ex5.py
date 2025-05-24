#Create a program that receives 5 values entered by the user and, at the end, displays the largest one.

largest = 0

for i in range(0, 5, 1):
    number = float(input("Enter a number: "))
    if largest < number:
        largest = number

print("The largest number is: ", largest) 