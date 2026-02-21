



/* cryn.h - Stylized C++ Terminal UI Library
 * Created by: surxoxo
 * GitHub: https://github.com/surx0x0/
 * License: MIT (Don't steal credit, keep this part of the header intact!)
 */





#pragma once
#include <iostream>
#include <Windows.h>
#include <string>
#include <chrono>

using namespace std;


namespace cryn {

    inline string getColor(string name) 
    {
        if (name == "red" || name == "Red") return "\033[91m";
        if (name == "green" || name == "Green") return "\033[92m";
        if (name == "blue" || name == "Blue") return "\033[94m";
        if (name == "cyan" || name == "Cyan") return "\033[96m";
        if (name == "yellow" || name == "Yellow") return "\033[93m";
        if (name == "magenta" || name == "Magenta") return "\033[95m";
        return "\033[0m";
    }

    inline void Init() 
    {
        SetConsoleOutputCP(CP_UTF8);
        SetConsoleCP(CP_UTF8);
        HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
        DWORD dwMode = 0;
        GetConsoleMode(hOut, &dwMode);
        dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
        SetConsoleMode(hOut, dwMode);
    }

    inline void setFont(int size, const wchar_t* fontName = L"Consolas") 
    {
        CONSOLE_FONT_INFOEX cfi;
        cfi.cbSize = sizeof(cfi);
        cfi.nFont = 0;
        cfi.dwFontSize.X = 0;
        cfi.dwFontSize.Y = size;
        cfi.FontFamily = FF_DONTCARE;
        cfi.FontWeight = FW_NORMAL;
        wcscpy_s(cfi.FaceName, fontName);
        SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
    }

    inline void Type(string message, int ms, string colorName) 
    {
        string code = getColor(colorName);
        string reset = "\033[0m";
        for (char c : message) 
        {
            cout << code << c << reset << flush;
            Sleep(ms);
        }
        cout << endl;
    }

    inline void line(int lenght, int ms, string colorName)
    {
        string code = getColor(colorName);
        string reset = "\033[0m";

        for (int i = 0; i < lenght; i++) 
        {
            cout << code << "─" << reset;
            Sleep(ms);
        }
        cout << endl;
    }

    inline void GlitchType(string message, int ms, string colorName)
    {
        string code = getColor(colorName);
        string reset = "\033[0m";

        vector<string> Characters = { "!","@","#","$","%","^","&","*", };

        int random = rand() % 7;
        string temp = Characters[random];
        srand(time(0));

        for (int i = 0; i < message.length(); i++)
        {
            random = rand() % 7;
            temp = Characters[random];

            cout << code << temp << reset;

            Sleep(ms);

            cout << "\b" << code << message[i] << reset;
        }
        cout << endl;

    }

    inline void menu(vector<string> choices, int ms, string colorName)
    {
        string code = getColor(colorName);
        string reset = "\033[0m";

        
        for (int i = 0; i < choices.size(); i++)
        {
            string temp = choices[i];

            cout << code << i + 1 << ". " << reset;

            for (int x = 0; x < temp.length(); x++)
            {

                cout << code << temp[x] << reset;
                Sleep(ms);
            }
            cout << endl;
        }
    }

    inline void loadingGlitch(int lenght, int ms, int LoadingDuration, string colorName)
    {
        string code = getColor(colorName);
        string reset = "\033[0m";
        string save = "\033[s";
        string back = "\033[u";

        cout << save;
        for (int i = 0; i < lenght; i++)
        {
            cout << code << "▒" << reset;
            Sleep(ms);
        }
        cout << back;
        srand(time(0));
        for (int x = 0; x < lenght; x++)
        {
            int random = rand() % 10;
            if (random == 3 || random == 2)
            {
                cout << save;
                cout << code << "▒" << reset;
                cout << back;
                x -= 1;
            }
            else
            {
                cout << code << "█" << reset;
            }
            Sleep(LoadingDuration);
        }
        cout << endl;

    }
}


    ////////////////////////////////////////////////////////////////////////////////////////////////
    ///               Check for daily updates: https://github.com/surx0x0/cryn-ui/               ///
    ///                        Current Version: 1.00 <--- The Build                              ///
    ////////////////////////////////////////////////////////////////////////////////////////////////
