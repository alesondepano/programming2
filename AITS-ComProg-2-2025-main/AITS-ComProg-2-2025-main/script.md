# 📘 **C++ Departmental Review Script**    

## 🧩 MODULE 1: User-Defined Functions and Parameters

### 🔹 What are Functions?

* Blocks of reusable code.
* Types:
  + **Built-in** (e.g. `sqrt()`)
  + **User-defined**

### 🔹 Function Syntax

```cpp
int add(int a, int b) {
    return a + b;
}
```

### 🔹 Function Categories

| Arguments | Return Value | Example |
|-----------|--------------|---------|
| No        | No           | `void greet()` |
| No        | Yes          | `int getAge()` |
| Yes       | No           | `void printName(string name)` |
| Yes       | Yes          | `int add(int a, int b)` |

### 🔹 Function Overloading

* Same name, different parameters:

```cpp
int test() {}
int test(int a) {}
float test(double a) {}
```

### ✅ **Key Takeaways**

* Helps modularize code.
* Reuse through function calls.
* Use void for actions; use return for results.

### 💡 Hack

* Use prototypes to organize large codebases.

```cpp
int add(int, int); // prototype
```

---

## 📊 MODULE 2: Arrays

### 🔹 Single-Dimensional Arrays

```cpp
int scores[5] = {90, 85, 75, 80, 95};
```

* Index starts at 0.
* Access: `scores[2]`

### 🔹 Multi-Dimensional Arrays

```cpp
int matrix[2][3] = { {1, 2, 3}, {4, 5, 6} };
```

### ✅ **Key Takeaways**

* Arrays store multiple values of the same type.
* Use loops for traversal.
* Index carefully to avoid overflow.

### 💡 Hack

* You can pass arrays to functions easily:

```cpp
void display(int arr[]) {
    // loop through array
}
```

---

## 🔤 MODULE 3: Strings & Character Manipulation

### 🔹 C-Strings

```cpp
char name[10] = "Lance";
```

* Null-terminated (`\0`)
* Functions: `strcpy`,    `strlen`,    `strcmp`

### 🔹 Character Functions ( `<cctype>` )

```cpp
isalpha(c), isdigit(c), toupper(c)
```

### 🔹 C++ String Class

```cpp
string a = "Hello", b = "World";
string c = a + " " + b;
```

### ✅ **Key Takeaways**

* Prefer `string` over C-strings.
* Use string functions like `.length()`,    `.compare()`,    `.append()`.

### 💡 Hack

* Use `getline(cin, str)` to capture input with spaces.

---

## 🧱 MODULE 4: Structures

### 🔹 Basic Structure

```cpp
struct Person {
  char name[50];
  int age;
  float salary;
};
```

### 🔹 Access Members

```cpp
Person p1;
p1.age = 25;
```

### 🔹 Passing Structures

* **By value** – copy
* **By reference** – modifies original

### ✅ **Key Takeaways**

* Structures combine multiple data types.
* Use `.` operator for access.
* Pass structures to functions for clean data handling.

### 💡 Hack

* You can create arrays of structures:

```cpp
Person list[10];
```

---

## 🧠 MODULE 5: Pointers and Dynamic Arrays

### 🔹 Pointers Basics

```cpp
int a = 10;
int *p = &a;
```

* `*p` is dereferencing.
* `&a` is address-of.

### 🔹 Dynamic Allocation

```cpp
int* arr = new int[5];
delete[] arr;
```

### ✅ **Key Takeaways**

* Use pointers for memory management.
* Use `new` and `delete` for dynamic arrays.

### 💡 Hack

* Always set pointers to `nullptr` after deletion to avoid dangling pointers.

---

## 🔗 MODULE 6: Linked Lists

### 🔹 Node Structure

```cpp
struct Node {
  int data;
  Node* next;
};
```

### 🔹 Operations

* Creation, insertion, deletion, traversal

### 🔹 Example

```cpp
Node* head = nullptr;
```

### ✅ **Key Takeaways**

* Dynamic size vs static size in arrays.
* Efficient insertions/deletions.
* Understand `head`,    `next`,    `NULL`.

### 💡 Hack

* Use typedef for cleaner pointer names:

```cpp
typedef Node* NodePtr;
```

---

## 📁 MODULE 7: File Handling

### 🔹 Using `FILE*` (C-Style)

```cpp
FILE *fp = fopen("data.txt", "w");
fprintf(fp, "Hello World");
fclose(fp);
```

### 🔹 Using `<fstream>` (C++-Style)

```cpp
ofstream myFile("data.txt");
myFile << "Hello C++";
myFile.close();
```

### ✅ **Key Takeaways**

* Use `fopen/fclose` for low-level access.
* Use `fstream` for C++ standard way.

### 💡 Hack

* Always check file status:

```cpp
if (fp == NULL) perror("Error opening file");
```

---

## 🧱 MODULE 8: Object-Oriented Programming (OOP)

### 🔹 Classes & Objects

```cpp
class Car {
public:
  string brand;
  int year;
};
Car c1;
```

### 🔹 Access Modifiers

* `public`,    `private`,    `protected`

### 🔹 Inheritance

```cpp
class Dog : public Animal {};
```

### ✅ **Key Takeaways**

* OOP = classes + objects + inheritance.
* Supports encapsulation, abstraction, modular code.

### 💡 Hack

* Use `::` scope resolution for defining functions outside the class.

---

## 🚀 Final Recap (5-10 minutes)

### 🔑 Key Concepts to Remember

* Functions: Modularize code.
* Arrays: Store multiple values.
* Strings: C-style vs `string` class.
* Structures: Group variables.
* Pointers: Direct memory access.
* Linked List: Dynamic memory.
* File Handling: Data persistence.
* OOP: Modular, scalable code.

---

## 🧠 Presentation Hacks

* **Use VS Code Tabs**: Split windows for `.cpp` file and terminal.
* **Run Code Live**: Use Code Runner or g++ compiler + terminal.
* **Highlight Live Output**: Add `cout << "---"` lines.
* **Comment First, Then Code**: Explain what you’ll do, then type.
* **Use Minimal UI Themes**: Dark theme + large font.
