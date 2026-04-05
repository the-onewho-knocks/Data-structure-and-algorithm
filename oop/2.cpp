#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int marks;

   Student(string name, int marks) {
        this->name = name;
        this->marks = marks;
    }

    void display() {
        cout << name << " " << marks << endl;
    }
};

int main() {
    Student s1("Rahul", 90);
    s1.display();
}