#include <iostream>
using namespace std;
int main () {
int numeroEntero;
bool primo;
cout << "ingrese un  numero entero: ";
cin >> numeroEntero;
 if (numeroEntero <=1){

        cout << "el numero no es primo";

 }
else {
    primo = true;
    for (int i = 2 ; i < numeroEntero ; i++){

        if (numeroEntero % i == 0){
            primo = false;
        }
    }
    if (primo){
        cout << "numero es primo";

    }
    else {
        cout << "numero no es primo";
    }
}


return 0;
}
