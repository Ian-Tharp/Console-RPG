/*
    Ian Tharp
    Console-RPG developed solely by myself to demonstrate and practice C++ programming.

*/

#include "Player.h"

int GenerateChoices() {
    int choices = rand() % 10 + 5;
    return choices;
}

void DisplayStats(Player player) {
    std::cout << "Health:\t\t" << player.GetCurrentHealth() << "/" << player.GetMaxHealth() << std::endl;
    std::cout << "Experience:\t" << player.GetCurExp() << "/" << player.GetMaxExp() << std::endl;
    std::cout << "Strength:\t" << player.GetStrength() << std::endl;
    std::cout << "Dexterity:\t" << player.GetDexterity() << std::endl;
    std::cout << "Intelligence:\t" << player.GetIntelligence() << std::endl;
    std::cout << "Wisdom:\t\t" << player.GetWisdom() << std::endl;
    std::cout << "Charisma:\t\t" << player.GetCharisma() << std::endl;
}



//Main
int main() {

    bool runningMain = true;

    std::cout << "\tWelcome to the Console RPG Project!" << std::endl;
    std::cout << std::endl;

    std::string PlayerName;
    std::string PlayerClass;
    int choice = -1;
    int ClassChoice = 0;

    //Creating a new player character
    std::cout << "What is your character's name?: ";
    getline(std::cin, PlayerName);
    std::cout << std::endl;
    std::cout << "What is your character's class?" << std::endl;
    std::cout << "1. Warrior, 2. Cleric, 3. Thief, 4. Wizard\nEnter your choice: ";

    while (choice < 0 || choice > 4) {
        std::cin >> choice;
        if (choice <= 0) {
            std::cout << "Your choice was invalid. Please enter a number 1-4." << std::endl;
        }
        else if (choice > 4) {
            std::cout << "Your choice was invalid. Please enter a number 1-4." << std::endl;
        }
        else if (choice >= 1 && choice <= 4) {
            ClassChoice = choice;
            break;
        }
    }
    
    //Assign class to new player character
    if (ClassChoice == 1) { PlayerClass = "Warrior"; }
    if (ClassChoice == 2) { PlayerClass = "Cleric"; }
    if (ClassChoice == 3) { PlayerClass = "Thief"; }
    if (ClassChoice == 4) { PlayerClass = "Wizard"; }

    //Initializing new player
    Player PlayerCharacter(PlayerName, PlayerClass);

    //Game randomization initialization
    int randomizer0 = GenerateChoices();

    //Main game loop
    while (runningMain) {
        for (int i = 1; i <= 50; i++) {
            std::cout << i << ": " << PlayerCharacter.GetMaxExp() << std::endl;
        }
        runningMain = false;
    }
}