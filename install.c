#include <stdlib.h>
#include <stdio.h>

void clearScreen() {
    system("cls");
}

int main() {
    int opcion;

    do {
        clearScreen();
        puts("====================================");
        printf("\tInstalador de Spicetify\n");
        puts("====================================");
        printf("Seleccione el proceso a realizar\n");
        printf("1. Instalar Spicetify\n");
        printf("2. Actualizar Spicetify y aplicar\n");
        printf("3. Salir\n");

        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                puts("Para instalar SPICETIFY abra una Powershell desde la barra de windows y ejecute los siguientes comandos:");
                puts("----->    iwr -useb https://raw.githubusercontent.com/spicetify/spicetify-cli/master/install.ps1 | iex");
                puts("----->    iwr -useb https://raw.githubusercontent.com/spicetify/spicetify-marketplace/main/resources/install.ps1 | iex");
                system("PAUSE");
                break;
            case 2:
                printf("Buscando actualizaciones...\n");
                system("spicetify upgrade");
                system("spicetify backup apply");
                system("PAUSE");
                break;
            case 3:
                return 0;
            default:
                printf("Opción no válida. Presione enter para continuar.\n");
                getchar(); // Consume newline character left in input buffer
                getchar(); // Wait for Enter key
        }
    } while (opcion != 3);

    return 0;
}
