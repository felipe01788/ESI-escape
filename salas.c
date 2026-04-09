#include<stdio.h>
#include<stdlib.h>
#define num_salas 9
typedef struct{
    char Id_sala;
    char Nomb_sala[31];
    char Tipo[8]; //Indica si la sala es INICIAL, NORMAL o SALIDA
    char Descrip[151];
}sala; @
sala *cargar_salas(sala salas[]){
    FILE *f;
    f=fopen("salas.txt","r");
    if(f==NULL){
        printf("Error al abrir el archivo");
        exit(1);
    }else{
    sala *v_salas= (*salas) malloc (num_salas*sizeof(sala));
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
    return v_salas;
}}
}
void describir_sala(sala salas[], char sala_actual){
    for(int i=0; i<num_salas; i++){
        if(salas[i].Id_sala==sala_actual){
            printf("%s",salas[i].Descrip);
        }
    }
}
char* devolver_nombre_sala_actual(sala salas[], char sala_actual){
    for(int i=0; i<num_salas; i++){
        if(salas[i].Id_sala==sala_actual){
            return(salas[i].Nomb_sala);
        }
    }
}