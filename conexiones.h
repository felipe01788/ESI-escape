#ifndef conexiones_h
typedef struct{
int Id_conexion; //variable de tipo entero para indicar el id de la conexión que se vaya a usar
int Id_origen; //variable de tipo entero para indicar de qué sala proviene el jugador
int Id_destino; //variable de tipo entero para indicar hacia qué sala se dirige el jugador
char[10] Estado; //vector de tipo carácter que indicar el estado de la conexión: Abierta o Cerrada
int Cond; //variable para saber si la condición necesaria para que se abra la condición se cumple
}Conexiones
#endif
