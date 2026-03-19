#ifndef __OBJETOS_H__
#define __OBJETOS_H__
typedef struct{
    int Id_obj;
    char Nomb_obj[31];
    char Describ[51];
    int Localiz; //Hay que decidir aun como implementarlo
}objeto;
//precondicion: el fichero objetos.txt debe estar creado y con los datos necesarios para cargar los objetos
//postcondicion: se cargan los objetos del juego en un vector de tipo objeto
void cargar_objetos(objeto objetos[]);
#endif __OBJETOS_H__