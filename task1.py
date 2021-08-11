#float is added as a reminder not to forget how to write data types.
number_1 = float(input("Enter the first number:\n"))
number_2 = float(input("Enter the second number:\n"))
number_3 = number_1 % number_2
print(number_1, number_2, sep="\t%\t", end="")
print("\t=\t", number_3)
'''I tried not to make other changes but when I used float ,the equal sign was touching the second number 
so, I made tabs to organize the outputs and make it readable. This is also a reminder of how to write comments'''