#repository link: https://github.com/AhmedSayed54/AS
col_1 = 0
while col_1 < 8:
    if col_1 == 0 or col_1 == 4:
        for row_0 in range(16):
            print("*", end="")

    for row_1 in range(0, 2, 1):
        print("***\t\t***")
        col_1 += 1

for sep in range(19):
    print("-", end="")
print()


for col_2 in range(1):

    for row_2 in range(19):
        print("*", end="")
    print()
    for row_1 in range(0, 2, 1):
        print("***\t\t")
        col_1 += 1
    for row_2 in range(19):
        print("*", end="")
    print()
    for row_3 in range(0, 2, 1):
        print("\t\t***")
        col_1 += 1
    for row_2 in range(19):
        print("*", end="")
    print()
