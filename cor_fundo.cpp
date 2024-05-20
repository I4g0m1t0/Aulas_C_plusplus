#include <iostream>
#include <windows.h>

int main() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD originalAttrs;

    // Get current attributes
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    originalAttrs = consoleInfo.wAttributes;

    // Set background color to green
    SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN);

    // Clear the screen to apply the background color
    system("cls");
    
    // Set text color to white
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

    // Write a colored message
    std::cout << "Hello, world!" << std::endl;

    // Wait for user input
    system("pause");

    // Restore original attributes
    SetConsoleTextAttribute(hConsole, originalAttrs);

    return 0;
}
