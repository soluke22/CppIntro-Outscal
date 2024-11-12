#include <iostream>

using namespace std;
int main() {
    //used repl.it too much in college so I have to make github repos
    cout << "Hello, World! I'm a C++ program! \n" << 
    "I'm here to show you how the world works... \n" << 
    "Maybe by punishment? Or by help! \n" << 
    "Don't worry, we'll find out together! \n" <<
    "Just know, that C++ isn't easy! So our challenges won't be easy either! \n" <<
    "But we can do it! \n";

    int playerHealth = 100;
    int enemyHealth = 100;
    int playerLives = 3;
    string playerID = "1ABC23";
    float winRate = 0.8;
    bool playerWon = false;
    char playerType = 'A';

    cout <<"How much health do you have? \n";
    cin >> playerHealth;
    cout << "You have " << playerHealth << " health! \n" <<
    "This won't stick around forever. \n";
    cout << "Though, what Type of player are you? \n" <<
    "Only input A/B/C/D \n";
    cin >> playerType;
    if(playerType != 'A' && playerType != 'B' && playerType != 'C' && playerType != 'D') {
        cout << "You are not a player! \n";
    } else {
        cout << "You are a player! \n";
    }

    cout << "How much health do you have? \n";
    cin >> playerHealth;
    cout << "How much health does your opponent have? \n";
    cin >> enemyHealth;
    if(playerHealth > 100) {
        cout << "You have too much health! \n";
    } else if (playerHealth > 50 || playerHealth > 0) {
        if(enemyHealth > 100) {
            cout << "Your opponent has too much health! \n";
        } else if (enemyHealth > 50 || enemyHealth > 0) {
            cout << "You have " << playerHealth << " health! \n" <<
            "Your opponent has " << enemyHealth << " health! \n";
        } else {
            cout << "You won! \n";
            playerWon = true;
        }
    } else {
        cout << "You lost! \n";
        playerWon = false;
    }

    return 0;
}