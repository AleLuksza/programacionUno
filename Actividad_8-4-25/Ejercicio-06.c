#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, discriminante, x1, x2;

	puts("Ingrese el coeficiente (a)(termino cuadratico) de la funciC3n: ");
	scanf("%lf", &a);
	if (a == 0) {
		printf("No es una ecuacion cuadratica. 'a' no puede ser 0: ");
		
	} else {
		puts("Ingrese el termino (b)(termino lineal) de la fokin funcion: ");
		scanf("%lf", &b);
		puts("Ingrese el termino (c)(termino independiente de la funcion: ");
		     scanf("%lf", &c);

		     discriminante = (b * b) - (4 * a * c);

		     printf("\nDiscriminante (N) = %.2lf\n", discriminante);

		if (discriminante > 0) {
		x1 = (-b + sqrt(discriminante)) / (2 * a);
			x2 = (-b - sqrt(discriminante)) / (2 * a);
			printf("La ecuacion tiene dos raices reales y distintas:\n");
			printf("Raiz 1 = %.2lf\n", x1);
			printf("Raiz 2 = %.2lf\n", x2);
		} else if (discriminante == 0) {
		x1 = -b / (2 * a);
			printf("La ecuaciC3n tiene una raC-z real doble:\n");
			printf("RaC-z = %.2lf\n", x1);
		} else {
			printf("La ecuacion tiene raices complejas (no se calculan en este programa).\n");
		}
	}
	return 0;
}