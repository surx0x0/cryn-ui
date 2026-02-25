/*
 *   cryn-ui  ·  demo.cpp
 *   version  :  1.15
 *   author   :  surxoxo
 *   github   :  https://github.com/surx0x0/cryn-ui
 */

#include "cryn.h"
#include <vector>
#include <string>

int main()
{
    cryn::Init();
    cryn::setFont(20);

    Sleep(200);

    cryn::doubleLine(36, 8, "cyan");
    cryn::GlitchType("  cryn-ui  //  v1.15  //  surxoxo", 18, "cyan");
    cryn::doubleLine(36, 8, "cyan");

    Sleep(300);

    std::cout << "  ";
    cryn::larrow("magenta");
    std::cout << "  prev    next  ";
    cryn::rarrow("magenta");
    std::cout << "    ";
    cryn::uparrow("yellow");
    std::cout << " up  ";
    cryn::downarrow("yellow");
    std::cout << " down" << std::endl;

    Sleep(200);
    cryn::line(36, 6, "magenta");
    Sleep(200);

    cryn::Type("  features", 30, "yellow");

    std::vector<std::string> items = {
        "animated typewriter",
        "glitch effect",
        "borders  ( rounded / sharp )",
        "loading bar",
        "grid layout",
        "directional arrows"
    };

    cryn::menu(items, 18, "green");

    Sleep(300);
    cryn::line(36, 6, "green");
    Sleep(200);

    cryn::Border("  github.com/surx0x0/cryn-ui  ", 12, "cyan", true);

    Sleep(300);

    cryn::Border("  MIT licensed. fork it.  ", 12, "magenta", false);

    Sleep(300);
    cryn::line(36, 6, "yellow");
    Sleep(200);

    cryn::Grid2x3("platform", "status","windows", "supported","linux/mac", "soon",12, "blue", true);

    Sleep(300);
    cryn::line(36, 6, "blue");
    Sleep(200);

    cryn::Type("  loading next update...", 25, "red");
    cryn::loadingGlitch(36, 20, 40, "red");

    Sleep(300);
    cryn::doubleLine(36, 8, "cyan");

    cryn::GlitchType("  star the repo  //  more coming", 15, "green");
    cryn::doubleLine(36, 8, "cyan");

    Sleep(400);
}