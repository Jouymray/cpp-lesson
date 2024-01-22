#include <iostream>
using namespace std;

class Animal {
public:
    string name;
    int age;

    Animal() : name(""), age(0) {}

    Animal(string n, int a) : name(n), age(a) {}

    void runAt(string place) {
        cout << name << " runs at " << place << endl;
    }

    void barkAt(string stranger) {
        cout << name << " barks at " << stranger << endl;
    }
    void myAge(string age) {
        cout<< "You are " << age << endl;
    }
};

int main() {
    Animal myPet("Chali", 1);
    Animal yourPet("Buddy", 2);
    Animal myAge("Your Pet",3);

    myPet.runAt("Wat Phnom");
    myPet.barkAt("Pisal");
    myAge.myAge("6 years old");
    return 0;
}