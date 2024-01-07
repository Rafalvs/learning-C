/*
Exercícios
_______________________________________________________________________________________________________________________________________________
Escreva uma função que printa 'N' se for negativo ou 'P' se o numero recebido como parametro for positivo. */

#include <unistd.h>

void m_is_negative(int n);
void m_put_char(char c);

int main(void)
{
    int n;
    n = -696;
    m_is_negative(n);
    return 0;
}

void m_is_negative(int n)
{
    if (n > 0)
    {
        m_put_char('P');
    }
    else
    {
        m_put_char('N');
    }

}

void m_put_char(char c)
{
    write(1, &c, 1);
} 

/*
_______________________________________________________________________________________________________________________________________________
Escreva uma função que printe todas as letras minúsculas do alfabeto. */

#include <unistd.h>

void print_alphabet(void);
void m_put_char(char c);

int main (void)
{
    print_alphabet();
    return (0);
}

void print_alphabet(void)
{
    char letra;
    letra = 97;
    while (letra <= 'z')
    {
        m_put_char(letra);
        letra++;
    }
}

void m_put_char(char c)
{
    write(1, &c, 1);
}

/*
_______________________________________________________________________________________________________________________________________________
Usando single e multiline comments, explique o funcionamento do programa a seguir. */

#include <stdio.h>

int main(void)
{
    int a;

    a = 0;
    while (a < 1000)
    {
        a++;                /* 1º loop: a = 1 */            /* 2º Loop: 100 + 1 */
        a += 4;             /* a = 1 + 4 */                 /* 101 + 4 */
        a = a *20;          /* a = 5 x 20, ou seja 100 */   /* 105 x 20 */
        printf("%d\n", a);
    }
    return (0);
}
 
/*
_______________________________________________________________________________________________________________________________________________
Complete a função para que o programa funcione. Qualquer caractere que não seja uma letra minúscula, não é considerado minúsculo. */

#include <stdio.h>

int is_lower(char meleon)
{
    if (meleon >= 97 && meleon <= 122)
    {
        return 0;
    }
        return 1;
}

int main(void)
{
    char    mander;
    int        ret;

    printf("Type a letter!\n");
    mander = getchar();
    ret = is_lower(mander);
    if (ret == 0)
    {
        printf("%c is lowercase.", mander);
    }
    else
    {
        printf("%c is NOT lowercase.", mander);
    }
    return (0);
}
 
/*
_______________________________________________________________________________________________________________________________________________
Escreva uma função que retorna 0 caso o parametro passado seja uma letra maiúscula, e 1 em qualquer outro caso. */

#include <unistd.h>

int is_upper(char key);
void m_putchar(char c);

int main (void)
{
    char letra;
    letra = 'A';
    letra = is_upper(letra);
    if (letra == 0)
    {
        m_putchar('0');    
    }
    else
    {
        m_putchar('1');
    }
}

int is_upper(char key)
{
    if (key >= 65 && key <= 90)
    {
    return 0;
    }
    return 1;
}

void m_putchar(char c)
{
    write(1, &c, 1);
}
 
/*
_______________________________________________________________________________________________________________________________________________
Escreva uma função que retorna 0 caso o parametro passado seja um número, e 1 em qualquer outro caso. */

#include <unistd.h>

int is_number(char key);
void m_putchar(char c);

int main (void)
{
    char numb;
    numb = 'a';
    numb = is_number(numb);
    if (numb == 0)
    {
        m_putchar('0');    
    }
    else
    {
        m_putchar('1');
    }
}

