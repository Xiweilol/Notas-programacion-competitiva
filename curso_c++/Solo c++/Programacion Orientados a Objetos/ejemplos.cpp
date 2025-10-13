#include <iostream>

using namespace std;

class Room{
  public:
        double length;
        double breadth;
        double height;

        double calculate_area(){
            return length * breadth;
        }

        double calculate_volumen(){
            return length * breadth * height;
        }
};

// clases con constructores

// class Wall{
//     private:
//         double length;

//     public:
//         Wall()
//             : length{5.5} {
//             cout << "Creando un muro." << endl;
//             cout << "Length = " << length << endl;
//         }
// };

// clases con constructores parametrizados
class Wall{
    public:
            double length;
            double height;
// /**/
//     public:
//         Wall(double len,double hgt)
//         : length{len}
//         , height{hgt}{
//         }

//         double calculateArea(){
//             return length * height;
//         }
// };
};
class Animal{
    private:
        
    public:
            void sonidoQuehace(){

            }

    };
class Perro : Animal{


};
int main(){
    Wall wall1;

    wall1.length = 10.5;
    wall1.height = 5.5;

    cout << wall1.length << " " << wall1.height;
    return 0;

}