#ifndef __FICHEROS__
#define __FICHEROS__
/*Precondición: El valor de fichero tiene que ser el nombre del fichero a acceder, campo tiene que ser un numero entero positivo y linea tiene que ser un numero entero positivo*/
/*Postcondición: El vector cadena va a tener el valor del campo separado por guiones indicado por la variable campo(comenzando a contar desde 0) de la linea indicado por la variable linea (comenzando a contar desde 0)del fichero nombrado en la variable fichero*/
void leer_fichero_char(char fichero[],char cadena[], int campo,int linea );
/*Precondición: El valor de fichero tiene que ser el nombre del fichero a acceder, cadena tiene que estar inicializada, campo tiene que ser un numero entero y linea tiene que ser un numero entero*/
/*Postcondición: El vector cadena va a almacenarse en el campo separado por guiones indicado por la variable campo(comenzando a contar desde 0) de la linea indicado porr la variable linea (comenzando a contar desde 0) del fichero nombrado en la variable fichero*/
void escribir_fichero_char(char fichero[],char cadena[], int campo, int linea);
/*Precondición: El valor de fichero tiene que ser el nombre del fichero a acceder, numero tiene que estar inicializada, campo tiene que ser un numero entero y linea tiene que ser un numero entero*/
/*Postcondición: El entero numero va a almacenarse en el campo separado por guiones indicado por la variable campo(comenzando a contar desde 0) de la linea indicado porr la variable linea (comenzando a contar desde 0) del fichero nombrado en la variable fichero*/
void escribir_fichero_int(char fichero[],int numero, int campo, int linea);
/*Precondición: El valor de fichero tiene que ser el nombre del fichero a acceder, campo tiene que ser un numero entero y linea tiene que ser un numero entero*/
/*Postcondición: El entero numero va a tener el valor del campo separado por guiones indicado por la variable campo(comenzando a contar desde 0) de la linea indicado por la variable linea (comenzando a contar desde 0)del fichero nombrado en la variable fichero*/
void leer_fichero_int(char fichero[],int *numero, int campo, int linea);
#endif // __FICHEROS__
