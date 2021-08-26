#include <iostream>

class Door {
public:
    Door();
    Door(bool locked, bool open);
    void Open();
    void Closed();
    void Lock();

    void SetOpen(bool open);
    void SetLock(bool lock);
    bool GetOpen();
    bool GetClosed();
    bool GetLock();

private:
    bool isLocked;
    bool isOpen;
};