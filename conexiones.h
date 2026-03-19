#ifndef __CONEXIONES_H__
#define __CONEXIONES_H__
#define tamaño 10
typedef struct{
    int Id_conexion; //variable de tipo entero para indicar el id de la conexion que se vaya a usar
    int Id_origen; //variable de tipo entero para indicar de que sala proviene el jugador
    int Id_destino; //variable de tipo entero para indicar hacia que sala se dirige el jugador
    char Estado[tamaño]; //vector de tipo caracter que indicar el estado de la conexion: Abierta o Cerrada
    int Cond; //variable para saber si la condicion necesaria para que se abra la condicion se cumple
}conexion;
//precondicion: el fichero conexiones.txt debe estar creado y con los datos necesarios para cargar las conexiones
//postcondicion: se cargan las conexiones del juego en un vector de tipo conexion
void cargar_conexiones(conexion conexiones[]);
#endif __CONEXIONES_H__
