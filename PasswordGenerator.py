import string
import random

# Function to get user input and validate it is a non-negative number
def get_user_input(prompt):
    while True:
        try:
            user_input = int(input(prompt))
            if user_input < 0:
                print("Your number should be non-negative.")
            else:
                return user_input
        except ValueError:
            print("Please enter numbers only.")

print("Welcome to Password Generator")

# Ask user about the number of characters
num_letters = get_user_input("How many letters do you want in your password? ")
num_numbers = get_user_input("How many numbers do you want in your password? ")
num_symbols = get_user_input("How many symbols do you want in your password? ")

# Using some predefined functions from the respective library
letters_upper = string.ascii_uppercase
letters_lower = string.ascii_lowercase
numbers = string.digits
symbols = string.punctuation

# Using random.choices() to allow repetition
letters = random.choices(letters_upper + letters_lower, k=num_letters)
nums = random.choices(numbers, k=num_numbers)
syms = random.choices(symbols, k=num_symbols)

# Concatenate the lists and shuffle them
password_list = letters + nums + syms
random.shuffle(password_list)

# Join the shuffled list elements to create the password
password = "".join(password_list)

# Output the generated password
print('This is your password requirements:', password)
