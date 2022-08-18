#include <iostream>

using namespace std;


void calculadora(){
cout << "Ingrese la operacion a realizar: \n";
cout << "1. Suma \n";
cout << "2. Resta \n";
cout << "3. Multiplicacion \n";
cout << "4. Division \n";
int opcion = 0;
cin >> opcion;
int resultado = 0;

switch(opcion)
{
    case 1:{
    cout << "------------- Suma ------------- \n";
    cout << " \n";
    printf("Ingrese el primer numero: \n");
    int numeroA = 0;
    cin >> numeroA;
    printf("Ingrese el segundo numero: \n");
    int numeroB = 0;
    cin >> numeroB;
    resultado=numeroA+numeroB;
    cout<<"El resultado de la suma es: "<<resultado<<" \n";
    }
    break;

    case 2:{
    cout << "------------- Resta -------------";
    cout << " \n";
    printf("Ingrese el primer numero: \n");
    int numeroA = 0;
    cin >> numeroA;
    printf("Ingrese el segundo numero: \n");
    int numeroB = 0;
    cin >> numeroB;
    resultado=numeroA-numeroB;
    cout<<"El resultado de la resta es: "<<resultado<<" \n";

    }
    break;

    case 3:{
    cout << "------------- Multiplicacion -------------";
    cout << " \n";
    printf("Ingrese el primer numero: \n");
    int numeroA = 0;
    cin >> numeroA;
    printf("Ingrese el segundo numero: \n");
    int numeroB = 0;
    cin >> numeroB;
    resultado=numeroA*numeroB;
    cout<<"El resultado de la multiplicacion es: "<<resultado<<" \n";

    }
    break;

    case 4:{
    cout << "------------- Division -------------";
    cout << " \n";
    printf("Ingrese el primer numero: \n");
    int numeroA = 0;
    cin >> numeroA;
    printf("Ingrese el segundo numero: \n");
    int numeroB = 0;
    cin >> numeroB;
    resultado=numeroA/numeroB;
    cout<<"El resultado de la division es: "<<resultado<<" \n";

    }
    break;


    default: cout << "Operacion inexistente";
}
}




int main(){
    int opcion0=0;
    bool flag=true;
    calculadora();

while(flag=true){

    cout << "Ingrese 1 para hacer otra operacion o 2 para salir...\n";
    cin>> opcion0;
    switch(opcion0){
    case 1:{
    calculadora();
        }
    break;
    case 2:{
    exit(3);
    break;
        }
    }
}

return 0;
}
