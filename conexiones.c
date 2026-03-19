#include<stdio.h>
#include<stdlib.h>
#define tamaño 10
typedef struct{
    int Id_conexion; 
    int Id_origen; 
    int Id_destino; 
    char Estado[tamaño]; 
    int Cond; 
}conexion;
void cargar_conexiones(conexion conexiones[]){
    int num_conexiones=7;
    FILE *f;
    f=fopen("conexiones.txt","r");
    if(f==NULL){
        printf("Error al abrir el archivo");
        exit(1);
    }else{
    conexion *v_conexiones =  malloc (num_conexiones*sizeof(conexion));
    if (v_conexiones==NULL){
        printf("Error al asignar memoria");
        exit(1);
    }else{
    for(int i=0; i<num_conexiones; i++){
        v_conexiones[i].Id_conexion=strtok(fgets(v_conexiones[i].Id_conexion,tamaño,f),"-");
        v_conexiones[i].Id_origen=strtok(fgets(v_conexiones[i].Id_origen,tamaño,f),"-");
        v_conexiones[i].Id_destino=strtok(fgets(v_conexiones[i].Id_destino,tamaño,f),"-");
        v_conexiones[i].Estado=strtok(fgets(v_conexiones[i].Estado,tamaño,f),"-");
        v_conexiones[i].Cond=strtok(fgets(v_conexiones[i].Cond,tamaño,f),"\n");
    }
    fclose(f);
}}
}