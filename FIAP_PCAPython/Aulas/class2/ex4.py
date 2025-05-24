#Create a program that receives 5 values entered by the user and, at the end, displays their sum.
sum = 0

for i in range(0, 5, 1):
    sum += float(input("Say a number: "))

print(f"Their sum is: {sum:.2f}")