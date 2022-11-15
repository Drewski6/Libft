import string  # Python module for strings. It contains a collection of string constants
import random  # Python's module for generating random objects
import os
settings = {"C tester path": "strnstr_test.c",
            "libft path": "../libft/",
            "word_list size": 100,
            "max word len": 20,
            "csv header": "",
            "extra libs": "-lbsd",
            }
# A constant containing lowercase letters
lowercase_letters = string.ascii_lowercase
# A constant containing uppercase letters
uppercase_letters = string.ascii_uppercase
digits = string.digits
symbols = string.punctuation
symbols = symbols.replace('"', '0')
symbols = symbols.replace("'", '0')
symbols = symbols.replace('\\', '0')
symbols = symbols.replace(',', '0')
symbols = symbols.replace(';', '0')
symbols = symbols.replace('(', '0')
symbols = symbols.replace(')', '0')
whitespace = string.whitespace
custom_word_symbols = lowercase_letters + uppercase_letters + digits + symbols


def uppercase_word():  # The function responsible for generating #random words which are in uppercase
    word = ''  # The variable which will hold the random word
    random_word_length = random.randint(
        1, settings["max word len"])  # The random length of the word
    while len(word) != random_word_length:  # While loop
        word += random.choice(uppercase_letters)
    return word


def lowercase_word():  # The function responsible for generating #random words which are in uppercase
    word = ''  # The variable which will hold the random word
    random_word_length = random.randint(
        1, settings["max word len"])  # The random length of the word
    while len(word) != random_word_length:  # While loop
        word += random.choice(lowercase_letters)
    return word


def custom_word():  # This function generates a word with any mix of characters you like.
    word = ''  # The variable which will hold the random word
    random_word_length = random.randint(
        1, settings["max word len"])  # The random length of the word
    while len(word) != random_word_length:  # While loop
        word += random.choice(custom_word_symbols)
    return word


word_list = []

# Generate wordlist 200 long. 100 upper case and 100 lower case
for item in range(int(settings["word_list size"])):
    word_list.append(uppercase_word())
    # get ready for syntax errors if you use this! lol
    word_list.append(custom_word())
    word_list.append(lowercase_word())
with open("word_list.txt", "w") as file_wl:		# open file to save word_list
    for item in word_list:
        file_wl.write(f"{item}\n")
# compile *_test.c Adjust path as needed.
os.system(
    f"gcc {settings['C tester path']} -L{settings['libft path']} -lft {settings['extra libs']}")
settings["csv header"] = os.system("./a.out 0 > header.txt")
with open("header.txt", "r") as fl:
    lines = fl.readlines()
    settings["csv header"] = f"{lines[0]}\n"
os.system('rm header.txt')
# runs word_list through both the original function (a.out 0) and 42 function (a.out 1)
with open("word_list.txt", "r") as file_out:
    with open("output_OF.csv", "w") as OF:
        OF.write(settings["csv header"])
    with open("output_ft.csv", "w") as ft:
        ft.write(settings["csv header"])
    for item in word_list:
        choice = random.choice(item)
        rand_letter1 = random.randint(1, len(item))
        rand_letter2 = random.randint(1, len(item))
        # saves the output of the ft_function.
        os.system(
            f"./a.out 1 '{item}' '{item[:rand_letter2]}' '{rand_letter1}' >> output_OF.csv")
        # saves the output of the ft_function.
        os.system(
            f"./a.out 2 '{item}' '{item[:rand_letter2]}' '{rand_letter1}' >> output_ft.csv")

if (os.system(f"diff output_OF.csv output_ft.csv") == 0):
    print("Congrats! No diff!")
