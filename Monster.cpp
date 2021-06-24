#include "Monster.h"

//Default Constructor
Monster::Monster() {
    Name = "Bad Guy";
    Level = 0;
    Strength = 0;
    Dexterity = 0;
    Intelligence = 0;
    Wisdom = 0;
    CurrentHealth = 0.0f;
    MaxHealth = 0.0f;
    DamageAmount = 0;
    SpellAmount = 0;
    DodgeChance = 0.0f;
    ParryChance = 0.0f;
    HitChance = 0.0f;
    isDead = false;
}
//Parameterized constructor
Monster::Monster(std::string name, int level) {
    Name = name;
    Level = level;
    CalculateStats();
}

//Randomizer to determine monster stats when constructed
void Monster::CalculateStats() {
    int randomizer = rand() % Level + 1;
    int LevelModifier = Level + randomizer;
    for (int i = 0; i < 5; i++) {
        
    }
}