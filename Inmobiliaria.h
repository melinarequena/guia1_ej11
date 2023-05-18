//
// Created by Administrador on 18/5/2023.
//

#ifndef GUIA1_EJ11_INMOBILIARIA_H
#define GUIA1_EJ11_INMOBILIARIA_H

typedef struct departamentos{
    char barrio[20];
    int ambientes;
    float precio;
    struct departamentos * sig;
}Departamentos;

typedef struct lista{
    Departamentos * cabecera;
}Lista;

typedef struct usuarios{
    char barrio[20];
    int ambientesMin;
    float precioMax;
    struct usuario * sig;
}Usuarios;

Departamentos * newDepartamentos (char *, int ambientes, float precio);
Lista * newLista();
//Usuario * newUsuaeio(char *, int ambientesMin, float precioMax);
void llenarLista(Departamentos * departamentos, Lista * lista);
void llenarUsuarios(Usuarios * usuarios, int n);
void comparar(Usuarios * usuarios, Departamentos * departamentos, Lista * lista, int n);

#endif //GUIA1_EJ11_INMOBILIARIA_H
