#define <stdio.h>
#define <string.h>
#define "ficheros.h"
void leer_fichero_char(char fichero[],char cadena[],int campo,int linea){
FILE* f;
char c;
int cuenta_guiones=0;
int cuenta_salto_de_linea=0;
int i=0;
if((f=fopen("fichero","r"))==NULL){
printf("Error");
}else{
while((c!=EOF)&&(cuenta_guiones<campo||cuenta_salto_de_linea<linea)){
        fgetc(f);
if(c=='-'){
        if(negativo==0){
            cuenta_guiones++;
            negativo=1;
        }else{
        negativo=0;
        }
}
if(c=='\n'){
cuenta_salto_de_linea++;
cuenta_guiones=0;
}
}
if(c!=EOF){
while((c=fgetc(f))!=('-'&&'\n')){
*(cadena+i)=c;
i++;
}
}
fclose(f);
}
}
void escribir_fichero_char(char fichero[], char cadena[],int campo, int linea){
FILE* f;
char c;
int cuenta_guiones=0;
int cuenta_salto_de_linea=0;
int i=0;
char* cadena_datos;
int contador=1;
int negativo=0;
if((f=fopen("fichero","r+"))==NULL){
printf("Error");
}else{
while((c!=EOF)&&(cuenta_guiones<campo||cuenta_salto_de_linea<linea)){
        c=fgetc(f);
if(c=='-'){
        if(negativo==0){
            cuenta_guiones++;
            negativo=1;
        }else{
        negativo=0;
        }
}
if(c=='\n'){
cuenta_salto_de_linea++;
cuenta_guiones=0;
}
}
if(c!=EOF){

while(c!='-'){
fgetc(c,f);
}
if(cadena_datos=(char*)mallloc(sizeof(char)*contador)!=NULL){
    *(cadena_datos+contador-1)=c
while(fgetc(f)!=EOF){
        contador++;
    cadena_datos=(char*)realloc(cadena_datos,sizeof(char)*contador);
*(cadena_datos+contador-1)=c;
}
fclose(f);
cuenta_guiones=0;
    cuenta_salto_de_linea=0;
    if((f=fopen("fichero","r+"))==NULL){
printf("Error");
}else{
while((c!=EOF)&&(cuenta_guiones<campo||cuenta_salto_de_linea<linea)){
    c=fgetc(f);
if(c=='-'){
        if(negativo==0){
            cuenta_guiones++;
            negativo=1;
        }else{
        negativo=0;
        }
}
if(c=='\n'){
cuenta_salto_de_linea++;
cuenta_guiones=0;
}
}
while(*(cadena+i)!='/0'){
fputc(*(cadena+i),f);
i++;
}
i=0;
while(*(cadena_datos+i)!='/0'){
    fputc(*(cadena+i),f);
}
fclose(f);
}
free(cadena_datos);
}
}
}
}
void escribir_fichero_int(char fichero[],int numero, int linea, int campo){
FILE* f;
char c;
int cuenta_guiones=0;
int cuenta_salto_de_linea=0;
int i=0;
char* cadena_datos;
int contador=1;
char* cadena_numero;
while(numero/pow(10,i+1)!=0){
    i++;
}
if(numero<0){
    i++;
}
if(cadena_numero=(int*)malloc(sizeof(int)*i)==NULL){
    printf("Error");
}else{
    itoa(numero,cadena_numero,10);
if((f=fopen("fichero","r+"))==NULL){
printf("Error");
}else{
while((c!=EOF)&&(cuenta_guiones<campo||cuenta_salto_de_linea<linea)){
        c=fgetc(f);
if(c=='-'){
        if(negativo==0){
            cuenta_guiones++;
            negativo=1;
        }else{
        negativo=0;
        }
}
if(c=='\n'){
cuenta_salto_de_linea++;
cuenta_guiones=0;
}
}
if(c!=EOF){

while(c!='-'){
fgetc(c,f);
}
if(cadena_datos=(char*)mallloc(sizeof(char)*contador)!=NULL){
    *(cadena_datos+contador-1)=c
while(fgetc(f)!=EOF){
        contador++;
    cadena_datos=(char*)realloc(cadena_datos,sizeof(char)*contador);
*(cadena_datos+contador-1)=c;
}
fclose(f);
cuenta_guiones=0;
    cuenta_salto_de_linea=0;
    if((f=fopen("fichero","r+"))==NULL){
printf("Error");
}else{
while((c!=EOF)&&(cuenta_guiones<campo||cuenta_salto_de_linea<linea)){
    c=fgetc(f);
if(c=='-'){
        if(negativo==0){
            cuenta_guiones++;
            negativo=1;
        }else{
        negativo=0;
        }
}
if(c=='\n'){
cuenta_salto_de_linea++;
cuenta_guiones=0;
}
}
while(*(cadena_numero+i)!='/0'){
fputc(*(cadena+i),f);
i++;
}
i=0;
while(*(cadena_datos+i)!='/0'){
    fputc(*(cadena+i),f);
}
fclose(f);
}
free(cadena_datos);
}
}
}
}
}
}
void leer_fichero_int(char fichero[],int* numero, int campo, int linea){
    FILE* f;
char c;
int cuenta_guiones=0;
int cuenta_salto_de_linea=0;
int i=0;
int j=0;
char* cadena_numero;
if(cadena_numero=(int*)malloc(sizeof(int)*(i+1))==NULL){
    printf("Error");
}else{
if((f=fopen("fichero","r"))==NULL){
printf("Error");
}else{
while((c!=EOF)&&(cuenta_guiones<campo||cuenta_salto_de_linea<linea)){
        fgetc(f);
if(c=='-'){
        if(negativo==0){
            cuenta_guiones++;
            negativo=1;
        }else{
        negativo=0;
        }
}
if(c=='\n'){
cuenta_salto_de_linea++;
cuenta_guiones=0;
}
}
if(c!=EOF){
       if(c=fgetc(f)!='\n'){
        *(cadena_numero+i)=c;
       }
while((c=fgetc(f))!=('-'&&'\n')){
*(cadena_numero+i)=c;
i++;
}
}
fclose(f);
}
while(i!=0){
    *numero=*numero+(*(cadena_numero+j)*pow(10,i));
    j++;
}
free(cadena_numero);
}

}
