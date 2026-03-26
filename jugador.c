#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
    char Id_jugador[3];//variable de tipo entero para indicar el id del jugador
    char Nomb_jugador[21];//vector de tipo carcter para almacenar el nombre completo del jugador
    char Jugador[11];//vector de tipo caracter para almacenar el nombre de jugador usado para entrar al sistema
    char Contrasena[9];//vector de tipo carcter para alamacenar la contrasea del jugador
    char Id_obj[10];//Tamao del vector sujeto a cambios durante el desarrollo del projecto, esta vector sirve para acceder al los ids de los onjetos del inventario del jugador
}jugador;
