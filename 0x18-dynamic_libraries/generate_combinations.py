# generate_combinations.py

import itertools

def generate_combinations():
    numbers_pool_1 = list(range(1, 76))
    numbers_pool_2 = list(range(1, 16))

    all_combinations = list(itertools.product(numbers_pool_1, repeat=5))
    combinations_with_bonus = [(c + (bonus,)) for c in all_combinations for bonus in numbers_pool_2]

    with open('combinations.txt', 'w') as file:
        for combination in combinations_with_bonus:
            file.write(' '.join(str(num) for num in combination) + '\n')

if __name__ == '__main__':
    generate_combinations()
