#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
    char Id_sala[4];
    char Nomb_sala[31];
    char Tipo[8]; //Indica si la sala es INICIAL, NORMAL o SALIDA
    char Descrip[151];
}sala;
sala *cargar_salas(){
    FILE *f;
    int num_salas=9;
    f=fopen("salas.txt","r");
    if(f==NULL){
        printf("Error al abrir el archivo");
        exit(1);
    }else{
    sala *v_salas= (sala *) malloc (num_salas*sizeof(sala));
    if (v_salas==NULL){
        printf("Error al asignar memoria");
        exit(1);
    }else{
        for (int i = 0; i < num_salas; i++) {
                char buffer[256];

                // Leemos y copiamos el ID
                fgets(buffer, sizeof(buffer), f);
                strcpy(v_salas[i].Id_sala, strtok(buffer, "-"));

                // Leemos y copiamos el Nombre
                fgets(buffer, sizeof(buffer), f);
                strcpy(v_salas[i].Nomb_sala, strtok(buffer, "-"));

                // Leemos y copiamos el Tipo
                fgets(buffer, sizeof(buffer), f);
                strcpy(v_salas[i].Tipo, strtok(buffer, "-"));

                // Leemos y copiamos la Descripción
                fgets(buffer, sizeof(buffer), f);
                strcpy(v_salas[i].Descrip, strtok(buffer, "\n"));
        }
        fclose(f);
        return v_salas;
}}
}
void describir_sala(sala *salas, char sala_actual){
    int num_salas=9;
    for(int i=0; i<num_salas; i++){
        if(salas[i].Id_sala==sala_actual){
            printf("%s",salas[i].Descrip);
        }
    }
}
char* devolver_nombre_sala_actual(char sala_actual, sala *salas){
    int num_salas=9;
    for(int i=0; i<num_salas; i++){
        if(salas[i].Id_sala==sala_actual){
            return(salas[i].Nomb_sala);
        }
    }
}
