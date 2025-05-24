#Write an algorithm that receives a positive integer n and prints all the positive divisors of n.
#Use a for loop.

while True:
    divisors = 0
    number = int(input("Say an integer number: \n"))

    if number < 0:
        print("Enter a positive number\n")
    
    if number > 0:
        for i in range(1, number + 1):
            if number % i == 0:
                print(f"{number} is divisible by {i}")
    break