int is_number(char key)
{
    if (key >= 48 && key <= 57')
    {
    return 0;
    }
    return 1;
}

void m_putchar(char c)
{
    write(1, &c, 1);
}
 
/*
_______________________________________________________________________________________________________________________________________________
Escreva uma função que retorna 0 caso o parametro passado seja um caractere alfanumerico (a-z, A-Z, 0-9), e 1 em qualquer outro caso. */

#include <unistd.h>

int is_alpha(char key);
void m_putchar(char c);

int main (void)
{
    char caractere;
    caractere = '!';
    caractere = is_alpha(caractere);
    if (caractere == 0)
    {
        m_putchar('0');    
    }
    else
    {
        m_putchar('1');
    }
}

int is_alpha(char key)
{
    if (key >= 48 && key <= 57 || key >= 65 && key <= 90 || key >= 97 && key <= 122)
    {
    return 0;
    }
    return 1;
}

void m_putchar(char c)
{
    write(1, &c, 1);
}

/*
_______________________________________________________________________________________________________________________________________________
Escreva um programa que faça uma escada piramidal da esquerda para direita. Ex:
        *
       **
      ***
     ****
    *****     		*/
#include <stdio.h>

int piramide (int n);

int main ()
{
    int height;
    height = 10;
    piramide (height);
    return 0;
}

int piramide (int n)
{
   int i = 1;
   
   while (i != n)
    {
         int spaces = n - i;
         while (spaces > 1)
        {
            printf (" ");
            spaces--;
        }
         int hashes = i;
         while (hashes > 0)
        {
            printf ("#");
            hashes--;
        }
        printf("\n");
        i++;
   }
}

/*
_______________________________________________________________________________________________________________________________________________
variação exercício acima com o outro lado da piramide
        *  *
       **  **
      ***  ***
     ****  ****
    *****  ***** 
*/

#include <stdio.h>

int piramide (int n);

int main ()
{
    int height;
    height = 5;
    piramide (height);
    return 0;
}

int piramide (int n)
{
   int i = 1;
   
   while (i != n)
    {
         int spaces = n - i;
         while (spaces > 1)
        {
            printf (" ");
            spaces--;
        }
         int hashes = i;
         while (hashes > 0)
        {
            printf ("#");
            hashes--;
        }
        printf("  ");
        hashes = i;
         while (hashes > 0)
        {
            printf ("#");
            hashes--;
        }
        printf("\n");
        i++;
   }
}

/*
_______________________________________________________________________________________________________________________________________________
Escreva um programa que receba um número, e usando hashtags printe um "retângulo" vazio no terminal.
por exemplo: parametro = 5:

#####
#   #
#   #
#   #
#   #
#   #
#####

*/

#include <stdio.h>

int bottop (int p);

int main(void)
{
    int size, col, row;
    col = 0;
    row = 0;
    printf("Digite um numero que sera o tamanho do retangulo: \n");
    scanf("%d", &size);
    printf("\n");
    
    bottop(size);
 
        while(col < size)
        {
            printf("#");
            row = 0;
            while(row < size - 2)
            {
                printf(" ");
                row++;
            }
            printf("#");
            printf("\n");
            col++;
        }
    
    bottop(size);
    printf("\n");
    return 0;
}

int bottop (int p)
{
    int i;
    i = 0;
    while (i < p)
    {
        printf("#");
        i++;
    }
    printf("\n");
    return 0;
}

/*
_______________________________________________________________________________________________________________________________________________
Escreva um programa que printe um retângulo, que receba parametros de largura e altura
ex: X = 2, Y = 5.

*/

#include <stdio.h>

int main (void)
{
    int x, y;
    int largura, altura;
    x = 10;
    y = 5;
    
    largura = 0;
    altura = 0;
    
    printf("/");
    while(largura < x)
    {
        printf("-");
        largura++;
    }
    printf("\\");
    printf("\n");
    
    largura = 0;
    
    while(altura < y)
        {
            printf("|");
            largura = 0;
            while(largura < x)
            {
                printf(".");
                largura++;
            }
            printf("|");
            printf("\n");
            altura++;
        }

    largura = 0;
    printf("\\");
    while(largura < x)
    {
        printf("-");
        largura++;
    }
    printf("/");
    printf("\n"); 
}

/* 


Daqui pra baixo são algumas atividades antigas da faculdade, fiz no terceiro semestre,
talvez possuam erros, identaçoes terriveis, mas nao vou ficar refazendo


*/

#include<stdio.h>
int main(){
	int nota[10],i;
	for(i=0;i<10;i++){
		printf("%d - Digite as notas: ",i+1);
		scanf("%d",&nota[i]);
	}
	
	printf("Notas maiores que 6: \n");
	for(i=0;i<10;i++){
		if(nota[i]>=6){
			printf("%d\n",nota[i]);
		}
	}
}

//

#include <stdio.h>
#define max 100
int main() {
	int n,i,vez,j;
	float vet[max];
	printf("Quantos elementos tera o vetor: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("%d - Digite seus numeros reais: ",i+1);
		scanf("%f",&vet[i]);
	}
	for(i=0;i<n;i++){
		vez=1;
		j=i+1;
		while(j<n){
			if(vet[j] != vet[i]){
				j++;
			}else{
				vez++;
				n--;
				vet[j] = vet[n];
			}
		}
   		printf("%.2f ocorre %d vezes\n", vet[i], vez);
	}
	return 0;
}

//

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
main(){
    int x,y,tam;
    float vet[10], quad[10];
    for (x=0; x<=9; x++)
 {
    printf("Digite o numero %d: ",x+1);
    scanf("%f", &vet[x]);
    quad[x] = pow(vet[x],2);
 }
    printf("\n\nVetor:    ");
    for (x=0; x<=9;x++)
     printf("%4.0f",vet[x]);
      printf("\n\n");
       printf("Quadrado: ");

    for (x=0; x<=9;x++)
    printf("%4.0f",quad[x]);
    printf("\n\n");
    system("pause");
    return 0;
}

//

#include <stdio.h>
#include <stdlib.h>
int main(){
    int a, maior=0, menor=0;
    float valor[15];

    printf("digite 15 valores: ");
    printf("\n");
    for (a=0;a<15;a++){
      printf("valor %d: ", a+1);
      scanf("%f", &valor[a]);
      if(a==0){maior=valor[a];menor=valor[a];}
      if(valor[a]>maior){
        maior=valor[a];
      }
      else{
        if(valor[a]<menor){
            menor=valor[a];
        }
      }
    }
    printf("\nSeu maior valor foi: %d\n", maior);
    printf("\nSeu menor valor foi: %d\n\n", menor);
    system("pause");
    return 0;
}

//

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vet[9], i, p=0, n=0;
    for(i=0;i<=9;i++)
{
    printf("Informe o valor do vetor %i: ",i+1);
    scanf("%i", &vet[i]);
    if(vet[i]>0)
    p = p +vet[i];
    if(vet[i]<0,n);
}
    printf("Soma dos numeros positivos = %d\n", p);
    printf("Quantidade de numeros negativos = %d\n", n);
    return 0;
}

