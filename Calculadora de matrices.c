//Calculadora de matrices cuadradas con programcion modular
//Proyecto de Introduccion a la programacion, abarca hasta el tema de funciones.
//Albarran Basurto Rayr Guillermo

#include <stdio.h>
#include <stdlib.h>

//Prototipos de funciones
void Menu();
void Suma();
void Resta();
void Multiplicacion();
void Transpuesta();
void Diagonal();

int main(){
	Menu ();
	return 0;
}
void Menu(){
	int opc;
    printf("\t\t ____________________________\t\t");
    printf("\n\t\t|  CALCULADORA DE MATRICES   |\t\t");
    printf("\n\t\t|                            |\t\t");
    printf("\n\t\t| 1) SUMA                    |\t\t");
    printf("\n\t\t| 2) RESTA                   |\t\t");
    printf("\n\t\t| 3) MULTIPLICACION          |\t\t");
    printf("\n\t\t| 4) TRANSPUESTA             |\t\t");
    printf("\n\t\t| 5) DIAGONAL                |\t\t");
    printf("\n\t\t| 6) SALIR                   |\t\t");
	printf("\n\t\t|____________________________|\t\t");
    printf("\n\n Introduzca la opci%cn deseada: ",162);
	scanf("%i",&opc);
    switch(opc){
    case 1:
    	system("cls");
       	Suma();
       	break;
    case 2:
    	system("cls");
       	Resta();
       	break;
    case 3:
    	system("cls");
       	Multiplicacion();
       	break;
    case 4:
    	system("cls");
       	Transpuesta();
       	break;
    case 5:
    	system("cls");
       	Diagonal();
       	break;
    case 6:
       	break;
    default:
       	printf("\n Opcion invalida \n ");
       	printf("\n Ingresa una de las opciones del menu");
       	Menu();
       	break;
	}
}
void Suma(){//Funcion Suma
	int i,j,n;
	printf("Ingresa el numero de renglones y columnas para las matrices: ");
    scanf("%i",&n);
    int m1[n][n],m2[n][n];
    printf("\nMatriz No.1");
    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){
        	printf("Ingrese el elemento [%i][%i]:",i+1,j+1);
            scanf("%i",&m1[i][j]);
        }
    }
    printf("\nMatriz No.2");
    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("Ingrese el elemento [%i][%i]:",i+1,j+1);
            scanf("%i",&m2[i][j]);
        }
	}
	printf("\n\nLa matriz resultante es: ");
    for(i=0;i<n;i++){
    	printf("\n");
        for(j=0;j<n;j++){
            printf("[%i]",m1[i][j] + m2[i][j]);
        }
    }
    printf("\n");
    system("PAUSE");
    system("cls");
	Menu();
}
void Resta(){//Funcion Resta
	int i,n,j;
	printf("Ingresa el numero de renglones y columnas para las matrices: ");
    scanf("%i",&n);
    int m1[n][n],m2[n][n];
    printf("\nMatriz No.1");
    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("Ingrese el elemento [%i][%i]:",i+1,j+1);
            scanf("%i",&m1[i][j]);
        }
    }
    printf("\nMatriz No.2");
    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("Ingrese el elemento [%i][%i]:",i+1,j+1);
            scanf("%i",&m2[i][j]);
        }
    }
    printf("\n\nLa matriz resultante es: ");
	for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("[%i]",m1[i][j] - m2[i][j]);
        }
    }
    printf("\n");
    system("PAUSE");
    system("cls");
    Menu();
}
void Multiplicacion(){//Funcion Multiplicacion
	int i,n,j;
	printf("Ingresa el numero de renglones y columnas para las matrices: ");
    scanf("%i",&n);
    int m1[n][n],m2[n][n];
    printf("\nMatriz No.1");
    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("Ingrese el elemento [%i][%i]:",i+1,j+1);
            scanf("%i",&m1[i][j]);
        }
    }
    printf("\nMatriz No.2");
    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("Ingrese el elemento [%i][%i]:",i+1,j+1);
            scanf("%i",&m2[i][j]);
        }
    }
    printf("\n\nLa matriz resultante es: ");
    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("[%i]",m1[i][j] * m2[i][j]);
        }
	}
	printf("\n");
	system("PAUSE");
	system("cls");
	Menu();
}
void Transpuesta(){//Funcion Transpuesta
	int i,j,n;
	printf("Ingresa el numero de renglones y columnas para la matriz: ");
    scanf("%i",&n);
    int m1[n][n],m2[n][n];
    printf("\nMatriz");
    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("Ingrese el elemento [%i][%i]:",i+1,j+1);
            scanf("%i",&m1[i][j]);
        }
    }
    printf("\n\nLa matriz resultante es: ");
    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("[%i]",m1[j][i]);
        }
    }
    printf("\n");
    system("PAUSE");
    system("cls");
    Menu();
}
void Diagonal(){////Funcion Diagonal
	int i,j,n;
	printf("Ingresa el numero de renglones y columnas para la matriz: ");
    scanf("%i",&n);
    int m1[n][n],m2[n][n];
    printf("\nMatriz");
    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("Ingrese el elemento [%i][%i]:",i+1,j+1);
            scanf("%i",&m1[i][j]);
        }
    }
	printf("\n\nLa matriz resultante es: ");
    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){
			if(i==j){
				printf("[%i]",m1[i][j]);
			}
			else{
				printf("[0]");
			}
			printf("\t");
		}
    }
    printf("\n");
    system("PAUSE");
	system("cls");
    Menu();
}


