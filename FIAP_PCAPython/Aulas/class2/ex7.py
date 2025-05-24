#Write a program that, given a positive integer n, calculates and prints the sum of all integers between 1(1 not included) and n.
#Validate the user input; accept only positive numbers!!

while True:
    sum = 0
    number = int(input("Say an integer number: \n"))

    if number < 0:
        print("Enter a positive number\n")

    if number > 0:
        for i in range(2, number + 1):
            sum += i
        print(f"The sum is: {sum}\n")
        break

