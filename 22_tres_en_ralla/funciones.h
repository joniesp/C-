#ifndef __FUNCIONES_H__
#define __FUNCIONES_H__

#ifdef __cplusplus
extern "C" {
#endif

	void instrucciones();
	void imprimir_tablero(char[3][3], int);
	void titulo();
	void pedir_posicion(int*, int*);
	void sustituir(int, int, char[3][3], char);
	bool comprobar_vertical(char[3][3], char);
	bool comprobar_horizontal(char[3][3], char);
	bool comprobar_cruzado(char[3][3], char);

#ifdef __cplusplus
}
#endif

#endif

