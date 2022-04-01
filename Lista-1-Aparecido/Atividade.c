#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale (LC_ALL, "Portuguese");
	
	/* --------------------	 Ex:1 --------------------	 
	double B, H, A;
	
	printf("Valor da base (cm): ");
	scanf("%lf", &B);
	
	printf("Valor da altura (cm): ");
	scanf("%lf", &H);
	
	A = (B * H)/2;
	printf("\nArea do triangulo =  %.2f cm", A);
	*/
	
	/* --------------------	 Ex:2 --------------------	 

	double n1, n2, soma, mult, div, sub;
	
	printf("Número 1: ");
	scanf("%lf", &n1);
	
	printf("Número 2: ");
	scanf("%lf", &n2);
	
	soma = n1 + n2;
	mult = n1 * n2;
	div = n1 / n2;
	sub = n1 - n2;
	
	printf("\n\nSoma: %.2f + %.2f = %.2f ", n1, n2, soma);
	printf("\n\nSubtração: %.2f - %.2f = %.2f ", n1, n2, sub);
	printf("\n\nMultiplicação: %.2f * %.2f = %.2f ", n1, n2, mult);
	printf("\n\nDivisão: %.2f / %.2f = %.2f ", n1, n2, div);
	*/
		/* --------------------	 Ex:3 --------------------	 
	double salarioFixo, salarioVariavel, comissao = 0.2, totalVendas, salarioTotal; 
	char nome[40];
	
	printf("Seu nome: ");
	scanf("%s",&nome);
	
	printf("\nSeu salário fixo: ");
	scanf("%lf",&salarioFixo);
	
	printf("\nTotal de vendas no mês: ");
	scanf("%lf",&totalVendas);

	salarioVariavel = totalVendas * comissao;
	salarioTotal = salarioFixo + salarioVariavel;
	
	printf("\n\nSeu nome: %s ", nome);
	printf("\n\nSeu salario fixo: %.0f ", salarioFixo);
	printf("\n\nTotal vendas no mês: %.2f ", totalVendas);
	printf("\n\nComissão no mês: R$ %.2f ", salarioVariavel);
	printf("\n\nSalario total no mês: R$ %.2f ", salarioTotal);
	
	*/
	
	/* --------------------	 Ex:4 --------------------	
	char nome[20];
	double n1, n2, n3, p1 = 2, p2 = 4, p3 = 6, mediaPonderada;	
	
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	
	printf("Nota 1: ");
	scanf("%lf", &n1);
	
	printf("Nota 2: ");
	scanf("%lf", &n2);
	
	printf("Nota 3: ");
	scanf("%lf", &n3);
	
	printf("\nPeso 1 = %.2f",p1);
	printf("\nPeso 2 = %.2f",p2);
	printf("\nPeso 3 = %.2f",p3);
	
	mediaPonderada = ((n1*p1)+(n2*p2)+(n3*p3))/(p1+p2+p3);
	
	printf("\n\nMédia Ponderada: %.2f", mediaPonderada);
	
	*/
	
	/* --------------------	 Ex:5 --------------------
	int n1, n2; 
	
	printf("Numero 1: ");
	scanf("%d", &n1);
	
	printf("Numero 2: ");
	scanf("%d", &n2);
	
	if (n1 == n2) {

		printf ("%d igual a %d", n1, n2);
		return 1;
	}
	
	if (n1>n2) {
	
		printf ("%d Maior que %d", n1, n2);
		return 2;
		}
	
	else {
	
		printf ("%d Menor que %d", n1, n2);
		return 3;
	}
	*/
	
	/* --------------------	 Ex:6 --------------------
	int n1;
	
	printf("Numero 1: ");
	scanf("%d", &n1);
	
	if ((n1>=200) && (n1<=300)) {
		printf ("Numero %d, está entre 200 e 300", n1);
		return 1;
	}
	
	else {
		printf ("Numero %d, NÃO está entre 200 e 300", n1);
		return 2;
	}
	*/
	
	
	/* --------------------	 Ex:7 --------------------
	double nCopias, valorSemDesconto = 0.5, valorComDesconto = 0.3, valorPagar;
	
	printf ("Número de cópias: ");
	scanf ("%lf", &nCopias);
	
	if (nCopias>=200) {
		valorPagar = nCopias * valorComDesconto;
		printf ("\n\nPreço por cópia: R$ %.2f", valorComDesconto);
		printf ("\n--------------------");
		printf ("\nValor a pagar: R$ %.2f", valorPagar);
		
		
	
	}
	
	else {
		valorPagar = nCopias * valorSemDesconto;
		printf ("\n\nPreço por cópia: R$ %.2f", valorSemDesconto);
		printf ("\n--------------------");
		printf ("\nValor a pagar: R$ %.2f", valorPagar);
		
		return 1;
	}
	
	*/
	
	
	/* --------------------	 Ex:8 --------------------
	int idade;
	
	printf ("Idade: ");
	scanf ("%d", &idade);
	
	if (idade <= 13) {
		printf ("\nCategoria: Infantil");
	}
	else if (idade <= 17) {
		printf ("\nCategoria: Juvenil");
	}
		
	else {
		printf ("\nCategoria: Senior");

	}	
	*/
	
	/* --------------------	 Ex:9 --------------------
	
	int n1, n2;
	
	printf ("Número 1: ");
	scanf ("%d", &n1);
	
	printf ("Número 2: ");
	scanf ("%d", &n2);
	
	if (n1>n2) {
		printf ("\nNúmero %d maior que numero %d", n1, n2);
	}
	
	else if (n1==n2){

		printf ("Escolha numeros distintos");
	}
	else
		printf ("\nNúmero %d maior que numero %d", n2, n1);
	
	
	*/
	
	/* --------------------	 Ex:10 --------------------
	double n1, n2, n3, media;
	
	printf ("----- Calculadora Média Aritimética -----\n");
	
	printf ("\nNumero 1: ");
	scanf ("%lf", &n1);
	
	printf ("\nNumero 2: ");
	scanf ("%lf", &n2);
	
	printf ("\nNumero 3: ");
	scanf ("%lf", &n3);
	
	media = (n1+n2+n3)/3;
	
	printf ("\nMédia = %.2f", media);
	
	*/
	
	
		/* --------------------	 Ex:11 --------------------
	int n;
	
	printf ("Numero: ");
	scanf ("%d", &n);
	
	if (n%2 == 0)
		printf ("\nNumero %d é par", n);
	else 
		printf ("\nNumero %d é impar", n);
	*/
	
		/* --------------------	 Ex:12 --------------------
	double n1, n2, n3, media;
	char name;
	
	printf ("Digite seu nome: ");
	scanf ("%s", &name);
	
	printf ("Nota 1: ");
	scanf ("%lf", &n1);
	
	printf ("Nota 2: ");
	scanf ("%lf", &n2);
	
	printf ("Nota 3: ");
	scanf ("%lf", &n3);
	
	media = (n1+n2+n3)/3;
	
	printf ("\n\n %c essa é sua média: %.2f", name, media);
	
	*/
	
	/* -------------------- Ex:13 --------------------
	int n;
	
	printf ("Numero: ");
	scanf ("%d", &n);
	
	if ((n >= 100) && (n <= 200)) 
		printf ("Numero: %d está entre 100 e 200", n);
	else 
			printf ("Numero: %d NÃO está entre 100 e 200", n);
		
*/
	
	
		/* --------------------	Ex:14 --------------------
	double tempC, tempF;	
	
	printf ("Temperatura (c°): " );
	scanf ("%lf", &tempC);
	
	
	
	tempF = (9 * tempC + 160)/5;
	
	printf ("\n\n%.2f Graus = %.2f Fahrenheit", tempC, tempF);
	*/
	
	
	/* --------------------	Ex:15 --------------------
	double tempC, tempF;	
	
	printf ("Temperatura (F): " );
	scanf ("%lf", &tempF);
	
	
	
	tempC = ((tempF - 32) * 5)/9;
	
	printf ("\n\n%.2f Fahrenheit = %.2f Graus", tempF, tempC);
	
	*/
