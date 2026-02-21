# 💀 cryn.h - UI helper for C++ terminal

`cryn` for UI is designed to skip you some time and make your terminal look better. It turns a boring CMD window into a stylized interface with custom speeds and glitch aesthetics.

---

## 🔥 Features

* **Glitch Type**: Random characters that turn into your text.
* **Loading Glitch**: A progression bar that has a 20% of stuttering. 
* **Menu**: Skip some time on writing a menu; `cryn` does it for you.
* **Type**: Instead of using `cout` with instant paste, set your own typewriter speeds to it and write a single line! 

> **Note**: The typing speed is custom and applies to the features mentioned above!

## 📈 Roadmap
* More features and improvements daily!

---

## 🚀 Quick Start

1. **Download**: Download `cryn.h` and put it in your project folder.
2. **Include**: Include it in your project.
3. **Initialize**: Call `Init()` to set up colors and UTF-8.

```cpp
#include "cryn.h"

int main() {
    cryn::Init();
    cryn::setFont(22);
    
    cryn::GlitchType("ACCESS GRANTED", 50, "green");
    
    return 0;
}
```

## For more info on how to use, go ahead and look over demo.cpp
