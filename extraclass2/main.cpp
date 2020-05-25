# include <iostream>
# include "Suma.h"
# include "Resta.h"
# include "Multiplicacion.h"
# include "Division.h"
using namespace std;
int main() {
    float num1, num2;
    string operador;
    cout << "Bienvenidos" << endl;
    cout << "Digite 2 numeros" << endl;
    cin >> num1 >> num2;
    cout << "Elija operacion:" << endl;
    cout << "(1):Suma" << endl;
    cout << "(2):Resta" << endl;
    cout << "(3):Multiplicacion" << endl;
    cout << "(4):Division" << endl;
    cin >> operador;
    cout << "El resultado es:" << endl;
    if (operador == "1"){
        Suma suma;
        cout << suma.sumar(num1,num2) <<endl;
    }
    else if (operador == "2"){
        Resta resta;
        cout << resta.restar(num1,num2) <<endl;
    }
    else if (operador == "3"){
        Multiplicacion multiplicacion;
        cout << multiplicacion.multiplicar(num1,num2) <<endl;
    }
    else if (operador == "4"){
        Division division;
        cout << division.dividir(num1,num2) <<endl;
    }
    else{
        cout <<"Usuario ingreso operador erroneo" <<endl;
    }



    return 0;
}
