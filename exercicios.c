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