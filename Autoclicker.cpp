#include <iostream>
#include <Windows.h>

void menu() {
    std::cout << "Press the left control to enable and the right shift to disable";
}

void clicker() {
    bool click = false;

    while (true) {
        if (GetAsyncKeyState(VK_LCONTROL)) {
            click = true;
        }
        else if (GetAsyncKeyState(VK_RSHIFT)) {
            click = false;
        }
        if (click == true) {
            mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
            mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
            Sleep(5);
        }
    }
}

int main() {
    menu();
    clicker();
}
