#include <iostream>
#include <cmath>
#include "Monster.h"

class FirstDungeon {
public:
    //Constructor
    FirstDungeon();
    
    //Generates the layout of the dungeon
    void DungeonGenerator();

    //Utility function to lock door from event
    void LockAllDoors();
    void LockDoorByID(int DoorNumber);

    //Utility function to open door from event
    void OpenAllDoors();
    void OpenDoorByID(int DoorNumber);

    //Spawning monster inside the dungeon
    void SpawnMonster(Monster MonsterToSpawn, int ID);

    //Remove monsters inside the dungeon
    void KillAllMonsters();
    void KillMonsterByID(int MonsterID);

    //Event only available based on player attributes
    void OpenSecretDoor();

    //Gets
    int GetNumDoors();
    int GetNumMonsters();

private:
    int NumberOfDoors;
    int NumberOfMonsters;

    std::vector<std::vector<int>> Doors;
    std::vector<std::vector<Monster>> Monsters;

};