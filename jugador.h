#ifndef __CONEXIONES_H__
#define __CONEXIONES_H__
typedef struct{
    char Id_jugador;//variable de tipo entero para indicar el id del jugador
    char Nomb_jugador[21];//vector de tipo carcter para almacenar el nombre completo del jugador
    char Jugador[11];//vector de tipo caracter para almacenar el nombre de jugador usado para entrar al sistema
    char Contrasena[9];//vector de tipo carcter para alamacenar la contrasena del jugador
    int *Id_obj;// vector dinámico de ids
    int num_obj;// cantidad actual de objetos
} jugador;
//precondicion: el jugador debe haber sido creado previamente
//postcondicion: se crea el inventario del jugador con una capacidad inicial de 5 objetos
void crear_inventario(jugador *jug);
//precondicion: el jugador debe haber sido creado previamente y el vector de tipo sala y objeto debe estar cargado con los datos de las salas y objetos del juego
//postcondicion: el objeto seleccionado se agrega al inventario del jugador y se elimina de
void anadir_objeto(jugador *jug, char nombre_objeto, char sala_actual);
//precondicion: el jugador debe haber sido creado previamente y el vector de tipo sala y objeto debe estar cargado con los datos de las salas y objetos del juego
//postcondicion: el objeto seleccionado se elimina del inventario del jugador y se agrega a
void eliminar_objeto(jugador *jug, char nombre_objeto, char sala_actual);
//precondicion: el jugador debe haber sido creado previamente 
//postcondicion: se reorganiza el inventario del jugador para eliminar los espacios
void reorganizar_inventario(jugador *jug);
#endif __CONEXIONES_H__