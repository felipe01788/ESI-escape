#ifndef __OBJETOS_H__
#define __OBJETOS_H__
typedef struct{
    char Id_obj[5];
    char Nomb_obj[31];
    char Describ[51];
    char Localiz[11]; //Hay que decidir aun como implementarlo
}objeto;
typedef struct{
    char Id_obj[5];
    char Nomb_obj[31];
    char Describ[51];
}inventario;

//precondicion: el fichero objetos.txt debe estar creado y con los datos necesarios para cargar los objetos
//postcondicion: se cargan los objetos del juego en un vector de tipo objeto
void cargar_objetos(objeto objetos[]);
//precondicion: el vector de tipo objeto debe estar cargado con los datos de los objetos del juego
//postcondicion: se muestra el inventario del jugador con el nombre de cada objeto y su descripcion
void mostrar_inventario(objeto objetos[]);
#endif __OBJETOS_H__