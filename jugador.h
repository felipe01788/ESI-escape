#ifndef __CONEXIONES_H__
#define __CONEXIONES_H__
typedef struct{
    int Id_jugador;//variable de tipo entero para indicar el id del jugador
    char Nomb_jugador[21];//vector de tipo carcter para almacenar el nombre completo del jugador
    char Jugador[11];//vector de tipo caracter para almacenar el nombre de jugador usado para entrar al sistema
    char Contrasea[9];//vector de tipo carcter para alamacenar la contrasea del jugador
    int Id_obj[10];//Tamao del vector sujeto a cambios durante el desarrollo del projecto, esta vector sirve para acceder al los ids de los onjetos del inventario del jugador
}Jugador;
//precondicion: el fichero jugadores.txt debe estar creado y con los datos necesarios para cargar los jugadores
//postcondicion: se cargan los jugadores del juego en un vector de tipo Jugador
void cargar_jugadores(Jugador jugadores[]);
#endif __CONEXIONES_H__