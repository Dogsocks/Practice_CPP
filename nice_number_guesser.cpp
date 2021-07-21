# include <iostream>
# include <random>
# include <time.h>

using std::cout;
using std::cin;

int main()
{
    cout << "Number Guessing Game!\n";
    std::srand(time(NULL));
    int human_number;
    bool keep_going;
    bool game_loop;
    int answer;


    while (keep_going)
    {
        int computer_number = std::rand() % 100 + 1;
        game_loop = true;
        while (game_loop)
        {
            cout << "what number am I thinking of?\n";
            cin >> human_number;
            if (human_number < computer_number)
            {
                cout << "Your number is too small!\n";
            }
            if (human_number > computer_number)
            {
                cout << "Your number is too big!\n";
            }
            if (human_number == computer_number)
            {
                cout << "You guessed it! My number was " << computer_number << " and your number was " << human_number << "\n\n";
                cout << "would you like to play again? 1 to continue, any key to exit.";
                cin >> answer;
                if (answer == 1)
                    game_loop = false;
                else {
                    keep_going = false;
                    game_loop = false;
                }
            }
        }
    }
}
