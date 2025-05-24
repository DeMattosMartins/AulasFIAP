# Create a program that receives a number n
# Display the multiplication table of this number from 0 to 25
# Use loops

number = float(input("Enter a number: "))
i = 0
while i <= 25:
    table = i * number
    print(f"{number} x {i}: {table:.2f}")
    i += 1