# SOSC-Competititive-Programming-DSA-mini_project--2

**Password Generator**

This repository contains two programs written in different programming languages to generate random passwords based on user-specified requirements. The programs are available in Python and C++.

**Python Password Generator**

This Python program allows users to input the desired number of letters, numbers, and symbols they want in their password. It then generates a random password that meets the specified criteria. The logic of the program is as follows:

1. Import necessary libraries: The `string` and `random` libraries are imported to handle characters and random selections.

2. Define the `get_user_input` function: This function is used to get user input and validate that the input is a non-negative number. It will keep asking for input until a valid non-negative number is provided.

3. Get user input: The program asks the user for the number of letters, numbers, and symbols they want in their password using the `get_user_input` function.

4. Define character sets: The program uses predefined character sets for letters (both upper and lower case), numbers, and symbols provided by the `string` library.

5. Randomly select characters: The program uses `random.choices()` to randomly select characters from the defined character sets, allowing repetition. It selects the specified number of letters, numbers, and symbols based on user input.

6. Concatenate and shuffle: The selected characters are concatenated into a list and then shuffled to ensure randomness.

7. Generate the password: The shuffled list elements are joined together to form the final password.

8. Output the password: The generated password is displayed as output.

**C++ Password Generator**

This C++ program also allows users to input the desired number of letters, numbers, and symbols they want in their password and generates a random password accordingly. The logic of the program is as follows:

1. Include necessary libraries: The `iostream`, `string`, `algorithm`, `ctime`, and `random` libraries are included to handle input/output, strings, algorithms, and random number generation.

2. Welcome message: The program displays a welcome message to the user.

3. Get user input: The program asks the user for the number of letters, numbers, and symbols they want in their password using `cin`.

4. Define character sets: The program defines character sets for letters (both upper and lower case), numbers, and symbols as strings.

5. Seed the random number generator: The random number generator is seeded with the current time to ensure randomness.

6. Shuffle the character sets: Each character set (letters_upper, letters_lower, numbers, and symbols) is shuffled using the `shuffle` function from the `algorithm` library to randomize the order of characters.

7. Select characters from each category: The program selects the desired number of characters from each category based on user input.

8. Concatenate and shuffle: The selected characters are concatenated into a single string and then shuffled again to ensure further randomness.

9. Output the password: The generated password is displayed as output.

**Resources**

Here are some resources that were used to understand random number generation and password generation in various programming languages:

1. [Random Number Generation in Various Programming Languages](https://medium.com/@ingaleankur10/random-number-generation-in-various-programming-languages-d4a3d8966ad1)

2. [Python Random Module - Generate Random Numbers and Sequences](https://www.askpython.com/python-modules/python-random-module-generate-random-numbers-sequences)

3. [Video: How to Generate Random Passwords in Python](https://www.youtube.com/watch?v=oXEDMNXzuo4)

4. [Create a Random Password Generator using Python](https://www.askpython.com/python-modules/python-random-module-generate-random-numbers-sequences)

5. [Random Password Generator using Python](https://www.geeksforgeeks.org/create-a-random-password-generator-using-python/)

6. [Password Generator C++](https://www.scaler.com/topics/password-generator-cpp/)

**How to Use**

1. Clone the repository: Clone this repository to your local machine using the following command:

   ```
   git clone https://github.com/your-username/password-generator.git
   ```

2. Navigate to the repository directory: Change your working directory to the cloned repository folder.

3. Run the Python program: To run the Python password generator, execute the following command:

   ```
   python password_generator.py
   ```

4. Run the C++ program: To run the C++ password generator, compile the source code using a C++ compiler and then run the executable file:

   ```
   g++ password_generator.cpp -o password_generator
   ./password_generator
   ```

**Note:**

The resources provided in this repository were used solely for the purpose of understanding the concepts and techniques related to random number generation and password generation in various programming languages. The programs presented here were developed independently, and no code was directly copied from the provided resources. The aim of including these resources is to acknowledge and give credit to the authors and to provide additional learning material for anyone interested in exploring the topic further. All code in this repository is original work, with the agenda to learn.
