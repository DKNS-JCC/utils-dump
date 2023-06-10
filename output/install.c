#include <stdlib.h>
#include <stdio.h>
int main (){
    puts ("====================================");
    printf ("Instalador de Spicetify\n");
    puts ("====================================");
    printf ("Seleccione el proceso a realizar\n");

    printf ("1. Instalar Spicetify\n");
    printf ("2. Actualizar Spicetify y aplicar\n");
    printf ("3. Salir\n");
    int opcion;
    scanf ("%d", &opcion);
while (opcion > 1 || opcion < 3){
    switch (opcion){
        case 1:
            system ("iwr -useb https://raw.githubusercontent.com/spicetify/spicetify-cli/master/install.ps1" );
            system ("iwr -useb https://raw.githubusercontent.com/spicetify/spicetify-marketplace/main/resources/install.ps1 | iex");
            return 0;
        
        case 2:
            system("spicetify upgrade");
            system ("spicetify restore backup apply");
            return 0;
        
        case 3:
            exit(0);
    }
}
    return 0;
}