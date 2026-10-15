#include <iostream>
using namespace std;

int main(){
    int numero, suma = 0, contador = 0;

    cout << "ingrese un numero: ";
    cin >> numero;

    for(int i = 1; i <= numero; i++){
        if(i % 2 !=0){
            suma = suma + i;
            contador++;
        }
    }

    cout << "la suma de los numeros imapres es: " << suma << endl;
    cout << " la cantidad de numeros impares es: " << contador << endl;













    return 0;
}