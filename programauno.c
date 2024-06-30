#include <stdio.h>
#include <stdlib.h>

/*PROGRAMAA*/


/*DEFINIENDO LAS VARIABLES*/

typedef struct {
    char razonSocial[100];
    char cedula[20];
    int refrescosDetal;
    int maltasDetal;
} Cliente;

/*DESARROLLANDO LA LOGICA*/

float calcularTotal(Cliente cliente) {
    float total = 0;
    if (cliente.refrescosDetal > 6) {
        total += cliente.refrescosDetal * 5; // al mayor
    } else {
        total += cliente.refrescosDetal * 10; //al detal
    }

    if (cliente.maltasDetal > 6) {
        total += cliente.maltasDetal * 7; //al mayor
    } else {
        total += cliente.maltasDetal * 12; //al detal
    }

    return total;
}


int main() {
	
	return 0;
}
