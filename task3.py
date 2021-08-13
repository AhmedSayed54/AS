
numbers_list = [5, 26, 45, 32, 63, 74, 81, 120, 99, 54]
print("The numbers from the list", numbers_list, "are divisible by 9:")


def div_by_9():
    for sol in numbers_list:
        if sol % 9 == 0:
            print(sol)


print(div_by_9())
