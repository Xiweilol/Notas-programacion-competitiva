#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    //RETO 1 AGENDA TELEFONICA BASICA
        // map <string,string> contactos;

        // cout << "Escriba 3 nombre y su numero de contacto: " << endl;
        // //iterar entradas
        // for (int i = 0; i < 3; ++i){
        //     string a,b;
        //     cout << "Persona " << i+1 << ": ";
        //     cin >> a >> b;
        //     //para a-key, b-valor
        //     contactos.emplace(a,b);
        // }
        
        // for(auto& p : contactos){
        //     cout << p.first << " " << p.second << endl;
        // }
    //RETO 2, ACTUALIZAR VALORES
        // map <string, int> cali = {{"Juan",9},{"Pablo",2},{"Carlos",8}};

        // cout << "Ingresa 3 estudiantes y su correspondiente calificacion: " << endl;

        // for (int i = 0; i < 3 ; ++i){
        //     string nom;
        //     int cal;

        //     cin >> nom >> cal;

        //     cali[nom] = cal;
        // }

        // for(auto it = cali.begin(); it != cali.end(); ++it){
        //     cout << it->first << " " << it->second << endl;
        // }


        // return 0;
    //RETO 3, CONTADOR DE PALABRAS

        //     map <string,int> cont;

        //     string frase;
        //     cout << "Escriba una frase: ";
        //     getline(cin,frase);
        //     //creamos una variable temporal para almacenar la palabra
        //     string temp;
        //     int largo = frase.length();
        //     int contador;
        //     for(char c :frase){
        //         //verificamos si es el ultimo letra de la frase
        //         if (contador == largo-1){
        //             temp += c;
        //             cont[temp]++;
        //             break;
        //         }
        //         //verifica si la caracteristica es un espacio
        //         if(c == ' '){
        //             //incrementa uno por cada palabra nueva
        //             cont[temp]++;
        //             //reiniciamos la palabra
        //             temp = "";
        //             contador++;
        //             continue;
        //         }
        //         //añadimos letra por letra
        //         temp += c;
        //         contador++;
        //     }

        //     for(auto& par : cont){
        //         cout << par.first << " -> " << par.second << endl;;
        //     }

        //     return 0;
    //RETO 4, RANKING DE PUNTUACIONES
        // map <int,string> puntuacion;
        // puntuacion.emplace(12,"JUan");
        // puntuacion.emplace(15,"charlie");
        // puntuacion.emplace(18,"edu");
        // puntuacion.emplace(7,"melon");
        // puntuacion.emplace(20,"jefazo");

        // for(auto it = puntuacion.rbegin(); it != puntuacion.rend(); ++it){
        //     cout << it->first << " -> " << it->second << " " << endl;
        // }

    //RETO 5, MINI BASES DE DATOS
    map <int,string> baseDatos;

    bool menuActiva = true;
    int contadorKeys = 1;
    while (menuActiva){

        cout << "\nIngrese un numero del siguiente menu: " << endl;
        cout << "1.- Insertar un producto" << endl;
        cout << "2.- Busca un prodcuto por id" << endl;
        cout << "3.- Elimianr producto" << endl;
        cout << "4.- Mostrar todos los productos" << endl;
        cout << "0.- Salir" << endl;
        
        int opc;
        cin >> opc;

        switch (opc) {
            case 1:{
                string producto;
                cout << "Ingrese un producto: ";
                cin >> producto;

                
                baseDatos[contadorKeys] = producto;
                contadorKeys++;
                break;
            }
            case 2:{
                if (baseDatos.empty()){
                    cout << "No hay productos registrado" << endl;
                    break;
                }
                int id;
                cout << "Ingrese el id del producto: ";
                cin >> id;

                cout << "\n" << baseDatos[id];
                break;
            }
            case 3:{
                int idEliminar;
                cout << "Ingrese el id del producto a eliminar: ";
                cin >> idEliminar;
                
                baseDatos.erase(idEliminar);
                break;
            }
            case 4:{
                if (baseDatos.empty()){
                    cout << "No hay productos registrado" << endl;
                    break;
                }
                for(auto& par : baseDatos){
                    cout << par.first << " ------ " << par.second << endl;
                }
                break;
            }
            case 0:{
                menuActiva = false;
                break;
            }
            
            default:
                break;
        }

    }
    return 0;

}

