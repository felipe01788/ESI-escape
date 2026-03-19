#ifndef // conexiones_h
typedef struct{
int Id_conexion; //variable de tipo entero para indicar el id de la conexion que se vaya a usar
int Id_origen; //variable de tipo entero para indicar de que sala proviene el jugador
int Id_destino; //variable de tipo entero para indicar hacia que sala se dirige el jugador
char[10] Estado; //vector de tipo caracter que indicar el estado de la conexion: Abierta o Cerrada
int Cond; //variable para saber si la condicion necesaria para que se abra la condicion se cumple
}Conexiones
void cargar_conexiones(Conexiones conexiones[]){}
#endif // conexiones_h
