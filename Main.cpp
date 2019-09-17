#include <cstdio>

int main() {

	printf("Hola Mundo!\n");

	///////////////
	/*Ejercicio 1*/
	///////////////

	/**
	printf("Char: %d\n", sizeof(char));
	printf("Short: %d\n", sizeof(short));
	printf("Int: %d\n", sizeof(int));
	printf("Long: %d\n", sizeof(long));
	printf("Long long: %d\n", sizeof(long long));
	printf("Float: %d\n", sizeof(float));
	printf("Double: %d\n", sizeof(double));
	printf("Long double: %d\n", sizeof(long double));
	printf("Puntero a Char: %d\n", sizeof(char*)); //Ocupa una palabra de memoria (x32/x64 bits)
	printf("Puntero a Float: %d\n", sizeof(float*)); //Ocupa una palabra de memoria(x32 / x64 bits)

	// Char: %c o %hhd
	// Short: %hd
	// Int: %d
	// Long: %ld
	// Long long: %lld
	// Float: %f
	// double: %lf
	// Long double: %llf
	// Char*: %p
	// Float*: %p
	unsigned char a = '@';

	printf("%hhu\n", a);
	printf("%c\n", a);

	unsigned char b = 64;

	printf("%hhu\n", b);
	printf("%c\n", b);
	// %hhu muestra el número correspondiente al caracter ascii, %c muestra el caracter ascii
	/**/

	///////////////
	/*Ejercicio 2*/
	///////////////

	/**
	struct estructura {
		char c;
		long l;
		double d;
	}; //La estructura se puede crear fuera del main, pero siempre encima
	printf("Tamaño por separado: %d\n", sizeof(char) + sizeof(long) + sizeof(double));
	printf("Tamaño de la estructura: %d\n", sizeof(estructura));

	struct estructura2 {
		char c;
		char c2;
		long l;
		double d;
	}; //La estructura se puede crear fuera del main, pero siempre encima
	printf("Tamaño por separado: %d\n", sizeof(char) + sizeof(char) + sizeof(long) + sizeof(double));
	printf("Tamaño de la estructura 2: %d\n", sizeof(estructura2));
	printf("Tamaño de un puntero a la estructura: %d\n", sizeof(estructura*));
	printf("Tamaño de un puntero a la estructura 2: %d\n", sizeof(estructura2*));
	/**/

	///////////////
	/*Ejercicio 3*/
	///////////////

	/**
	int num = 3;
	int* pi = &num;

	printf("A -> %d\n", num); //Devuelve num
	printf("B -> %p\n", pi); //Devuelve la posición en la que se encuentra num
	printf("C -> %d\n", *pi); //Devuelve el valor al que apunta pi (num)
	printf("D -> %p\n", &num); //Devuelve la posición en la que se encuentra num
	printf("E -> %p\n", &pi); //Devuelve la posición en la que se encuentra pi
	/**/

	///////////////
	/*Ejercicio 4*/
	///////////////

	/**
	char a[10] = { 0,1,2,3,4,5,6,7,8,9 };
	char* pa = a;

	for (int i = 0; i < 10; i++) {
		printf("%p\n", &(a[i]));
		printf("%p\n", pa + i);
	}
	/**/

	///////////////
	/*Ejercicio 5*/
	///////////////

	/**
	char a[40];
	for (int i = 0; i < 39; i++) {
		a[i] = i;
	}

	int* pi = (int*)a;
	double* pd = (double*)a;

	printf("%p\n", pi);
	printf("%p\n", pd);

	printf("%p\n", pi + 1);
	printf("%p\n", pd + 1);

	printf("%hhd\n", *(pi+1));
	printf("%hhd\n", *(pd+1));
	/**/

	///////////////
	/*Ejercicio 6*/
	///////////////

	/**/
	int num = 16777216; //(0000 0001) (0000 0000) (0000 0000) (0000 0000) -> 1 0 0 0
	int num2 = 16777217; //(0000 0001) (0000 0000) (0000 0000) (0000 0001) -> 1 0 0 1
	char* c1 = (char*) &num2;
	char* c2 = c1 + 1;
	char* c3 = c2 + 1;
	char* c4 = c3 + 1;

	printf("%hhd\n", *c1);
	printf("%hhd\n", *c2);
	printf("%hhd\n", *c3);
	printf("%hhd\n", *c4);
	/**/

	///////////////
	/*Ejercicio 7*/
	///////////////

	/**/

	/**/

	getchar();
	return 0;
}
/**
Notas varias de punteros

int a[2] = { 0, 1 };
int* pa = a;
printf("%d", *pa); //Muestra el número que se encuentra en la posición 0
printf("%p", pa); //Muestra la posición de memoria en la que empieza el array a

int num = 2;
&num devuelve la posición de memoria en la que se encuentra
/**/