/*
	 --------------------Ex:16 --------------------
	
	    int a, b, c;
    printf("Digite 3 numeros:\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > c) {
        int tmp = c;
        c = a;
        a = tmp;
    }
    if (a > b) {
        int tmp = b;
        b = a;
        a = tmp;
    }
    if (b > c) {
        int tmp = c;
        c = b;
        b = tmp;
    }
    printf("%d %d %d", a, b, c);
*/
	/*
	-------------------- Ex:17 --------------------
	
	double n1, n2, n3, n4, media;
    printf("Digite suas 4 notas:\n");
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
	
	media = (n1+n2+n3+n4)/4;
	
	printf("Sua média: %.2f", media);
	
	*/
	
	/* 	--------------------Ex:18--------------------
	int n1, n2, i;
	
	printf("Digite 2 numeros:\n");
	scanf ("%d %d", &n1, &n2);
	
	if (n1 >n2) {
		i = n1-n2;
		printf ("%d - %d = %d", n1, n2, i);
		
	}
	else {
	
		i = n2-n1;
		printf ("%d - %d = %d", n2, n1, i);
	}
	
	*/
	
	/* --------------------Ex:19--------------------
	int i=1;
	
	for (i;i<=10;i++)
		printf ("%d\n", i);
	
	*/
	
	int i=100;
	
	for (i;i>=1;i--)
		printf ("%d\n", i);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
