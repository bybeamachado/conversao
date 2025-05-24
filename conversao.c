#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

#define PI 3.14159265f
#define SQRT3 1.732050808f
#define LIBRAS 2.20462262f
#define LITROS 0.2642f
#define CM3  16.387064f
#define JARDAS 1.09361f

//Colocar caracteres na tela
linha (int num)
{ 
	int i;
	for (i=1 ; i <= num ; i++)
	putchar('*');
	putchar('\n');
}


// Funções para cálculo de áreas
float area_circulo(float diametro)
{
    float raio = diametro / 2;
    	return PI * raio * raio;
}

float area_losango(float d1, float d2) 
{
    	return (d1 * d2) / 2;
}

float area_paralelogramo(float base, float altura) 
{
    	return base * altura;
}

float area_trapezio(float base_maior, float base_menor, float altura) 
{
    	return ((base_maior + base_menor) / 2) * altura;
}

float area_triangulo_equilatero(float altura) 
{
    	return ((altura * altura) / 4) * SQRT3;
}

float area_triangulo(float base, float altura) 
{
    	return (base * altura) / 2;
}

// Funções para cálculo de volumes
float volume_esfera(float diametro) 
{
    float raio = diametro / 2;
    	return (4 * PI / 3) * raio * raio * raio;
}

float volume_cone(float diametro, float altura) 
{
    float raio = diametro / 2;
    	return (PI / 3) * raio * raio * altura;
}

float volume_cilindro(float diametro, float altura) 
{
    float raio = diametro / 2;
    	return PI * raio * raio * altura;
}

float volume_paralelepipedo(float comprimento, float largura, float altura) 
{
    	return comprimento * largura * altura;
}

// Funções para conversão de unidades
float metros_para_jardas(float metros) 
{ 
		return metros * JARDAS; 
}
float jardas_para_metros(float jardas) 
{
		return jardas / JARDAS; 
}
float cm3_para_pol3(float cm3) 
{ 
		return cm3 / CM3; 
}
float pol3_para_cm3(float pol3)
{ 
		return pol3 * CM3; 
}
float litros_para_galoes(float litros)
{ 
		return litros * LITROS; 
}
float galoes_para_litros(float galoes) 
{ 
		return galoes / LITROS; 
}
float kg_para_libras(float kg)
{ 
		return kg * LIBRAS; 
}
float libras_para_kg(float libras) 
{ 
		return libras / LIBRAS; 
}

// Funções para exibição de menus
void mostrar_menu_principal() {
    system("cls");
    linha(80);
    printf("\n\n\t\t********** P R O G R A M A   M E N U **********\n\n\n");
    linha(80);
    printf("\n\n\tEscolha a opcao desejada:\n");
    printf("\n\t1 - Calcular area de figuras planas");
    printf("\n\t2 - Calcular volume de solidos geometricos");
    printf("\n\t3 - Conversao de medidas");
    printf("\n\t4 - Sair");
    printf("\n\n\t\t\t\tOpcao: ");
}

void mostrar_menu_areas() {
    system("cls");
    linha(80);
    printf("\n\n\t\t********** AREA DE FIGURAS PLANAS **********\n\n\n");
    linha(80);
    printf("\n\tEscolha a opcao desejada:");
    printf("\n\n\t1 - Circulo");
    printf("\n\t2 - Losango");
    printf("\n\t3 - Paralelogramo");
    printf("\n\t4 - Trapezio");
    printf("\n\t5 - Triangulo");
    printf("\n\t0 - Retornar");
    printf("\n\n\t\t\t\tOpcao: ");
}

void mostrar_menu_volumes() {
    system("cls");
    linha(80);
    printf("\n\n\t\t********** VOLUME DE SOLIDOS GEOMETRICOS **********\n\n\n");
    linha(80);
    printf("\n\tEscolha a opcao desejada:");
    printf("\n\n\t1 - Esfera");
    printf("\n\t2 - Cone Circular");
    printf("\n\t3 - Cilindro");
    printf("\n\t4 - Paralelepipedo");
    printf("\n\t0 - Retornar");
    printf("\n\n\t\t\t\tOpcao: ");
}

void mostrar_menu_conversoes() {
    system("cls");
    linha(80);
    printf("\n\n\t\t********** CONVERSAO DE MEDIDAS **********\n\n\n");
    linha(80);
    printf("\n\tEscolha a opcao desejada:");
    printf("\n\n\t1 - Metros para Jardas");
    printf("\n\t2 - Jardas para Metros");
    printf("\n\t3 - Centimetros cubicos para Polegadas cubicas");
    printf("\n\t4 - Polegadas cubicas para Centimetros cubicos");
    printf("\n\t5 - Litros para Galoes");
    printf("\n\t6 - Galoes para Litros");
    printf("\n\t7 - Quilogramas para Libras");
    printf("\n\t8 - Libras para Quilogramas");
    printf("\n\t0 - Retornar");
    printf("\n\n\t\t\t\tOpcao: ");
}



