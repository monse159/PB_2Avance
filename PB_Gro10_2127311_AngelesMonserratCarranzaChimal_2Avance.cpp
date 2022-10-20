#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <stdio.h>

using namespace std;

struct empresa
{
    //Declaración de variables
    int numart = 0, fecha = 0;
    float precio = 0, total = 0;
    string nombre, clas, carac, des, gen;
};


int main()
{
    empresa videojuego[3];
    int opcion, opcion2, opcion3, opcion4, opcion5, opcion6, opcion7, opcion8, opcion9, opcion10, busqueda;
    float imp = 0.16;

    do
    {
        printf("\t ***GAMING STORE*** \n");
        printf("1.-Agregar Articulo\n 2.-Modificar Articulo\n 3.-Eliminar Articulo\n 4.-Lista de Articulos\n 5.-Limpiar Pantalla\n 6.-Salir\n");
        scanf_s("%d", &opcion);

        //Incio del switch (Menú de Opciones)
        switch (opcion)
        {
        case 1: //Agregar Artículo

            system("cls");

            for (int i = 0; i < 3; i++)
            {
                system("cls");
                do
                {
                    printf("Ingrese el numero del articulo \n"); //Número del artículo
                    scanf_s("%d", &videojuego[i].numart);
                    if (videojuego[i].numart == videojuego[i - 1].numart)
                    {
                        printf("Numero repetido \n");
                    }
                } while (videojuego[i].numart == videojuego[i - 1].numart);
                system("cls");

                printf("Ingrese el nombre del articulo \n"); //Nombre
                cin.ignore();
                getline(cin, videojuego[i].nombre);
                system("cls");

                printf("Ingrese la fecha de lanzamiento \n"); //Año
                scanf_s("%d", &videojuego[i].fecha);
                system("cls");

                printf("Ingrese la clasificacion del articulo\n 1.-Todos\n 2.-Adolescentes\n 3.-Maduro +17\n 4.-Adultos unicamente +18\n"); //Clasificación
                scanf_s("%d", &opcion5);
                switch (opcion5)
                {
                case 1:
                    videojuego[i].clas = "Todos\n";
                    system("pause");
                    break;
                case 2:
                    videojuego[i].clas = "Adolescentes\n";
                    system("pause");
                    break;
                case 3:
                    videojuego[i].clas = "Maduro +17\n";
                    system("pause");
                    break;
                case 4:
                    videojuego[i].clas = "Adultos unicamente +18\n";
                    system("pause");
                    break;
                default:
                    printf("Opción invalida\n");
                    break;
                }

                system("cls");

                printf("Ingrese las caracteristicas del articulo \n"); //Características
                cin.ignore();
                getline(cin, videojuego[i].carac);
                system("cls");

                printf("Ingrese la descripcion del articulo \n"); //Descripción
                cin.ignore();
                getline(cin, videojuego[i].des);
                system("cls");

                printf("Ingrese el genero del articulo\n 1.-Accion\n 2.-Aventura\n 3.-Deportes\n 4.-Estrategia\n 5.-Simulación\n 6.-Musical\n"); //Género
                scanf_s("%d", &opcion7);
                switch (opcion7)
                {
                case 1:
                    videojuego[i].clas = "Accion\n";
                    system("pause");
                    break;
                case 2:
                    videojuego[i].clas = "Aventura\n";
                    system("pause");
                    break;
                case 3:
                    videojuego[i].clas = "Deportes\n";
                    system("pause");
                    break;
                case 4:
                    videojuego[i].clas = "Estrategia\n";
                    system("pause");
                    break;
                case 5:
                    videojuego[i].clas = "Simulacion\n";
                    system("pause");
                    break;
                case 6:
                    videojuego[i].clas = "Musical\n";
                    system("pause");
                    break;
                default:
                    printf("Opción invalida\n");
                    break;
                }

                system("cls");

                printf("Ingrese el precio unitario del articulo \n"); //Precio Unitario
                scanf_s("%f", &videojuego[i].precio);
                videojuego[i].total = videojuego[i].precio + (videojuego[i].precio * imp);

                printf("Precio Total:%f \n", videojuego[i].total); //Precio Total

                system("pause");
                system("cls");
            }
            break;

        case 2: //Modificar Artículo

            system("cls");

            printf("Ingrese el numero de articulo \n");
            scanf_s("%d", &busqueda);

            printf("Ingrese la opcion deseada a modificar:\n 1.-Nombre\n 2.-Fecha\n 3.-Clasificacíon\n 4.-Descripcion\n 5.-Genero\n 6.-Precio Unitario\n 7.-Salir\n");
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
                        printf("Modifique la fecha \n");
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
                        printf("Modifique la clasificacion\n 1.-Todos\n 2.-Adolescentes\n 3.-Maduro +17\n 4.-Adultos unicamente +18\n");
                        switch (opcion6)
                        {
                        case 1:
                            videojuego[i].clas = "Todos\n";
                            system("pause");
                            break;
                        case 2:
                            videojuego[i].clas = "Adolescentes\n";
                            system("pause");
                            break;
                        case 3:
                            videojuego[i].clas = "Maduro +17\n";
                            system("pause");
                            break;
                        case 4:
                            videojuego[i].clas = "Adultos unicamente +18\n";
                            system("pause");
                            break;
                        default:
                            printf("Opción invalida\n");
                            break;
                        }
                        system("pause");
                    }
                }
                system("pause");
                break;

            case 4: //Descripción
                for (int i = 0; i < 3; i++)
                {
                    if (busqueda == videojuego[i].numart)
                    {
                        printf("Modifique la descripcion \n");
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
                        printf("Modifique el genero\n 1.-Accion\n 2.-Aventura\n 3.-Deportes\n 4.-Estrategia\n 5.-Simulación\n 6.-Musical\n");
                        scanf_s("%d", &opcion8);
                        switch (opcion8)
                        {
                        case 1:
                            videojuego[i].clas = "Accion\n";
                            system("pause");
                            break;
                        case 2:
                            videojuego[i].clas = "Aventura\n";
                            system("pause");
                            break;
                        case 3:
                            videojuego[i].clas = "Deportes\n";
                            system("pause");
                            break;
                        case 4:
                            videojuego[i].clas = "Estrategia\n";
                            system("pause");
                            break;
                        case 5:
                            videojuego[i].clas = "Simulacion\n";
                            system("pause");
                            break;
                        case 6:
                            videojuego[i].clas = "Musical\n";
                            system("pause");
                            break;
                        default:
                            printf("Opción invalida\n");
                            break;
                        }
                        system("pause");
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

                printf("Ingrese el numero del artículo \n");
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
                system("cls");
                printf("Desea eliminar otro registro \n 1.- Sí \n 2.- No \n");
                scanf_s("%d", &opcion3);
            } while (opcion3 == 1);

            system("cls");
            break;

        case 4: //Lista de Artículos
            do
            {
                system("cls");
                printf("Ingrese la opcion deseada de busqueda\n 1.-Por numero de articulo\n 2.-Listas Vigentes\n 3.-Por clasificacion\n 4.-Por genero\n 5.- Salir\n");
                scanf_s("%d", &opcion4);
                system("cls");
                switch (opcion4)
                {
                case 1: //Por numero de artículo
                    printf("Ingrese el numero de articulo \n");
                    scanf_s("%d", &busqueda);
                    for (int i = 0; i < 3; i++)
                    {
                        if (busqueda == videojuego[i].numart)
                        {
                            printf("Numero de articulo: %d \n", videojuego[i].numart);
                            printf("Nombre: %s \n", videojuego[i].nombre.c_str());
                            printf("Fecha: %d \n", videojuego[i].fecha);
                            printf("Clasificacion: %s \n", videojuego[i].clas.c_str());
                            printf("Caracteristicas: %s \n", videojuego[i].carac.c_str());
                            printf("Descripcion: %s \n", videojuego[i].des.c_str());
                            printf("Genero: %s \n", videojuego[i].gen.c_str());
                            printf("Precio Unitario: %f \n", videojuego[i].precio);
                            printf("Total: %f \n", videojuego[i].total);
                        }
                    }
                    system("pause");
                    break;

                case 2: //Listas Vigentes
                    for (int i = 0; i < 3; i++)
                    {
                        if (videojuego[i].numart != 0)
                        {
                            printf("Numero de articulo: %d \n", videojuego[i].numart);
                            printf("Nombre: %s \n", videojuego[i].nombre.c_str());
                            printf("Fecha: %d \n", videojuego[i].fecha);
                            printf("Clasificacion: %s \n", videojuego[i].clas.c_str());
                            printf("Caracteristicas: %s \n", videojuego[i].carac.c_str());
                            printf("Descripcion: %s \n", videojuego[i].des.c_str());
                            printf("Genero: %s \n", videojuego[i].gen.c_str());
                            printf("Precio Unitario: %f \n", videojuego[i].precio);
                            printf("Total: %f \n", videojuego[i].total);
                        }
                    }
                    system("pause");
                    break;

                case 3: //Por clasificacion
                    printf("Ingrese la opcion deseada de busqueda\n 1.-Todos\n 2.-Adolescentes\n 3.-Maduro +17\n 4.-Adultos unicamente +18\n");
                    scanf_s("%d", &opcion9);
                    for (int i = 0; i < 3; i++)
                    {
                        switch (opcion9)
                        {
                        case 1: //Todos
                            if (videojuego[i].clas == "Todos")
                            {
                                printf("Numero de articulo: %d \n", videojuego[i].numart);
                                printf("Nombre: %s \n", videojuego[i].nombre.c_str());
                                printf("Fecha: %d \n", videojuego[i].fecha);
                                printf("Clasificacion: %s \n", videojuego[i].clas.c_str());
                                printf("Caracteristicas: %s \n", videojuego[i].carac.c_str());
                                printf("Descripcion: %s \n", videojuego[i].des.c_str());
                                printf("Genero: %s \n", videojuego[i].gen.c_str());
                                printf("Precio Unitario: %f \n", videojuego[i].precio);
                                printf("Total: %f \n", videojuego[i].total);
                            }
                            system("pause");
                            break;

                        case 2: //Adolescentes
                            if (videojuego[i].clas == "Adolescentes")
                            {
                                printf("Numero de articulo: %d \n", videojuego[i].numart);
                                printf("Nombre: %s \n", videojuego[i].nombre.c_str());
                                printf("Fecha: %d \n", videojuego[i].fecha);
                                printf("Clasificacion: %s \n", videojuego[i].clas.c_str());
                                printf("Caracteristicas: %s \n", videojuego[i].carac.c_str());
                                printf("Descripcion: %s \n", videojuego[i].des.c_str());
                                printf("Genero: %s \n", videojuego[i].gen.c_str());
                                printf("Precio Unitario: %f \n", videojuego[i].precio);
                                printf("Total: %f \n", videojuego[i].total);
                            }
                            system("pause");
                            break;

                        case 3: //Maduro +17
                            if (videojuego[i].clas == "Maduro +17")
                            {
                                printf("Numero de articulo: %d \n", videojuego[i].numart);
                                printf("Nombre: %s \n", videojuego[i].nombre.c_str());
                                printf("Fecha: %d \n", videojuego[i].fecha);
                                printf("Clasificacion: %s \n", videojuego[i].clas.c_str());
                                printf("Caracteristicas: %s \n", videojuego[i].carac.c_str());
                                printf("Descripcion: %s \n", videojuego[i].des.c_str());
                                printf("Genero: %s \n", videojuego[i].gen.c_str());
                                printf("Precio Unitario: %f \n", videojuego[i].precio);
                                printf("Total: %f \n", videojuego[i].total);
                            }
                            system("pause");
                            break;

                        case 4: //Adultos unicamente +18
                            if (videojuego[i].clas == "Adultos unicamente +18")
                            {
                                printf("Numero de articulo: %d \n", videojuego[i].numart);
                                printf("Nombre: %s \n", videojuego[i].nombre.c_str());
                                printf("Fecha: %d \n", videojuego[i].fecha);
                                printf("Clasificacion: %s \n", videojuego[i].clas.c_str());
                                printf("Caracteristicas: %s \n", videojuego[i].carac.c_str());
                                printf("Descripcion: %s \n", videojuego[i].des.c_str());
                                printf("Genero: %s \n", videojuego[i].gen.c_str());
                                printf("Precio Unitario: %f \n", videojuego[i].precio);
                                printf("Total: %f \n", videojuego[i].total);
                            }
                            system("pause");
                            break;

                        default:
                            printf("La opcion es incorrecta \n");
                            system("pause");
                            break;
                        }
                    }
                    system("pause");
                    break;

                case 4: //Por genero
                    printf("Ingrese la opcion deseada de busqueda\n 1.-Accion\n 2.-Aventura\n 3.-Deportes\n 4.-Estrategia\n 5.-Simulación\n 6.-Musical\n");
                    scanf_s("%d", &opcion10);
                    for (int i = 0; i < 3; i++)
                    {
                        switch (opcion10)
                        {
                        case 1: //Accion
                            if (videojuego[i].gen == "Accion")
                            {
                                printf("Numero de articulo: %d \n", videojuego[i].numart);
                                printf("Nombre: %s \n", videojuego[i].nombre.c_str());
                                printf("Fecha: %d \n", videojuego[i].fecha);
                                printf("Clasificacion: %s \n", videojuego[i].clas.c_str());
                                printf("Caracteristicas: %s \n", videojuego[i].carac.c_str());
                                printf("Descripcion: %s \n", videojuego[i].des.c_str());
                                printf("Genero: %s \n", videojuego[i].gen.c_str());
                                printf("Precio Unitario: %f \n", videojuego[i].precio);
                                printf("Total: %f \n", videojuego[i].total);
                            }
                            system("pause");
                            break;

                        case 2: //Aventura
                            if (videojuego[i].gen == "Aventura")
                            {
                                printf("Numero de articulo: %d \n", videojuego[i].numart);
                                printf("Nombre: %s \n", videojuego[i].nombre.c_str());
                                printf("Fecha: %d \n", videojuego[i].fecha);
                                printf("Clasificacion: %s \n", videojuego[i].clas.c_str());
                                printf("Caracteristicas: %s \n", videojuego[i].carac.c_str());
                                printf("Descripcion: %s \n", videojuego[i].des.c_str());
                                printf("Genero: %s \n", videojuego[i].gen.c_str());
                                printf("Precio Unitario: %f \n", videojuego[i].precio);
                                printf("Total: %f \n", videojuego[i].total);
                            }
                            system("pause");
                            break;

                        case 3: //Deportes
                            if (videojuego[i].gen == "Deportes")
                            {
                                printf("Numero de articulo: %d \n", videojuego[i].numart);
                                printf("Nombre: %s \n", videojuego[i].nombre.c_str());
                                printf("Fecha: %d \n", videojuego[i].fecha);
                                printf("Clasificacion: %s \n", videojuego[i].clas.c_str());
                                printf("Caracteristicas: %s \n", videojuego[i].carac.c_str());
                                printf("Descripcion: %s \n", videojuego[i].des.c_str());
                                printf("Genero: %s \n", videojuego[i].gen.c_str());
                                printf("Precio Unitario: %f \n", videojuego[i].precio);
                                printf("Total: %f \n", videojuego[i].total);
                            }
                            system("pause");
                            break;

                        case 4: //Estrategia
                            if (videojuego[i].gen == "Estrategia")
                            {
                                printf("Numero de articulo: %d \n", videojuego[i].numart);
                                printf("Nombre: %s \n", videojuego[i].nombre.c_str());
                                printf("Fecha: %d \n", videojuego[i].fecha);
                                printf("Clasificacion: %s \n", videojuego[i].clas.c_str());
                                printf("Caracteristicas: %s \n", videojuego[i].carac.c_str());
                                printf("Descripcion: %s \n", videojuego[i].des.c_str());
                                printf("Genero: %s \n", videojuego[i].gen.c_str());
                                printf("Precio Unitario: %f \n", videojuego[i].precio);
                                printf("Total: %f \n", videojuego[i].total);
                            }
                            system("pause");
                            break;

                        case 5: //Simulacion
                            if (videojuego[i].gen == "Simulacion")
                            {
                                printf("Numero de articulo: %d \n", videojuego[i].numart);
                                printf("Nombre: %s \n", videojuego[i].nombre.c_str());
                                printf("Fecha: %d \n", videojuego[i].fecha);
                                printf("Clasificacion: %s \n", videojuego[i].clas.c_str());
                                printf("Caracteristicas: %s \n", videojuego[i].carac.c_str());
                                printf("Descripcion: %s \n", videojuego[i].des.c_str());
                                printf("Genero: %s \n", videojuego[i].gen.c_str());
                                printf("Precio Unitario: %f \n", videojuego[i].precio);
                                printf("Total: %f \n", videojuego[i].total);
                            }
                            system("pause");
                            break;

                        case 6: //Musical
                            if (videojuego[i].gen == "Musical")
                            {
                                printf("Numero de articulo: %d \n", videojuego[i].numart);
                                printf("Nombre: %s \n", videojuego[i].nombre.c_str());
                                printf("Fecha: %d \n", videojuego[i].fecha);
                                printf("Clasificacion: %s \n", videojuego[i].clas.c_str());
                                printf("Caracteristicas: %s \n", videojuego[i].carac.c_str());
                                printf("Descripcion: %s \n", videojuego[i].des.c_str());
                                printf("Genero: %s \n", videojuego[i].gen.c_str());
                                printf("Precio Unitario: %f \n", videojuego[i].precio);
                                printf("Total: %f \n", videojuego[i].total);
                            }
                            system("pause");
                            break;

                        default:
                            printf("La opcion es incorrecta \n");
                            system("pause");
                            break;
                        }
                    }
                    system("pause");
                    break;

                case 5:
                    printf("Saliendo... \n");
                    system("pause");
                    break;

                default:
                    printf("La opcion es incorrecta \n");
                    system("pause");
                    break;
                }
            } while (opcion4 != 5);
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
    } while (opcion != 6);
    system("pause");
}
