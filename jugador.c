
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "objetos.h"
#include "salas.h"
typedef struct{
    char Id_jugador;//variable de tipo entero para indicar el id del jugador
    char Nomb_jugador[21];//vector de tipo carcter para almacenar el nombre completo del jugador
    char Jugador[11];//vector de tipo caracter para almacenar el nombre de jugador usado para entrar al sistema
    char Contrasea[9];//vector de tipo carcter para alamacenar la contrasea del jugador
    int num_obj;// cantidad actual de objetos
    int *Id_obj;// vector dinámico de ids
    int capacidad_inventario; // capacidad actual del inventario

}jugador;
void crear_inventario(jugador *jug){
    jug->num_obj=0;
    jug->capacidad_inventario=5; // capacidad inicial del inventario
    jug->Id_obj=(int *)malloc(jug->capacidad_inventario*sizeof(int)); // asignar memoria para el vector de ids
    if (jug->Id_obj==NULL){
        printf("Error al asignar memoria");
        exit(1);
    }
}
void anadir_objeto(jugador *jug, char *sala_actual, sala salas[], objeto objetos[] ){
    char nombre[31];
    int i;
    printf("Ingrese el nombre del objeto que desea agregar al inventario: ");
    scanf("%s",nombre);
    if (jug->num_obj==jug->capacidad_inventario){
        printf("El inventario está lleno. No se pueden agregar más objetos.");
    } else{
        for ( i=0; i<7; i++){
            if (strcmp(salas[i].Nomb_sala,sala_actual)==0){
                if (strcmp(nombre,objetos[i].Nomb_obj)==0){
                    strcpy(objetos[i].Localiz,"Inventario");
                    jug->Id_obj[jug->num_obj]=objetos[i].Id_obj;
                    jug->num_obj++;
                }
            }
        }
    }
}
void eliminar_objeto(jugador *jug, char *sala_actual, sala salas[], objeto objetos[]){
    char nombre[31];
    int i,j;
    printf("Ingrese el nombre del objeto que desea eliminar del inventario: ");
    scanf("%s",nombre);
    for (i=0; i<jug->num_obj; i++){
        if (strcmp(nombre,objetos[i].Nomb_obj)==0){
            strcpy(objetos[i].Localiz,sala_actual);
            for (j=i; j<jug->num_obj-1; j++){
                jug->Id_obj[j]=jug->Id_obj[j+1];
            }
            jug->num_obj--;
        }
    }
}
void reorganizar_inventario(jugador *jug){
    int i;
    for (i=0; i<jug->num_obj; i++){
        if (jug->Id_obj[i]==0){
            int j;
            for (j=i; j<jug->num_obj-1; j++){
                jug->Id_obj[j]=jug->Id_obj[j+1];
            }
            jug->num_obj--;
        }
    }
}
