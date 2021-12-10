# python number guessing game
guess_num = 9
guess_limit = 3
guess_count = 0
print('You have three chances to guess the correct number')
while guess_limit > guess_count:
    guess_count += 1
    user_input = int(input('enter number:'))
    if user_input == guess_num:
        print('Correct Number!')
        break
    else:
        print('Wrong Number!')
