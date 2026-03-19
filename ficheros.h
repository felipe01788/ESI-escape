#ifndef __FICHEROS__
#define __FICHEROS__
/*Precondición: El valor de fichero tiene que ser el nombre del fichero a acceder, campo tiene que ser un numero entero y linea tiene que ser un numero entero*/
/*Postcondición: El vector cadena va a tener el valor del campo separado por guiones indicado por la variable campo(comenzando a contar desde 0) de la linea indicado por la variable linea (comenzando a contar desde 0)del fichero nombrado en la variable fichero*/
void leer_fichero_char(char fichero[],char cadena[], int campo,int linea );
void escribir_fichero_char(char fichero[],char cadena[], int campo, int linea);
void escribir_fichero_int(char fichero[],int numero, int campo, int linea);
void leer_fichero_int(char fichero[],int numero, int campo, int linea);
#endif // __FICHEROS__
