#include <iostream>
using namespace std;

class Animal {
    private:
        string name;
        int age;

    public:
        Animal() {} // Default constructor

        Animal(string n, int a) { // Constructor with name and age arguments
            name = n;
            age = a;
        }

        string getName() {
            return name;
        }

        void setName(string n) {
            name = n;
        }

        int getAge() {
            return age;
        }

        void setAge(int a) {
            age = a;
        }

        void runAt(string place) {
            cout << name << " runs at " << place << endl;
        }

        void bark(string stranger) {
            cout << name << " barks at " << stranger << endl;
        }
};

int main() {
    Animal myPet("Chali", 1);
    Animal yourPet("Buddy", 2);

    myPet.runAt("the park");
    yourPet.bark("the mailman");

    return 0;
}