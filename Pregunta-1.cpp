//me dan dos vectores uno de las letras y otro con los numeros del decodificador, basicamente los tengo que combinar en el orden correcto para cada letra o espacio, para poder usar ele 
//for necesito el size del mensaje, solo cuento cuantos valores me da en el decodificador y ese es el tamaño que usare como limite de iteraciones en ewl for 




#include<iostream>
#include<conio.h>
using namespace std;

void decodificar(char *mensaje, int *decod, int tam){ //void para que no me pida mas na
    
    char *one = mensaje;      // coso al mensaje, char es letrica por retrica
    int *piece = decod;         // coso del decodificador

    for(int i = 0; i < tam; i++){
        one = one + *(piece + i);   // mover el coso segun el valor del decodificador
        cout << *one;         // prin la letra 
    }
}


int main() {

    char mensajeCifrado[] = {
        ' ','A','E','I','O','U','a','e','i','o','u',
        'B','C','D','F','G','H','J','K','L','M','N','P','Q','R','S','T','V','W','X','Y','Z',
        'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'
    };
    int decodificador[] = { 2,17,-19,2,48,-44,35,-34,35,-42,2,44,1,-41,-6,2,4,40,5};
    int tam = 19;
    decodificar(mensajeCifrado, decodificador, tam);
	return 0;

}



