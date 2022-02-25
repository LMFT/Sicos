#include <stdio.h>
#include <stdlib.h>
#ifndef SICOS_H_INCLUDED
#define SICOS_H_INCLUDED



#endif // SICOS_H_INCLUDED

void InicializarMatrizInt(int matriz[][10], int cantidadFilas, int cantidadColumnas, int valorInicial);
void IniciazarVectorInt(int vector[], int cantidadElementos, int valorInicial);
int GetInt(char mensaje[]);
void CargarVectorInt(int vector[], int cantidadElementos, char mensaje[]);
float CalcularPromedioVector(int vector[], int cantidadElementos);
int Confirmar(char mensaje[], char aceptar, char cancelar);
int MostrarMenu(char menu[][256], int cantidadOpciones);
