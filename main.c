/* Ejercicio 1-10. Escriba un programa que copie su entrada a la salida,
reemplazando cada tabulación por \t, cada retroceso por \b y cada diagonal
invertida por \\.
 * 20/4/2015
 * Alan Kevin Curia Nadal
 */

#include <stdio.h>

main(void) {
	int c;

	while ((c=getchar()) != EOF) {

		if (c == '\t') {
			putchar('\\');
			putchar('t');
		}
		if (c == '\b') {
			putchar('\\');
			putchar('b');
		}
		if (c == '\\') {
			putchar('\\');
			putchar('\\');
		}
		if ((c != '\t') && (c != '\b') && (c != '\\'))
			putchar(c);
	}
}


