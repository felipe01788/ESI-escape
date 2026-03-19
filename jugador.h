#ifndef conexiones_h
typedef struct{
int Id_jugador;//variable de tipo entero para indicar el id del jugador
char[21] Nomb_jugador;//vector de tipo carácter para almacenar el nombre completo del jugador
char[11] Jugador;//vector de tipo caracter para almacenar el nombre de jugador usado para entrar al sistema
char[9] Contraseña;//vector de tipo carácter para alamacenar la contraseña del jugador
int[10] Id_obj;//Tamaño del vector sujeto a cambios durante el desarrollo del projecto, esta vector sirve para acceder al los ids de los onjetos del inventario del jugador
}Jugador
#endif
