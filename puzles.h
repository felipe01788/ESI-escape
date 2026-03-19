#ifndef puzles_h
typedef struct{
char[4] Id_puzle;
char[16] Nomb_puzle;
int Id_sala;//>Quiza interesa hacer un puntero al id de sala mas adelante en la implementacion
char[8] Tipo; //Codigo o Palabra
char[151] Descrip;
char[51] Sol; //Solucion al puzle
}
#endif // puzles_h


