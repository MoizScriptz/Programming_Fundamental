# C++ PROGRMING LANGUAGE
## 🧩 1. Intall Visual Studio code (Vs Code) 
### [Visual Studio Code](https://code.visualstudio.com/download)
##  ⚙️ 2. Install C++ Compiler
## 🖥️ macOS:

### You can install Xcode Command Line Tools (includes g++)
### Open Terminal and run:
```
    xcode-select --install
```
## 💻 Windows:
### Install MinGW or MSYS2 (recommended).

## 🐧 Linux:

### Run:
```
    sudo apt update
    sudo apt install g++
```
## Add Extention: 
### - [C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)
### - [C/C++ Extension pack](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools-extension-pack)
### - [C/C++ Runner](https://marketplace.visualstudio.com/items?itemName=franneck94.c-cpp-runner)

## 🧱 4. Create and Save a C++ File
## Save it as <strong>main.cpp<strong>

```
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, world!" << endl;
    return 0;
}

```
## ▶️ 5. Run the Program
## Option 1 – Using Terminal (Manual)

### Open the terminal in VS Code (Ctrl + ~ / Cmd + ~)
## Then run:
```
    g++ main.cpp -o main
    ./main
```
## Option 2 – Using Code Runner Extension

### If installed, click the "Run" ▶️ button at the top-right corner
#### —or press <i>Ctrl+Alt+N <i> / <i>Cmd+Option+N<i>
#### It will compile and execute automatically.