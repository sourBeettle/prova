#include <stdio.h>
int main() {
float celsius, fahrenheit;
printf("Digite a temperatura em Celsius: ");
scanf("%f", &celsius);
fahrenheit = (celsius * 9.0 / 5.0) + 32;
printf("%.1f Celsius equivale a %.1f Fahrenheit\n", celsius, fahrenheit);
return 0;
}
