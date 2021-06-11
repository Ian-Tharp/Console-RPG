#include "Player.h"

//Default Constructor
Player::Player() {
    Name = "None";
    Class = "None";
    CurExp = -1;
    BufferExp = -1;
    MaxExp = -1;
    Level = 0;
    Strength = 0;
    Dexterity = 0;
    Intelligence = 0;
    Wisdom = 0;
    Charisma = 0;
    CurHealth = -1;
    MaxHealth = -1;
}

//Parameterized Constructor
Player::Player(std::string name, std::string spec) {
    Name = name;
    Class = spec;
}

//Increase CurrentHealth by input amount
void Player::RegenHealth(int health) {
    CurHealth += health;
}

//Player death function
bool Player::PlayerDeath() {
    isDead = true;
    return isDead;
}

//Sets and Gets
int Player::GetCurrentHealth() { return CurHealth; }
int Player::GetMaxHealth() { return MaxHealth; }
int Player::GetStrength() { return Strength; }
int Player::GetDexterity() { return Dexterity; }
int Player::GetIntelligence() { return Intelligence; }
int Player::GetWisdom() { return Wisdom; }
int Player::GetCharisma() { return Charisma; }
void Player::SetCurrentHealth(int amount) { CurHealth = amount; }
void Player::SetMaxHealth(int amount) { MaxHealth = amount; }
void Player::SetStrength(int amount) { Strength = amount; }
void Player::SetDexterity(int amount) { Dexterity = amount; }
void Player::SetIntelligence(int amount) { Intelligence = amount; }
void Player::SetWisdom(int amount) { Wisdom = amount; }
void Player::SetCharisma(int amount) {Charisma = amount; }



//Increase CurExp by input amount, if player gains a level, store buffer to add to next
//CurExp amount after level up.
void Player::GainExp(int amount) {
    CurExp += amount;
    if (CurExp >= MaxExp) {
        if (CurExp > MaxExp) {
            BufferExp = CurExp - MaxExp;
        }
        LevelUp();
        GainExp(BufferExp);
        BufferExp = 0;
    }
}

//Level up function to increment attributes, and restore some health
void Player::LevelUp() {
    ++Level;
    ++Strength;
    ++Dexterity;
    ++Intelligence;
    ++Wisdom;
    ++Charisma;
    RegenHealth(Level * 10);
}


