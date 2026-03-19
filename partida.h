#ifndef partida_h
typedef struct{
    int Id_obj;//variable de tipo entero para indicar el id del objeto
    int Localiz;//variable de tipo entero para indicar donde esta el objeto
}Objeto;

typedef struct{
    int Id_conex;//variable de tipo entero para indicar el id de la conexion
    int Estad;//variable de tipo entero para indicar el estado de la conexión
}Conexiones;

typedef struct{
int Id_jugador;//variable de tipo entero para indicar el id del jugador
int Id_sala;//variable de tipo entero para indicar el id de la sala
Objeto[] Lista_objeto;//vector para indicar la localización de cada objeto del juego
Conexiones[] Lista_conexiones;//vector para indicar el estado de todaas las conexiones
}
#endif
