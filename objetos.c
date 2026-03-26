#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
    char Id_obj[5];
    char Nomb_obj[31];
    char Describ[51];
    char Localiz[11]; //Hay que decidir aun como implementarlo
}objeto;
typedef struct{
    char Id_obj[5];
    char Nomb_obj[31];
    char Describ[51];
}inventario;
//precondicion: el fichero objetos.txt debe estar creado y con los datos necesarios para cargar los objetos
//postcondicion: se cargan los objetos del juego en un vector de tipo objeto
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
    for(int i=0; i<7; i++){
       if(strcmp(objetos[i].Localiz,"Inventario")==0){
            printf("Objeto: %s\nDescripcion: %s\n",objetos[i].Nomb_obj,objetos[i].Describ);
        }
    }
}