#include "cryn.h"

int main()
{
    vector<string> YourMenuVector = { "Red", "Blue","Black", "Purple", "Cyan" }; // <--- your vector

    cryn::Init(); // <--- Initialize Cryn IMPORTANT

    cryn::setFont(20); // <--- Big text (Consolas default)

    cryn::GlitchType("Hello Guys", 25, "red"); // <--- Glitch text: "msg", speed, "color"

    cryn::loadingGlitch(10, 25, 100, "green"); // <--- Bar: length, speed, duration, "color"

    cryn::menu(YourMenuVector, 25, "white"); // <--- menu: vector, speed, "color"

    cryn::line(15, 25, "white"); // <--- line: length, speed, "color" 

    cryn::Type("Check for updates: https://github.com/surx0x0/cryn-ui/", 20, "magenta"); // <--- Credits: "url", speed, "color"

    cryn::Type("Current Version: 1.00", 20, "green"); // <--- Versioning: "text", speed, "color"


    /* AVAILABLE COLORS FOR CRYN:
        "red", "green", "blue", "cyan", "yellow", "magenta", "white"
    */

    /* cryn.h - Stylized C++ Terminal UI Library
     * Created by: surxoxo
     * GitHub: https://github.com/surx0x0/
     * License: MIT (Don't steal credit, keep this part of the header intact!)
     */
}
