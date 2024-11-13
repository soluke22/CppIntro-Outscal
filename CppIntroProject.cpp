#include <iostream>

using namespace std;

int playerHealth = 100;
int attack = 20;
int defense = 10;
int healing = 15;

void shooting() {
    cout << "You shot the enemy! \n";
}

void healing() {
    cout << "You healed yourself! \n";
}

void attacking() {
    cout << "You attacked the enemy! \n";
}

int main() {
    //used repl.it too much in college so I have to make github repos
    cout << "Hello, World! I'm a C++ program! \n" << 
    "I'm here to show you how the world works... \n" << 
    "Maybe by punishment? Or by help! \n" << 
    "Don't worry, we'll find out together! \n" <<
    "Just know, that C++ isn't easy! So our challenges won't be easy either! \n" <<
    "But we can do it! \n";

    int enemyHealth = 100;
    int playerLives = 3;
    string playerID = "1ABC23";
    float winRate = 0.8;
    bool playerWon = false;
    char playerType = 'A';

    int enemyDamage = 20;

    playerHealth -= enemyDamage;
    for(int i = 0; i < 10; i++) {
        shooting();
    }
    int i = 0;
    while(i < 5) {
        healing();
        i++;
    }
    i = 0;
    do {
        attacking();
        i++;
    } while(i < 7);

    return 0;
}