// Funções para desenhar formas geométricas
void desenhar_circulo() {
    int raio = 5, i,j;
    printf("\n\nCirculo:\n\n");
    for (i = -raio; i <= raio; i++) {
        printf("  ");
        for (j = -raio; j <= raio; j++) {
            if (i*i + j*j <= raio*raio + 3) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
}

void desenhar_losango() {
    int tamanho = 5,i,j;
    printf("\n\nLosango:\n\n");
    for (i = 0; i < tamanho; i++) {
        printf("  ");
        for (j = 0; j < tamanho - i - 1; j++) printf(" ");
        for (j = 0; j < 2*i + 1; j++) printf("*");
        printf("\n");
    }
    for (i = tamanho - 2; i >= 0; i--) {
        printf("  ");
        for (j = 0; j < tamanho - i - 1; j++) printf(" ");
        for (j = 0; j < 2*i + 1; j++) printf("*");
        printf("\n");
    }
}

void desenhar_paralelogramo() {
    int linhas = 5,i,j;
    printf("\n\nParalelogramo:\n\n");
    for (i = 0; i < linhas; i++) {
        printf("  ");
        for (j = 0; j < linhas - i - 1; j++) printf(" ");
        for (j = 0; j < linhas + 2; j++) printf("*");
        printf("\n");
    }
}

void desenhar_trapezio() {
	int i,j;
    printf("\n\nTrapezio:\n\n");
    for (i = 0; i < 4; i++) {
        printf("  ");
        for (j = 0; j < 4 - i; j++) printf(" ");
        for (j = 0; j < 6 + 2*i; j++) printf("*");
        printf("\n");
    }
}

void desenhar_triangulo_equilatero() {
	int i,j;
    printf("\n\nTriangulo Equilatero:\n\n");
    for (i = 0; i < 5; i++) {
        printf("  ");
        for (j = 0; j < 5 - i - 1; j++) printf(" ");
        for (j = 0; j < 2*i + 1; j++) printf("*");
        printf("\n");
    }
}

void desenhar_triangulo_isosceles() {
	int i,j;
    printf("\n\nTriangulo Isosceles:\n\n");
    for (i = 0; i < 5; i++) {
        printf("  ");
        for (j = 0; j < 5 - i - 1; j++) printf(" ");
        for (j = 0; j < 2*i + 1; j++) printf("*");
        printf("\n");
    }
}

void desenhar_triangulo_escaleno() {
	int i,j;
    printf("\n\nTriangulo Escaleno:\n\n");
    for (i = 0; i < 5; i++) {
        printf("  ");
        for (j = 0; j <= i; j++) printf("*");
        printf("\n");
    }
}


int main() {
    int opcao;
    
    do {
        mostrar_menu_principal();
        scanf("%d", &opcao);
        fflush(stdin);
        
        switch(opcao) {
            case 1: // Áreas
                do {
                    mostrar_menu_areas();
                    scanf("%d", &opcao);
                    fflush(stdin);
                    
                    float valor1, valor2, valor3, resultado;
                    
                    switch(opcao) {
					    case 1: // Círculo
					        system("cls");
					        printf("\nDigite o diametro do circulo: ");
					        scanf("%f", &valor1);
					        resultado = area_circulo(valor1);
					        printf("\nArea do circulo: %.2f", resultado);
					        desenhar_circulo();
					        break;
					        
					    case 2: // Losango
					        system("cls");
					        printf("\nDigite a diagonal 1: ");
					        scanf("%f", &valor1);
					        printf("\nDigite a diagonal 2: ");
					        scanf("%f", &valor2);
					        resultado = area_losango(valor1, valor2);
					        printf("\nArea do losango: %.2f", resultado);
					        desenhar_losango();
					        break;
					        
					    case 3: // Paralelogramo
					        system("cls");
					        printf("\nDigite a base: ");
					        scanf("%f", &valor1);
					        printf("\nDigite a altura: ");
					        scanf("%f", &valor2);
					        resultado = area_paralelogramo(valor1, valor2);
					        printf("\nArea do paralelogramo: %.2f", resultado);
					        desenhar_paralelogramo();
					        break;
					        
					    case 4: // Trapézio
					        system("cls");
					        printf("\nDigite a base maior: ");
					        scanf("%f", &valor1);
					        printf("\nDigite a base menor: ");
					        scanf("%f", &valor2);
					        printf("\nDigite a altura: ");
					        scanf("%f", &valor3);
					        resultado = area_trapezio(valor1, valor2, valor3);
					        printf("\nArea do trapezio: %.2f", resultado);
					        desenhar_trapezio();
					        break;
					        
					    case 5: // Triângulo
					        system("cls");
					        printf("\nDigite o lado A: ");
					        scanf("%f", &valor1);
					        printf("\nDigite o lado B: ");
					        scanf("%f", &valor2);
					        printf("\nDigite o lado C: ");
					        scanf("%f", &valor3);
					        
					        if(valor1 == valor2 && valor2 == valor3) {
					            resultado = area_triangulo_equilatero(valor1);
					            printf("\nTriangulo equilatero - Area: %.2f", resultado);
					            desenhar_triangulo_equilatero();
					        } else {
					            resultado = area_triangulo(valor1, valor2);
					            if(valor1 == valor2 || valor1 == valor3 || valor2 == valor3) {
					                printf("\nTriangulo isosceles - Area: %.2f", resultado);
					                desenhar_triangulo_isosceles();
					            } else {
					                printf("\nTriangulo escaleno - Area: %.2f", resultado);
					                desenhar_triangulo_escaleno();
					            }
					        }
					        break;
					        
        case 0: // Voltar
                            break;
                            
                        default:
                            printf("\nOpcao invalida!");
                    }
                    
                    if(opcao != 0) {
                        printf("\n\nPressione ENTER para continuar...");
                        getch();
                    }
                } while(opcao != 0);
                break;
                
            case 2: // Volumes
                do {
                    mostrar_menu_volumes();
                    scanf("%d", &opcao);
                    fflush(stdin);
                    
                    float valor1, valor2, valor3, resultado;
                    
                    switch(opcao) {
                        case 1: // Esfera
                            system("cls");
                            printf("\nDigite o diametro: ");
                            scanf("%f", &valor1);
                            resultado = volume_esfera(valor1);
                            printf("\nVolume da esfera: %.2f", resultado);
                            break;
                            
                        case 2: // Cone
                            system("cls");
                            printf("\nDigite o diametro da base: ");
                            scanf("%f", &valor1);
                            printf("\nDigite a altura: ");
                            scanf("%f", &valor2);
                            resultado = volume_cone(valor1, valor2);
                            printf("\nVolume do cone: %.2f", resultado);
                            break;
                            
                        case 3: // Cilindro
                            system("cls");
                            printf("\nDigite o diametro: ");
                            scanf("%f", &valor1);
                            printf("\nDigite a altura: ");
                            scanf("%f", &valor2);
                            resultado = volume_cilindro(valor1, valor2);
                            printf("\nVolume do cilindro: %.2f", resultado);
                            break;
                            
                        case 4: // Paralelepípedo
                            system("cls");
                            printf("\nDigite o comprimento: ");
                            scanf("%f", &valor1);
                            printf("\nDigite a largura: ");
                            scanf("%f", &valor2);
                            printf("\nDigite a altura: ");
                            scanf("%f", &valor3);
                            resultado = volume_paralelepipedo(valor1, valor2, valor3);
                            printf("\nVolume do paralelepipedo: %.2f", resultado);
                            break;
                            
                        case 0: // Voltar
                            break;
                            
                        default:
                            printf("\nOpcao invalida!");
                    }
                    
                    if(opcao != 0) {
                        printf("\n\nPressione ENTER para continuar...");
                        getch();
                    }
                } while(opcao != 0);
                break;
                
            case 3: // Conversões
                do {
                    mostrar_menu_conversoes();
                    scanf("%d", &opcao);
                    fflush(stdin);
                    
                    float valor, resultado;
                    char *unidade_origem, *unidade_destino;
                    
                    if(opcao >= 1 && opcao <= 8) {
                        system("cls");
                        printf("\nDigite o valor a ser convertido: ");
                        scanf("%f", &valor);
                        
                        switch(opcao) {
                            case 1:
                                resultado = metros_para_jardas(valor);
                                unidade_origem = "metros";
                                unidade_destino = "jardas";
                                break;
                            case 2:
                                resultado = jardas_para_metros(valor);
                                unidade_origem = "jardas";
                                unidade_destino = "metros";
                                break;
                            case 3:
                                resultado = cm3_para_pol3(valor);
                                unidade_origem = "cm³";
                                unidade_destino = "pol³";
                                break;
                            case 4:
                                resultado = pol3_para_cm3(valor);
                                unidade_origem = "pol³";
                                unidade_destino = "cm³";
                                break;
                            case 5:
                                resultado = litros_para_galoes(valor);
                                unidade_origem = "litros";
                                unidade_destino = "galoes";
                                break;
                            case 6:
                                resultado = galoes_para_litros(valor);
                                unidade_origem = "galoes";
                                unidade_destino = "litros";
                                break;
                            case 7:
                                resultado = kg_para_libras(valor);
                                unidade_origem = "kg";
                                unidade_destino = "libras";
                                break;
                            case 8:
                                resultado = libras_para_kg(valor);
                                unidade_origem = "libras";
                                unidade_destino = "kg";
                                break;
                        }
                        
                        printf("\n%.2f %s = %.2f %s", valor, unidade_origem, resultado, unidade_destino);
                    } else if(opcao != 0) {
                        printf("\nOpcao invalida!");
                    }
                    
                    if(opcao != 0) {
                        printf("\n\nPressione ENTER para continuar...");
                        getch();
                    }
                } while(opcao != 0);
                break;
                
            case 4: // Sair
                printf("\nSaindo do programa...");
                break;
                
            default:
                printf("\nOpcao invalida!");
                printf("\n\nPressione ENTER para continuar...");
                getch();
        }
    } while(opcao != 4);
    
    return 0;
}
