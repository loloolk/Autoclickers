#include <iostream>
#include <Windows.h>
//x = 1400, y = 765

void menu() {
    std::cout << "Press the right control to enable and the right shift to disable";
}

void clicker() {
    bool click = false;

    while (true) {
        if (GetAsyncKeyState(VK_RCONTROL)) {
            click = true;
        }
        else if (GetAsyncKeyState(VK_RSHIFT)) {
            click = false;
        }
        if (click == true) {
            SetCursorPos(515, 425);
            mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
            mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
            SetCursorPos(615, 425);
            mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
            mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
            SetCursorPos(715, 425);
            mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
            mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
            SetCursorPos(815, 425);
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
