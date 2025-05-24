#Determine and display all prime numbers in the range between 2 to 2000

for i in range(0, 2001):

    for j in range(2, i):
        if i % j == 0:
            break

        if j > 0.5*i:
            print(f"{i}")
            break
    