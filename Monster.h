#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <string>

class Monster {
    public:
        //Constructors
        Monster();
        Monster(std::string name, int level);

        void Randomization();

        int CalculateDamageAmount();
        void DealDamage();
        void TakeDamage(int amount);

        //Randomizer to determine monster stats when constructed
        void CalculateStats();

        //Sets and Gets
        int GetCurrentHealth();
        int GetMaxHealth();
        void SetCurrentHealth(float amount);
        void SetMaxHealth(float amount);

        int GetStrength();
        int GetDexterity();
        int GetIntelligence();
        int GetWisdom();
        int GetCharisma();
        void SetStrength(int amount);
        void SetDexterity(int amount);
        void SetIntelligence(int amount);
        void SetWisdom(int amount);
        void SetCharisma(int amount);

        //Add health to current health
        void RegenHealth(float health);

        //Retur that the monster is dead 
        bool MonsterDeath();

        //Calculate how much experience drops on monster death
        int DroppedExperience();

    private:
        std::string Name;
        int Level;
        //Attributes
        int Strength, Dexterity, Intelligence, Wisdom;
        float CurrentHealth, MaxHealth;
        
        //Calculation stats
        int DamageAmount, SpellAmount;
        float DodgeChance, ParryChance, HitChance;
        
        bool isDead;
};