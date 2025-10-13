#include <iostream>
#include <string>

using namespace std;

class Animal {
    // Mienbros protegidos
    private:
        string color;

    protected:
        string type;
    public:
        void eat(){
            cout << "Puedo comer  xd" << endl;
        }
        
        void sleep(){
            cout << "A mimir uwu" << endl;
        }

        void setColor(string clr){
            color = clr;
        }

        string getColor(){
            return color;
        }
};

//herencias de clases

class Dog : public Animal {

    public:
        void setType(string tp){
            type = tp;
        }

        void displayInfo(string c){
            cout << "Soy un " << type  << endl;
            cout << "Mi color es " << c << endl;
        }

        void bark(){
            cout << "Puedo ladrar tilin, Woof Woof !!" << endl;
        }
};

int main() {
    // Create object of the Dog class
    Dog dog1;

    // Calling members of the base class
    dog1.eat();
    dog1.sleep();
    dog1.setColor("black");

    // Calling member of the derived class
    dog1.bark();
    dog1.setType("mammal");

    // Using getColor() of dog1 as argument
    // getColor() returns string data
    dog1.displayInfo(dog1.getColor());

    return 0;
}