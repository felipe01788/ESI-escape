#ifndef __OBJETOS_H__
#define __OBJETOS_H__
typedef struct{
    char Id_obj[5];
    char Nomb_obj[31];
    char Describ[51];
    char Localiz[11]; //Hay que decidir aun como implementarlo
}objeto;

//precondicion: el fichero objetos.txt debe estar creado y con los datos necesarios para cargar los objetos
//postcondicion: se cargan los objetos del juego en un vector de tipo objeto
void cargar_objetos(objeto objetos[]);
//precondicion: el vector de tipo objeto debe estar cargado con los datos de los objetos del juego
//postcondicion: se muestra el inventario del jugador con el nombre de cada objeto y su descripcion
void mostrar_inventario(objeto objetos[]);
//precondicion: el vector de tipo objeto debe de estar cargado con los datos de los objetos del juego 
//postcondicion: el objeto seleccionado se agrega al inventario del jugador y se elimina de su localizacion anterior
char* agregar_inventario(objeto objetos[], inventario inventario[]);
//precondicion: el vector de tipo objeto debe de estar cargado con los datos de los objetos del juego 
//postcondicion: el objeto seleccionado se elimina del inventario del jugador y se agrega a la localizacion de la sala actual
char* soltar_objeto(objeto objetos[], inventario inventario[], char sala_actual);
//precondicion: el vector de tipo objeto debe de estar cargado con los datos de los objetos del juego 
//postcondicion: el objeto seleccionado se usa para cumplir una condicion necesaria para abrir una conexion
char* usar_objeto(objeto objetos[]);
#endif __OBJETOS_H__