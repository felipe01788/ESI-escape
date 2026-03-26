#ifndef __SALAS_H__
#define __SALAS_H__
typedef struct{
    char Id_sala;
    char Nomb_sala[31];
    char Tipo[8]; //Indica si la sala es INICIAL, NORMAL o SALIDA
    char Descrip[151];
}sala;
//precondicion: el fichero salas.txt debe estar creado y con los datos necesarios para cargar las salas
//postcondicion: se cargan las salas del juego en un vector de tipo sala
void cargar_salas(sala salas[]);
//precondicion: el vector de tipo sala debe estar cargado con los datos de las salas del juego
//postcondicion: se muestra la descripcion de la sala a la que se accede a traves de su id
void descripcion_sala(sala salas[], char sala_actual);
#endif __SALAS_H__

