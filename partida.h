#ifndef __PARTIDA_H__
#define __PARTIDA_H__
typedef struct{
    int Id_obj;//variable de tipo entero para indicar el id del objeto
    int Localiz;//variable de tipo entero para indicar donde esta el objeto
    int Id_conex;//variable de tipo entero para indicar el id de la conexion
    int Estad;//variable de tipo entero para indicar el estado de la conexi�n
    int Id_jugador;//variable de tipo entero para indicar el id del jugador
    int Id_sala;//variable de tipo entero para indicar el id de la sala
    char Lista_objeto[];//vector para indicar la localizacin de cada objeto del juego
    char Lista_conexiones[];//vector para indicar el estado de todaas las conexiones
}partida;
//precondicion: el fichero partida.txt debe estar creado y con los datos necesarios para cargar la partida
//postcondicion: se cargan los datos de la partida en una variable de tipo partida 
void cargar_partida(partida partida);
#endif __PARTIDA_H__
