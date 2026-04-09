#include<stdio.h>
#include<stdlib.h>
import "salas.h"
typedef struct{
    char Id_obj[5];
    char Nomb_obj[31];
    char Describ[51];
    char Localiz[11]; //Hay que decidir aun como implementarlo
}objeto;
void cargar_objetos(objeto objetos[]){
    int num_objetos=7;
    FILE *f;
    f=fopen("objetos.txt","r");
    if(f==NULL){
        printf("Error al abrir el archivo");
        exit(1);
    }else{
    objetos v_objetos= (*objetos) malloc (num_objetos*sizeof(objeto));
    if (v_objetos==NULL){
        printf("Error al asignar memoria");
        exit(1);
    }else{
    for(int i=0; i<num_objetos; i++){
        v_objetos[i].Id_obj=strtok(fgets(v_objetos[i].Id_obj,31,f),"-");
        v_objetos[i].Nomb_obj=strtok(fgets(v_objetos[i].Nomb_obj,31,f),"-");
        v_objetos[i].Describ=strtok(fgets(v_objetos[i].Describ,51,f),"-");
        v_objetos[i].Localiz=strtok(fgets(v_objetos[i].Localiz,31,f),"\n");
    }
    fclose(f);
}}
}
void mostrar_inventario(objeto objetos[]){ 
    int i;
    for(int i=0; i<7; i++){
        if (strcmp(objetos[i].Localiz,"Inventario")==0){
            printf("Objeto: %s\nDescripcion: %s\n",objetos[i].Nomb_obj,objetos[i].Describ);
        }
    }
}
void agregar_inventario(objeto objetos[], char sala_actual){
    int i,j,k;
    for (i=0; i<7; i++){
        if (strcmp(sala_actual,v_salas[i].Id_sala)==0){
            printf("Ingrese el nombre del objeto que desea agregar al inventario: ");
            char nombre[31];
            scanf("%s",nombre);
            if (strcmp(nombre,v_objetos[i].Nomb_obj)!=0){
                printf("El objeto no existe");
                for(j=0; j<7; j++){
                    if(strcmp(v_objetos[j].Nomb_obj,nombre)==0){
                        strcpy(v_objetos[j].Localiz,"Inventario");
                            }
                        }
                    }
                }
}}
void soltar_objeto(objeto objetos[], char sala_actual){
    int i;  
    printf("Ingrese el nombre del objeto que desea soltar: ");
    char nombre[31];
    scanf("%s",nombre);
    for( i=0; i<7; i++){
        if(strcmp(v_objetos[i].Nomb_obj,nombre)==0){
                        v_objetos[i].Localiz=sala_actual}
        else{
            printf("El objeto no se encuentra en el inventario");}
    }
}
char* usar_objeto(objeto objetos[]){
 int i,j;
 char nombre[31];
    for(i=0; i<7; i++){
        if (strcmp(objetos[i].Localiz,"Inventario")==0){
            printf("Objeto: %s\n",objetos[i].Nomb_obj);
            printf("Ingrese el nombre del objeto que desea usar: ");
            scanf("%s",nombre);
            for(j=0; j<7; j++){
                if (strcmp(nombre,objetos[j].Nomb_obj)==0){
                    return (objetos[i].Id_obj);
                }
                else{
                    printf("El objeto no se encuentra en el inventario");
                }
            }
        }
    }
}


