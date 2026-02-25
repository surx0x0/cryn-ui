# 💀 cryn.h — C++ terminal UI library

`cryn` is a lightweight, header-only C++ library for styling your Windows console. If you've ever wanted your C++ CLI app to actually look good without spending an hour on boilerplate, this is for you. Drop `cryn.h` into your project, call `Init()`, and start building better-looking console UIs right away.

> Currently supports Windows. Linux/macOS support is planned.

---

## what's in it

**Text**
- `Type` — typewriter-style console output with custom speed and color
- `GlitchType` — animated glitch effect that scrambles before revealing your text
- `menu` — animated numbered list for console menus, no boilerplate

**Lines & Borders**
- `line` — animated single rule `─────`
- `doubleLine` — animated double rule `═════`
- `Border` — draws a styled box around text, rounded `╭╮` or sharp `╔╗`
- `Grid2x3` — a 2-column table with headers and 2 rows, great for console dashboards

**Misc**
- `loadingGlitch` — terminal progress bar with a 20% chance of stuttering
- `rarrow` `larrow` `uparrow` `downarrow` — colored directional arrows for console navigation

Every function takes a `ms` delay parameter so you control the animation speed.

---

## quick start

1. Download `cryn.h` and drop it in your project folder
2. Include it
3. Call `Init()` before anything else

```cpp
#include "cryn.h"

int main() {
    cryn::Init();
    cryn::setFont(22);

    cryn::GlitchType("ACCESS GRANTED", 50, "green");

    return 0;
}
```

Colors available: `red` `green` `blue` `cyan` `yellow` `magenta`

---

## a few more examples

```cpp
// animated console dividers
cryn::line(40, 8, "cyan");
cryn::doubleLine(40, 8, "magenta");

// styled border around text
cryn::Border("  connecting...  ", 12, "green", true);   // rounded
cryn::Border("  ACCESS DENIED  ", 12, "red",   false);  // sharp

// 2-column console grid / table
cryn::Grid2x3("platform", "status",
              "windows",  "supported",
              "linux",    "soon",
              12, "blue", true);

// terminal loading bar
cryn::loadingGlitch(40, 20, 40, "red");

// directional arrows
cryn::larrow("cyan");
cryn::rarrow("cyan");
```

For a full working example, check out `demo.cpp`.

---

## roadmap
- Linux / macOS console support
- more components and styling options over time

---

*MIT license — keep the header credits intact and you're good.*  
*GitHub: [surx0x0/cryn-ui](https://github.com/surx0x0/cryn-ui)*
