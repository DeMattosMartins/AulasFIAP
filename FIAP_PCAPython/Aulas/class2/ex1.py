# Create a program that displays the message “Hello, World”.
# ▪ This message should be displayed repeatedly.
# ▪ At the end of each repetition, you must ask the user if they want to display the message again.
# ▪ If yes, display it again. Otherwise, exit the loop and display the message “End”.

while True:
    print("Hello World\n")
    while True: 
        show = input("Show it again? (Y=yes/ N=no)\n")
        if (show != "Y" and show != "N"):
            print("Not a expect letter. You must enter a valid letter.\n")
        if (show == "Y") or (show == "N"):
            break
    if show == "N":
        print("You choose to end.")
        break