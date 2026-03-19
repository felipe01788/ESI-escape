#ifndef __PUZLES_H__
#define __PUZLES_H__
typedef struct{
    char Id_puzle[4];
    char Nomb_puzle[16];
    int Id_sala;//>Quiza interesa hacer un puntero al id de sala mas adelante en la implementacion
    char Tipo[8]; //Codigo o Palabra
    char Descrip[151];
    char Sol[51]; //Solucion al puzle
}puzle;
//precondicion: el fichero puzles.txt debe estar creado y con los datos necesarios para cargar los puzles
//postcondicion: se cargan los puzles del juego en un vector de tipo puzle
void cargar_puzles(puzle puzles[]);
#endif __PUZLES_H__


