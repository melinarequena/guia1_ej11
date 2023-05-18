/*
 Una inmobiliaria posee una lista de registros con los siguientes campos: barrio,
cantidad de ambientes y precio. Escribir un programa que lea del teclado: barrio,
cantidad de ambientes mínima y precio máximo que está dispuesto a pagar el
cliente a fin de listar todos los departamentos que se ajusten a las condiciones
leídas.
 */
#include <stdio.h>
#include "Inmobiliaria.h"

int main() {
    int n;
    printf("Ingrese la cantidad de posibles compradores\n");
    scanf("%d", &n);
    Lista * lista = newLista();
    llenarLista(newDepartamentos("Belgrano", 4, 250000), lista);
    llenarLista(newDepartamentos("VL", 3, 120000), lista);
    llenarLista(newDepartamentos("Palermo", 1, 90000), lista);
    llenarLista(newDepartamentos("ParqueChas", 4, 100000), lista);
    llenarLista(newDepartamentos("Recoleta", 6, 500000), lista);
    llenarLista(newDepartamentos("Saavedra", 2, 150000), lista);

    llenarUsuarios(Usuarios, n);
    comparar(Usuarios, Departamentos, lista, n);
    return 0;
}
