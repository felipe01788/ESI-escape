#define <stdio.h>
#define <string.h>
#define "ficheros.h"
void leer_fichero_char(char fichero[],char cadena[],int campo,int linea){
FILE* f;
int cuenta_guiones=0;
int cuenta_salto_de_linea=0;
i=0;
if((f=fopen("fichero","r"))==NULL){
printf("Error");
}else{
while(((c=fgetc(fichero))!=EOF)&&(cuenta_guiones<campo||cuenta_salto_de_linea<linea)){
if(c=='-'){
cuenta_guiones++;
}
if(c=='\n'){
cuenta_salto_de_linea++;
cuenta_guiones=0;
}
}
if(c!=EOF){
while((c=fgetc(fichero))=!('-'&&'\n')){
*(cadena+i)=c;
i++;
}
}
fclose(f);
}
}
