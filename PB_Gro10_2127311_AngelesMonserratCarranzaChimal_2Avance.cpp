#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <stdio.h>

using namespace std;

struct empresa
{
    //Declaración de variables
    int numart, fecha;
    float precio, total;
    string nombre, clas, carac, des, gen;
};


int main()
{
    empresa videojuego[3];
    int opcion,opcion2,opcion3,busqueda;
    float imp = 0.16;

    do
    {
        printf("\t ***GAMING STORE*** \n");
        printf("1.-Agregar Articulo \n 2.-Modificar Articulo\n 3.-Eliminar Articulo\n 4.-Lista de Articulos\n 5.-Limpiar Pantalla\n 6.-Salir\n");
        scanf_s("%d", &opcion);

        //Incio del switch (Menú de Opciones)
        switch (opcion)
        {
        case 1: //Agregar Artículo
            
            system("cls");
            
            for (int i = 0; i < 3; i++)
            {
                do
                {
                    printf("Ingrese el número del artículo \n"); //Número del artículo
                    scanf_s("%d", &videojuego[i].numart);
                    if (videojuego[i].numart == videojuego[i - 1].numart)
                    {
                        printf("Número repetido \n");
                    }
                } while (videojuego[i].numart == videojuego[i - 1].numart);
                
                printf("Ingrese el nombre del artículo \n"); //Nombre
                cin.ignore();
                getline(cin, videojuego[i].nombre);

                printf("Ingrese año de lanzamiento \n"); //Año
                scanf_s("%d", &videojuego[i].fecha);

                printf("Ingrese la clasificación del artículo \n"); //Clasificación
                cin.ignore();
                getline(cin, videojuego[i].clas);

                printf("Ingrese las características del artículo \n"); //Características
                cin.ignore();
                getline(cin, videojuego[i].carac);

                printf("Ingrese la descripción del artículo \n"); //Descripción
                cin.ignore();
                getline(cin, videojuego[i].des);

                printf("Ingrese el género del artículo \n"); //Género
                cin.ignore();
                getline(cin, videojuego[i].gen);

                printf("Ingrese el precio unitario del Artículo \n"); //Precio Unitario
                scanf_s("%f", &videojuego[i].precio);
                videojuego[i].total = videojuego[i].precio + (videojuego[i].precio * imp);

                printf("Precio Total:%f", videojuego[i].total); //Precio Total

                system("pause");
                system("cls");
            }
            break;            

        case 2: //Modificar Artículo

            system("cls");

            printf("Ingrese el número de artículo \n");
            scanf_s("%d", &busqueda);

            printf("Ingrese la opción deseada a modificar:\n 1.-Nombre \n 2.-Año \n 3.-Clasificacíón \n 4.-Descripción \n 5.-Género \n 6.-Precio Unitario \n 7.-Salir \n");
            scanf_s("%d", &opcion2);
            system("cls");

            switch (opcion2)
            {
            case 1: //Nombre
                for (int i = 0; i < 3; i++)
                {
                    if (busqueda == videojuego[i].numart)
                    {
                        printf("Modifique el nombre \n");
                        cin.ignore();
                        getline(cin, videojuego[i].nombre);
                    }
                }
                system("pause");
                break;

            case 2: //Año
                for (int i = 0; i < 3; i++)
                {
                    if (busqueda == videojuego[i].numart)
                    {
                        printf("Modifique el año \n");
                        scanf_s("%d", &videojuego[i].fecha);
                    }
                }
                system("pause");
                break;
            
            case 3: //Clasificación
                for (int i = 0; i < 3; i++)
                {
                    if (busqueda == videojuego[i].numart)
                    {
                        printf("Modifique la clasificación \n");
                        cin.ignore();
                        getline(cin, videojuego[i].clas);
                    }
                }
                system("pause");
                break;

            case 4: //Descripción
                for (int i = 0; i < 3; i++)
                {
                    if (busqueda == videojuego[i].numart)
                    {
                        printf("Modifique la descripción \n");
                        cin.ignore();
                        getline(cin, videojuego[i].des);
                    }
                }
                system("pause");
                break;

            case 5: //Género
                for (int i = 0; i < 3; i++)
                {
                    if (busqueda == videojuego[i].numart)
                    {
                        printf("Modifique el género \n");
                        cin.ignore();
                        getline(cin, videojuego[i].gen);
                    }
                }
                system("pause");
                break;

            case 6: //Precio Unitario
                for (int i = 0; i < 3; i++)
                {
                    if (busqueda == videojuego[i].numart)
                    {
                        printf("Modifique el precio unitario \n");
                        scanf_s("%f", &videojuego[i].precio);
                        videojuego[i].total = videojuego[i].precio + (videojuego[i].precio * imp);

                        printf("Precio Total:%f", videojuego[i].total); //Precio Total
                    }
                }
                system("pause");
                break;

            case 7:
                printf("Saliendo...\n");
                break;
            
            default:
                printf("Intente de nuevo...\n");
                break;
            }
            system("pause");
            system("cls");
            break;

        case 3: //Eliminar Artículo
            do
            {
                system("cls");

                printf("Ingrese el número del artículo \n");
                scanf_s("%d", &busqueda);

                for (int i = 0; i < 3; i++)
                {
                    if (busqueda == videojuego[i].numart)
                    {
                        videojuego[i].numart = 0;
                        printf("Eliminado... \n");
                        system("pause");
                    }
                }
                printf("Desea eliminar otro registro \n 1.- Sí \n 2.- No \n");
                scanf_s("%d", &opcion3);
            } while (opcion3 == 1);
            
            system("cls");
            break;

        case 4: //Lista de Artículos

            system("cls");

            for (int i = 0; i < 3; i++)
            {
                if (videojuego[i].numart != 0)
                {
                    printf("Número de artículo: %d \n", videojuego[i].numart);
                    printf("Nombre: %s \n", videojuego[i].nombre.c_str());
                    printf("Nombre: %d \n", videojuego[i].fecha);
                    printf("Clasificación: %s \n", videojuego[i].clas.c_str());
                    printf("Características: %s \n", videojuego[i].carac.c_str());
                    printf("Descripción: %s \n", videojuego[i].des.c_str());
                    printf("Género: %s \n", videojuego[i].gen.c_str());
                    printf("Precio Unitario: %f \n", videojuego[i].precio);
                    printf("Total: %f \n", videojuego[i].total);
                }
            }
            system("cls");
            break;

        case 5: //Limpiar Pantalla
            system("cls");
            return main();
            break;

        case 6: //Salir
            cout << "Gracias por utilizar el programa de Gaming Store :) \n";
            break;

        default:
            cout << "Ingrese una opcion correcta \n";
        }
    }
    while (opcion != 5);
    system("pause");
}
