"""
Project II:  An implementation of the so-called "Russian Peasant" or "Ancient
             Egyptian" method for multiplication.

File Name:   multiplier.py
Name:        ?
Course:      CPTR 141
Code Review: 
"""

# russian peasant
def russianPeasant():
    a = int(input("Enter the first number: "))
    b = int(input("Enter the second number: "))
    running = 0
    while type(a) != int:
        print()
        print('Invalid entry: Please input an integer.')
        return russianPeasant
    while type(b) != int:
        print()
        print('Invalid entry: Please input an integer.')
        return russianPeasant
    while b != 0:
        if (b%2 != 0):
            running = running + a
        a = (a * 2)
        b = (b // 2)
    
    print("The answer is", (running))
    print()
    play_again = input("Would you like to enter perform another computation yes/no?: ")
    if play_again == 'yes':
        russianPeasant()
    else:
        print()
        print('Thank you for your time!!! :)')

russianPeasant()
