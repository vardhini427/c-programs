// Various forms of inheritance
#include <iostream>
using namespace std;

// ---------- i. Single inheritance ----------
class Animal {
public:
    void eat() { cout << "Animal eats" << endl; }
};
class Dog : public Animal {
public:
    void bark() { cout << "Dog barks" << endl; }
};

// ---------- ii. Multiple inheritance ----------
class Father {
public:
    void skills() { cout << "Father: driving" << endl; }
};
class Mother {
public:
    void hobby() { cout << "Mother: painting" << endl; }
};
class Child : public Father, public Mother {
public:
    void play() { cout << "Child: playing" << endl; }
};

// ---------- iii. Multilevel inheritance ----------
class Grandparent {
public:
    void showG() { cout << "Grandparent class" << endl; }
};
class Parent : public Grandparent {
public:
    void showP() { cout << "Parent class" << endl; }
};
class Kid : public Parent {
public:
    void showK() { cout << "Kid class" << endl; }
};

// ---------- iv. Hierarchical inheritance ----------
class Shape {
public:
    void info() { cout << "This is a shape" << endl; }
};
class Circle : public Shape {
public:
    void draw() { cout << "Drawing circle" << endl; }
};
class Square : public Shape {
public:
    void draw() { cout << "Drawing square" << endl; }
};

// ---------- v. Hybrid inheritance ----------
class Person {
public:
    void showPerson() { cout << "Person" << endl; }
};
class Student : public Person {
public:
    void showStudent() { cout << "Student" << endl; }
};
class Sports {
public:
    void showSports() { cout << "Sports" << endl; }
};
class Result : public Student, public Sports {
public:
    void showResult() { cout << "Result (hybrid)" << endl; }
};

int main() {
    cout << "--- Single ---" << endl;
    Dog d; d.eat(); d.bark();

    cout << "--- Multiple ---" << endl;
    Child c; c.skills(); c.hobby(); c.play();

    cout << "--- Multilevel ---" << endl;
    Kid k; k.showG(); k.showP(); k.showK();

    cout << "--- Hierarchical ---" << endl;
    Circle ci; Square sq;
    ci.info(); ci.draw();
    sq.info(); sq.draw();

    cout << "--- Hybrid ---" << endl;
    Result r; r.showPerson(); r.showStudent(); r.showSports(); r.showResult();
    return 0;
}
