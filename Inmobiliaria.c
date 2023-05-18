//
// Created by Administrador on 18/5/2023.
//

#include "Inmobiliaria.h"
#include <stdio.h>
#include <malloc.h>
#include <string.h>

Departamentos *newDepartamento(char * barrio, int ambientes, float precio) {
    Departamentos * auxDepa = NULL;
    auxDepa = malloc(sizeof(Departamentos));
    if(auxDepa == NULL){
        printf("Error al aisgnar memoria\n");
        exit (-1);
    }else
    strcpy(auxDepa->barrio, barrio);
    auxDepa->ambientes = ambientes;
    auxDepa->precio = precio;
    return auxDepa;
}

Lista *newLista() {
    Lista * auxLista = NULL;
    auxLista = malloc(sizeof(Lista));
    if(auxLista == NULL){
        printf("Error al asignar memoria\n");
        exit (-1);
    }else
    auxLista->cabecera = NULL;
    return auxLista;
}

/*Usuario *newUsuario(char * barrio, int ambientesMin, float precioMax){
    Usuario * auxUsuario = NULL;
    auxUsuario = malloc(sizeof(Usuario));
    if(auxUsuario == NULL){
        printf("Error!!!!11!!\n");
        exit (-1);
    }
    strcpy(auxUsuario->barrio, barrio);
    auxUsuario->ambientesMin = ambientesMin;
    auxUsuario->precioMax = precioMax;

    return auxUsuario;
}*/

void llenarLista(Departamentos *departamentos, Lista *lista) {
    if(lista->cabecera == NULL){
        printf("Lista vacia\nLLenando\n");
         lista->cabecera = departamentos;
    }else {
        Departamentos *auxDepartamento = lista->cabecera;
        while(auxDepartamento != NULL){
            auxDepartamento = auxDepartamento->sig;
        }
        auxDepartamento = departamentos;
    }
}

void llenarUsuarios(Usuarios * usuarios, int n){
    usuarios = malloc(sizeof(Usuarios));
    for(int i=0; i<n; i++){
        printf("Ingrese el barrio deseado por el usuario %d\n", i+1);
        scanf("%s", usuarios[i].barrio);
        printf("\nIngrese numero de ambientes minimos\n");
        scanf("%d", usuarios[i].ambientesMin);
        printf("\nIngrese precio maximo dispuesto a pagar\n");
        scanf("%.2f", usuarios[i].precioMax);
    }
}

void comparar(Usuarios * usuarios, Departamentos * departamentos, Lista * lista, int n){
    for(int i=0; i<n; i++){
        Departamentos * auxDepartamento = lista->cabecera;
        while(auxDepartamento != NULL){
            if(strcmp(auxDepartamento->barrio, usuarios[i].barrio)==0){
                if(auxDepartamento->ambientes >= usuarios[i].ambientesMin){
                    if(auxDepartamento->precio < usuarios[i].precioMax){
                        printf("Departamento encontrado:\nBarrio %s\nAmbientes: %d\nPrecio $%.2f\n", auxDepartamento->barrio, auxDepartamento->ambientes, auxDepartamento->precio);
                    }
                }
            }
            auxDepartamento = auxDepartamento->sig;
        }
    }
}



