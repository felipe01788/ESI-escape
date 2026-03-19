#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int Id_sala;
    char Nomb_sala[31];
    char Tipo[8]; //Indica si la sala es INICIAL, NORMAL o SALIDA
    char Descrip[151];
}sala;
void cargar_salas(sala salas[]){
    int num_salas=7;
    FILE *f;
    f=fopen("salas.txt","r");
    if(f==NULL){
        printf("Error al abrir el archivo");
        exit(1);
    }else{
    sala v_salas= (*salas) malloc (num_salas*sizeof(sala));
    if (v_salas==NULL){
        printf("Error al asignar memoria");
        exit(1);
    }else{
    for(int i=0; i<num_salas; i++){
        v_salas[i].Id_sala=strtok(fgets(v_salas[i].Id_sala,31,f),"-");
        v_salas[i].Nomb_sala=strtok(fgets(v_salas[i].Nomb_sala,31,f),"-");
        v_salas[i].Tipo=strtok(fgets(v_salas[i].Tipo,8,f),"-");
        v_salas[i].Descrip=strtok(fgets(v_salas[i].Descrip,151,f),"\n");
    }
    fclose(f);
}}
}
void describir_sala(sala salas[], int Id_sala){
    for(int i=0; i<num_salas; i++){
        if(salas[i].Id_sala==Id_sala){
            printf("%s",salas[i].Descrip);
        }
    }
}
