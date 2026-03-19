#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int Id_conexion; 
    int Id_origen; 
    int Id_destino; 
    char Estado[10]; 
    int Cond; 
}Conexiones
void cargar_conexiones(Conexiones conexiones[]){
    FILE *f;
    f=fopen("conexiones.txt","r");
    if(f==NULL){
        printf("Error al abrir el archivo");
        exit(1);
    }else{
    Conexiones v_conexiones= (*Conexiones) malloc (7*sizeof(Conexiones));
    if (v_conexiones==NULL){
        printf("Error al asignar memoria");
        exit(1);
    }else{
    for(int i=0; i<7; i++){
        v_conexiones[i].Id_conexion=strtok(fgets(v_conexiones[i].Id_conexion,10,f),"-");
        v_conexiones[i].Id_origen=strtok(fgets(v_conexiones[i].Id_origen,10,f),"-");
        v_conexiones[i].Id_destino=strtok(fgets(v_conexiones[i].Id_destino,10,f),"-");
        v_conexiones[i].Estado=strtok(fgets(v_conexiones[i].Estado,10,f),"-");
        v_conexiones[i].Cond=strtok(fgets(v_conexiones[i].Cond,10,f),"\n");
    }
    fclose(f);
}}
}