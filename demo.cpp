#include "cryn.h"
#include <vector>

using namespace std;

int main()
{
    cryn::Init();
    cryn::setFont(20, L"Consolas");


    // line()  draws a horizontal ─── separator with optional animation delay
    // Type()  prints text character-by-character like a typewriter

    cryn::line(44, 4, "cyan");
    cryn::Type("  cryn-ui  //  terminal ui library  v1.1", 22, "cyan");
    cryn::line(44, 4, "cyan");
    cout << endl;


    // GlitchType() scrambles each character with a random symbol before replacing it with the real character

    cryn::Type("[ GlitchType ]", 18, "yellow");
    cryn::GlitchType("SYSTEM BOOT SEQUENCE INITIATED...", 28, "yellow");
    cout << endl;

    // loadingGlitch() fills a progress bar (▒ -> █) with random stutter steps

    cryn::Type("[ loadingGlitch ]", 18, "green");
    cryn::Type("  loading modules ", 14, "green");

    // args: length, fill-speed ms, load delay ms, color
    cryn::loadingGlitch(36, 6, 38, "green");
    cout << endl;

    // Border() wraps a string in a box
    cryn::Type("[ Border  //  sharp + rounded ]", 18, "red");
    cout << endl;

    // args: text, fill-speed ms, color, roundness ( true / false )
    cryn::Border("  ALERT: INTRUSION DETECTED  ", 12, "red", false);   // sharp
    cout << endl;
    cryn::Border("  session : guest@cryn-ui   ", 12, "green", true);   // rounded
    cout << endl;


    // Grid2x3() renders a 2-column / 3-row table
    // Columns auto-size to the widest cell in each column


    cryn::Type("[ Grid2x3  //  auto-sized 2-col table ]", 18, "cyan");
    cout << endl;

    cryn::Grid2x3(
        "NETWORK", "STORAGE",           // column headers
        "status : online", "disk   : 94 GB",    // row 1
        "ping   : 4 ms", "leaks  : none",     // row 2
        12, "cyan", true                           // delay / color / rounded ( true / false ) 
    );
    cout << endl;

    cryn::Grid2x3(
        "CPU", "MEMORY",
        "load   : 3%", "used   : 1.2 GB",
        "temp   : 31 C", "free   : 6.8 GB",
        12, "magenta", false                       // sharp variant
    );
    cout << endl;


    // menu() prints a numbered list
    // pair it with cin >> choice for real menus

    cryn::Type("[ menu ]", 18, "magenta");
    cryn::Type("  select operation :", 14, "magenta");
    cout << endl;

    vector<string> ops = { "Run diagnostics", "Open secure shell", "Export system log", "Terminate session" };
    // args: vector, fill-speed ms, color ( CURRENTLY ONLY SUPPORTS VECTOR<STRING> )
    cryn::menu(ops, 22, "magenta");
    cout << endl;

    // line() draws a straight line
    // args: lenght, fill-speed ms, color
    cryn::Type("[ color palette ]", 18, "white");
    cryn::line(28, 3, "red");
    cryn::line(28, 3, "green");
    cryn::line(28, 3, "blue");
    cryn::line(28, 3, "cyan");
    cryn::line(28, 3, "yellow");
    cryn::line(28, 3, "magenta");
    cout << endl;


    cryn::line(44, 4, "cyan");
    cryn::GlitchType("  cryn-ui ready.  github.com/surx0x0  ", 18, "cyan");
    cryn::line(44, 4, "cyan");
    cout << endl;

    cryn::Type("  press ENTER to exit...", 16, "green");
    cin.get();
}