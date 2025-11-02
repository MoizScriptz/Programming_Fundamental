# 📘 C++ Basic Practice -- Variables & Output (Full Solutions + Dry Runs)

This repository contains **complete C++ solutions ✅**, **concept
explanations 📚**, and **line‑by‑line dry runs 🧠** for **15
foundational C++ practice questions**.

Perfect for 🎓 beginners, 💻 students, and 📁 lab submissions.

------------------------------------------------------------------------

## 💡 Core Concepts Covered

-   🖨️ Output using `cout`
-   🧠 Variables declaration & initialization
-   🔢 Data types (`int`, `float`, `double`, `char`, `string`, `bool`)
-   ➕ Arithmetic operations
-   ✨ Escape sequences: `\n`, `\t`

------------------------------------------------------------------------

## ⚙️ How to Compile & Run

### Compile

``` bash
g++ filename.cpp -o program
```

### Run

``` bash
./program
```

------------------------------------------------------------------------

## ✅ Full Questions, Code & Dry Runs

------------------------------------------------------------------------

### 🎯 **Q1 --- Display Welcome Message**

``` cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to C++ Programming!";
    return 0;
}
```

  Line            Code          Output
  --------------- ------------- -----------------------------
  cout \<\< ...   Prints text   Welcome to C++ Programming!

------------------------------------------------------------------------

### 👤 **Q2 --- Print Your Name**

``` cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "Ali";
    cout << "My name is " << name << ".";
    return 0;
}
```

  Variable   Value
  ---------- -------
  name       "Ali"

**Output:** `My name is Ali.`

------------------------------------------------------------------------

### 🔢 **Q3 --- Display Two Numbers**

``` cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;
    cout << "The value of a is " << a << " and b is " << b;
    return 0;
}
```

**Output:** `The value of a is 10 and b is 20`

------------------------------------------------------------------------

### 🅰️ **Q4 --- Display Character**

``` cpp
#include <iostream>
using namespace std;

int main() {
    char grade = 'A';
    cout << "The grade is: " << grade;
    return 0;
}
```

**Output:** `The grade is: A`

------------------------------------------------------------------------

### 🌡️ **Q5 --- Float Example**

``` cpp
#include <iostream>
using namespace std;

int main() {
    float temperature = 36.6;
    cout << "The body temperature is " << temperature << "°C";
    return 0;
}
```

**Output:** `The body temperature is 36.6°C`

------------------------------------------------------------------------

### 📅 **Q6 --- Print Year**

``` cpp
#include <iostream>
using namespace std;

int main() {
    int year = 2025;
    cout << "The current year is " << year;
    return 0;
}
```

**Output:** `The current year is 2025`

------------------------------------------------------------------------

### ➕ **Q7 --- Sum of Two Numbers**

``` cpp
#include <iostream>
using namespace std;

int main() {
    int x = 15, y = 25;
    int sum = x + y;
    cout << "Sum of x and y is " << sum;
    return 0;
}
```

**Output:** `Sum of x and y is 40`

------------------------------------------------------------------------

### 👨‍🎓 **Q8 --- Student Info**

``` cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    int age = 20;
    string name = "Ali";
    float marks = 89.5;

    cout << "Student Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Marks: " << marks;
    return 0;
}
```

**Output:**

    Student Name: Ali
    Age: 20
    Marks: 89.5

------------------------------------------------------------------------

### 📐 **Q9 --- Area of Rectangle**

``` cpp
#include <iostream>
using namespace std;

int main() {
    int length = 5, width = 3;
    int area = length * width;
    cout << "Area of Rectangle = " << area;
    return 0;
}
```

**Output:** `Area of Rectangle = 15`

------------------------------------------------------------------------

### π **Q10 --- Double Example**

``` cpp
#include <iostream>
using namespace std;

int main() {
    double pi = 3.14159;
    cout << "The value of pi is " << pi;
    return 0;
}
```

**Output:** `The value of pi is 3.14159`

------------------------------------------------------------------------

### 🌧️ **Q11 --- Boolean Example**

#### Part 1 (default 0/1 output)

``` cpp
#include <iostream>
using namespace std;

int main() {
    bool isRaining = false;
    cout << "Is it raining? " << isRaining;
    return 0;
}
```

**Output:** `Is it raining? 0`

#### Part 2 (Yes/No)

``` cpp
#include <iostream>
using namespace std;

int main() {
    bool isRaining = false;

    cout << "Is it raining? ";
    if (isRaining)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
```

**Output:** `Is it raining? No`

------------------------------------------------------------------------

### 🔁 **Q12 --- Swap Numbers (Manual)**

``` cpp
#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;
    cout << "Before swapping: a=" << a << ", b=" << b << endl;

    a = 10;
    b = 5;

    cout << "After swapping: a=" << a << ", b=" << b;
    return 0;
}
```

**Output:**

    Before swapping: a=5, b=10
    After swapping: a=10, b=5

------------------------------------------------------------------------

### 🧾 **Q13 --- Student Info Static**

``` cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "Sara";
    int rollNo = 23;
    string dept = "Computer Science";

    cout << "Name: " << name << endl;
    cout << "Roll No: " << rollNo << endl;
    cout << "Department: " << dept;
    return 0;
}
```

**Output:**

    Name: Sara
    Roll No: 23
    Department: Computer Science

------------------------------------------------------------------------

### 💸 **Q14 --- Currency Output**

``` cpp
#include <iostream>
using namespace std;

int main() {
    float price = 250.75;
    cout << "Total Price: Rs. " << price;
    return 0;
}
```

**Output:** `Total Price: Rs. 250.75`

------------------------------------------------------------------------

### ✨ **Q15 --- Escape Sequences**

``` cpp
#include <iostream>
using namespace std;

int main() {
    cout << "C++ Output Practice:\n\t1. Variables\n\t2. Data Types\n\t3. Output";
    return 0;
}
```

**Output:**

    C++ Output Practice:
        1. Variables
        2. Data Types
        3. Output

------------------------------------------------------------------------

## 🎉 End of Assignment

-   ✅ All 15 programs completed
-   📌 Each includes code & output
-   🧠 Perfect for learning & submission

------------------------------------------------------------------------


### Happy Coding 👨‍💻✨
