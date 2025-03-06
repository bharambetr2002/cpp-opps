# Object-Oriented Programming (OOP)

## Introduction

OOP stands for **Object-Oriented Programming**.

Procedural programming focuses on writing functions that operate on data, while **object-oriented programming** focuses on creating objects that contain both **data and functions**.

### Advantages of OOP over Procedural Programming:

- OOP is **faster and easier** to execute.
- OOP provides a **clear structure** for programs.
- OOP helps to keep code **DRY** ("Don't Repeat Yourself"), making it easier to **maintain, modify, and debug**.
- OOP allows the creation of **fully reusable applications** with less code and shorter development time.

---

## Classes and Objects

Classes and objects are the two main **aspects** of object-oriented programming.

- **Class**: A blueprint or **template** for objects.
- **Object**: An **instance** of a class.

### Real-World Example:

A **car** is an object. It has:

- **Attributes** (e.g., color, weight, model).
- **Methods** (e.g., drive, brake).

### Implementation:

```cpp
#include <iostream>
using namespace std;

class Car {
public:
    string color;
    int speed;

    void drive() {
        cout << "The car is driving" << endl;
    }
};

int main() {
    Car myCar; // Object creation
    myCar.color = "Red";
    myCar.speed = 100;
    myCar.drive();
    return 0;
}
```

---

## Class Methods

Methods are **functions that belong to a class**.

### Types of Class Methods:

- **Inside Class Definition** (Defined directly inside the class.)
- **Outside Class Definition** (Declared inside the class but defined outside using the scope resolution operator `::`.)

### Example:

```cpp
class Hero {
public:
    void sayHello() {
        cout << "Hello, Hero!" << endl;
    }
};
```

---

## Additional OOP Concepts

### Size of an Empty Class

The size of an empty class is **1 byte** to ensure each instance has a unique memory address.

### Access Modifiers

Access modifiers in C++ are:

- **Public**: Members are accessible from outside the class.
- **Private**: Members are accessible only within the class.
- **Protected**: Members are accessible within the class and derived classes.

### Example:

```cpp
class Person {
private:
    int age;
public:
    string name;
};
```

---

## Getter and Setter Methods

Used to **get** or **set** values of **private data members**.

### Example:

```cpp
class Hero {
private:
    int health;
public:
    void setHealth(int h) { health = h; }
    int getHealth() { return health; }
};
```

---

## Dynamic Allocation

Objects can be dynamically allocated using pointers:

```cpp
Hero *h = new Hero();
h->setHealth(100);
delete h; // Free allocated memory
```

---

## Constructors

A **constructor** is automatically invoked when an object is created.

### Example:

```cpp
class Hero {
public:
    Hero() {
        cout << "Constructor Called!" << endl;
    }
};
```

### Parameterized Constructor:

```cpp
class Hero {
private:
    int health;
public:
    Hero(int h) { health = h; }
};
```

### `this` Keyword

The `this` keyword refers to the **current instance** of the class.

```cpp
class Hero {
private:
    int health;
public:
    Hero(int health) {
        this->health = health;
    }
};
```

---

## Encapsulation

Encapsulation is about **hiding sensitive data** from users by making attributes private and using getter/setter methods.

### Example:

```cpp
class BankAccount {
private:
    double balance;
public:
    void setBalance(double b) { balance = b; }
    double getBalance() { return balance; }
};
```

### Benefits of Encapsulation:
- Keeps data secure.
- Better control over data.
- Allows changes without affecting other parts of the code.

---

## Inheritance

Inheritance allows a **child class** to inherit attributes and methods from a **parent class**.

### Example:

```cpp
class Animal {
public:
    void makeSound() {
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal {
};

int main() {
    Dog myDog;
    myDog.makeSound(); // Inherited function
    return 0;
}
```

### Types of Inheritance:

- **Single Inheritance** - One parent, one child.
- **Multilevel Inheritance** - Derived from another derived class.
- **Multiple Inheritance** - Derived from multiple parent classes.

---

## Polymorphism

Polymorphism means "many forms" and allows functions/methods to be used in different ways.

### Example:

```cpp
class Animal {
public:
    virtual void makeSound() {
        cout << "Some animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Bark" << endl;
    }
};

int main() {
    Animal* a = new Dog();
    a->makeSound(); // Calls Dog's version
    delete a;
    return 0;
}
```

---

## Summary

- **Classes and Objects**: Blueprints and instances.
- **Encapsulation**: Data hiding and security.
- **Inheritance**: Reusability of code.
- **Polymorphism**: Different behaviors for the same function.
- **Constructors and Destructors**: Automatic initialization and cleanup.

This document provides a complete overview of **OOP in C++** with syntax, real-world examples, and implementation details.

