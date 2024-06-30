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
	Cliente cliente;

    // Commit:Datos del cliente
    printf("Ingrese la razon social: ");
    fgets(cliente.razonSocial, 100, stdin);
    cliente.razonSocial[strcspn(cliente.razonSocial, "\n")] = '\0'; // quitar el salto de línea

    printf("Ingrese la cedula de identidad: ");
    fgets(cliente.cedula, 20, stdin);
    cliente.cedula[strcspn(cliente.cedula, "\n")] = '\0'; // quitar el salto de línea
	
	/*CANTIDAD DE REFRESCOS Y MALTAS*/
	
	printf("Ingrese la cantidad de refrescos al detal: ");
    scanf("%d", &cliente.refrescosDetal);
    printf("Ingrese la cantidad de maltas al detal: ");
    scanf("%d", &cliente.maltasDetal);
    
    /*MONTO TOTAL PA PAGAR*/
    
    float totalPagar = calcularTotal(cliente);

    printf("\nTotal a pagar por %s (%s): $%.2f\n", cliente.razonSocial, cliente.cedula, totalPagar);
    
    /*INTEGRANTES DEL EQUIPASO*/
    
    printf("\nIntegrantes:\nJorge Pina\nJhosnar Ereu\nHector Godoy\n");
    
    return 0;
}
