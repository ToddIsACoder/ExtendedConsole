# ExtendedConsole
An extended library that adds functions to your code, it includes foreground and background color, and text styles!

# Library Functions
`Console::setForeground(std::string color);`
Sets foreground color to the specified color

`Console::setBackgroundColor(std::string color);`
Sets background color to the specified color.

`Console::clearConsole();`
Clears the console!

`Console::resetForeground();`
Resets the foreground color to default.

`Console::resetBackground();`
Resets the background color to default

`Console::setTextStyle(int id);`
Sets the text style to bold, italic, underline, or strikethrough.

`Console::resetALL();`
Resets everything, includes: foreground color, background color, and text styles.

# Example



```
#include <iostream>
#include "ExtendedConsole.h"

int main(){
  Console::setForeground("red");
  Console::setBackgroundColor("white");
  std::cout << "Hi from ExtendedConsole!" << std::endl;
}
```


# Codes
For the text styles:
1. Bold
2. Italic
3. Underline
4. Strikethrough

For the colors:
- black
- red
- green
- yellow
- blue
- magenta
- cyan
- white


And that is all! Have a great morning, day, evening, and night!
