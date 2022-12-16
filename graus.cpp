#include <stdio.h>

float fahrenheit_para_celsius(float fahrenheit) {
  return (fahrenheit - 32) * 1.8;
}

float celsius_para_fahrenheit(float celsius) {
  return celsius * 1.8 + 32;
}

int main() {
  
  int op;
  float fahrenheit, celsius;

  
	printf("Conversor\n");

	printf("Escolha uma opção:\n");
	printf("\n1 - fahrenheit para celsius");
	printf("\n2 - celsius para fahrenheit\n");
	scanf("%d", &op);
	
	printf("Insira a temperatura");
  
  if (op == 1){
	printf(" em Celsius: ");
	scanf("%f", &celsius);
	float fahrenheit_para_celsius(float fahrenheit);
	printf("%.2f graus Celsius = %.2f graus Fahrenheit\n", celsius, fahrenheit);
  } else {
  	printf(" em Fahrenheit: ");
	scanf("%f", &fahrenheit);
	float celsius_para_fahrenheit(float celsius);
	printf("%.2f graus Fahrenheit = %.2f graus Celsius\n", celsius, fahrenheit);
  }

  return 0;
}
