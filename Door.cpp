#include "Door.h"

Door::Door() {
    isLocked = false;
    isOpen = false;
}
Door::Door(bool locked, bool open) {
    isLocked = locked;
    isOpen = open;
}
void Door::Open() { isOpen = true; isLocked = false; }
void Door::Closed() { isOpen = false; }
void Door::Lock() { isLocked = true;}

//Sets and gets
//When a door is open it will not be locked
void Door::SetOpen(bool open) { isOpen = open; isLocked = false; }
void Door::SetLock(bool lock) { isLocked = lock; }
bool Door::GetClosed() { if (isOpen == true) return false; else return true; }
bool Door::GetLock() { if (isLocked == true) return true; else return false; }
bool Door::GetOpen() { if (isOpen == true) return true; else return false; }