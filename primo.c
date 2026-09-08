#include <stdio.h>
int main() {
int numero, i;
int eh_primo = 1;
printf("Digite um número inteiro: ");
scanf("%d", &numero);
if (numero < 2) {
eh_primo = 0;
} else {
for (i = 2; i < numero; i++) {
if (numero % i == 0) {
eh_primo = 0;
break;
}
}
}
if (eh_primo)
printf("%d é primo!\n", numero);
else
printf("%d não é primo.\n", numero);
return 0;
}
