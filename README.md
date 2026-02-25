# 💀 cryn.h — terminal UI helper for C++

`cryn` is a small header-only library for making your C++ console look decent. Drop it in, call `Init()`, and stop writing the same boilerplate every time you want your CLI to look like something.

> Windows only for now. Linux/macOS support is planned.

---

## what's in it

**Text**
- `Type` — typewriter output with custom speed and color
- `GlitchType` — characters scramble before locking into your text
- `menu` — animated numbered list, no boilerplate

**Lines & Borders**
- `line` — animated single rule `─────`
- `doubleLine` — animated double rule `═════`
- `Border` — draws a box around a string, rounded `╭╮` or sharp `╔╗`
- `Grid2x3` — a 2-column table with headers and 2 rows of content

**Misc**
- `loadingGlitch` — progress bar with a 20% chance of stuttering
- `rarrow` `larrow` `uparrow` `downarrow` — colored directional arrows

Every function that draws something takes a `ms` delay so the speed is always yours to control.

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
// animated dividers
cryn::line(40, 8, "cyan");
cryn::doubleLine(40, 8, "magenta");

// box around text
cryn::Border("  connecting...  ", 12, "green", true);   // rounded
cryn::Border("  ACCESS DENIED  ", 12, "red",   false);  // sharp

// 2-column grid
cryn::Grid2x3("platform", "status",
              "windows",  "supported",
              "linux",    "soon",
              12, "blue", true);

// loading bar
cryn::loadingGlitch(40, 20, 40, "red");

// arrows
cryn::larrow("cyan");
cryn::rarrow("cyan");
```

For a full working example, check out `demo.cpp`.

---

## roadmap
- Linux / macOS support
- more features dropping as time allows

---

*MIT license — keep the header credits intact and you're good.*  
*GitHub: [surx0x0/cryn-ui](https://github.com/surx0x0/cryn-ui)*
