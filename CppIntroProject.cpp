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

    int playerDamae = 20;
    int enemyDamage = 20;

    bool isPlayerInRange = false;
    bool isPlayerAttacking = false;
    bool isPlayerDefending = false;

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

    cout << "Your enemy is attacking! \n" <<
    "Are you in range? \n";
    cin >> isPlayerInRange;
    cout << "Are you going to attack? \n" <<
    "Say true or false \n";
    cin >> isPlayerAttacking;
    if(!isPlayerAttacking) {
        cout << "Are you going to defend? \n" <<
        "Say true or false \n";
        cin >> isPlayerDefending;
    }

    if (isPlayerInRange) {
        if (isPlayerAttacking && playerHealth <= 20) {
            cout << "Player should deliver a rage attack. \n";
        } else if (isPlayerDefending) {
            cout << "Enemy should hold. \n";
        } else if (!isPlayerDefending && (playerHealth == 100 || playerHealth < 10)) {
            cout << "Enemy should do a special ability attack. \n";
        } else {
            cout << "The enemy should attack! \n";
        }
    }

    return 0;
}