// bhaskara

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int a,b,c,d,x1,x2;
printf("A:");
scanf("%d",&a);
printf("B:");
scanf("%d",&b);
printf("C:");
scanf("%d",&c);
d=pow(b,2)-(4*a*c);
printf("Delta=%d\n",d);
if(d<0)
printf("Nao pertence aos numeros reais");
else
{
	x1=(-b+sqrt(d))/(2*a);
	x2=(-b-sqrt(d))/(2*a);
	printf("X1=%d\n",x1);
	printf("X2=%d\n",x2);
}
getch();
}

// media

#include<stdio.h>
#include<conio.h>
int main()
{
	float n1,n2,n3,maior,menor,media;
	printf("Valor 1:");
	scanf("%f",&n1);
	printf("Valor 2:");
	scanf("%f",&n2);
	printf("Valor 3:");
	scanf("%f",&n3);
	media=(n1+n2+n3)/3;
	printf("Media =%.2f\n",media);
//achar menor
	if (n1<=n2 && n1<=n3)
		menor=n1;
	else if(n2<=n1 && n2<=n3)
		menor=n2;
	else
		menor=n3;
	//achar maior
		if (n1>=n2 && n1>=n3)
		maior=n1;
	else if(n2>=n1 && n2>=n3)
		maior=n2;
	else
		maior=n3;
//mostrar menor e maior
	printf("Menor=%.2f\n",menor);
	printf("Maior=%.2f\n",maior);
}

// triangulo

#include<stdio.h>
#include<conio.h>
int main()
{
	int triangulo;
	printf("Quantos lados iguais tem seu triangulo?");
	scanf("%d",&triangulo);
	if (triangulo>2 && triangulo<4)
	printf("Seu triangulo e equilatero");
	else if (triangulo==2)
	printf("Seu triangulo e isosceles");
	else if (triangulo==0)
	printf("Seu triangulo e escaleno");
	else
	printf("Numero invalido, por favor, repita o processo");
	getch();
}

//

