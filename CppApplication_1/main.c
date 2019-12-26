/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Ejemplo aprenderaprogramar.com
int main() {
    double M = -5.75; int N = 7; double Pi = 3.14159; //Equivale a 180 grados sexagesimales
    printf ("El valor absolucto de M es %g y el de N es %g\n", fabs(M), fabs(N));
    printf ("El coseno de Pi es %g\n", cos(Pi));        printf ("2 elevado al cubo vale %g\n", pow(2, 3));
    printf ("El numero pi redondeado con ceil vale %g\n", ceil(Pi));
    printf ("M redondeado con ceil vale %g\n", ceil(M));
    printf ("El numero pi redondeado con floor vale %g\n", floor(Pi));
    printf ("M redondeado con floor vale %g\n", floor(M)); printf ("-M redondeado con floor vale %g\n", floor(-M));
    printf ("El numero e vale %g\n", exp(1)); printf ("El logaritmo neperiano de e vale %g\n", log(exp(1)));
    printf ("El logaritmo decimal de 100 vale %g\n", log10(100));
    printf ("La raiz cuadrada de 81 vale %g\n", sqrt(81));
    return 0;
    system("pause");
}
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.141592


void dividir()
{
    int a,b,res,resto;
    
    printf("Primer Número\n");
    scanf("%d",&a);
    printf("Segundo Número\n");
    scanf("%d",&b);
    
    res = a/b;
    resto = a%b;
    
    printf("La división ENTERA entre %d y %d es --> %d\n", a, b, res);
    printf("El resto es --> %d", resto);
}

void multiplicar()
{
    int a,b,res;
    
    printf("Primer Número\n");
    scanf("%d",&a);
    printf("Segundo Número\n");
    scanf("%d",&b);
    
    res = a*b;
    
    printf("La multiplicación entre %d y %d es --> %d", a, b, res);
}

void restar()
{
    int a,b,res;
    
    printf("Primer Número\n");
    scanf("%d",&a);
    printf("Segundo Número\n");
    scanf("%d",&b);
    
    res = a-b;
    
    printf("La resta de %d y %d es --> %d", a, b, res);
}

void sumar()
{
    int a,b,res;
    
    printf("Primer Número\n");
    scanf("%d",&a);
    printf("Segundo Número\n");
    scanf("%d",&b);
    
    res = a+b;
    
    printf("La suma de %d y %d es --> %d", a, b, res);
}

void seno()
{
    int a;
    float resultado1;
    
    printf("Introduzca el valor angulo\n");
    scanf("%d",&a);
    
    resultado1=sin(a*PI/180);
    
    printf("El seno de %d es %lf", a, resultado1);
    system("pause");
}

void coseno()
{
    int a;
    float resultado;
    
    printf("Introduzca el valor angulo\n");
    scanf("%d",&a);
    
    resultado=cos(a*PI/180);
    
    printf("El seno de %d es %lf", a, resultado);
    system("pause");
}

void tangente()
{
    int a;
    float resultado;
    
    printf("Introduzca el valor angulo\n");
    scanf("%d",&a);
    
    resultado=tan(a*PI/180);
    
    printf("El seno de %d es %lf", a, resultado);
    system("pause");
}

void arcoseno()
{
    float a, resultado;
    
    printf("Ingrese el valor de x: ");
    scanf("%f", &a);
   
    resultado = asin(a);
    
    printf("\nEl arco seno de %.2f es %.2f",a, resultado);
    system("pause");
}

void arcoCoseno(){
  float a, resultado;
  
  printf("Ingrese el valor de x: ");
  scanf("%f", &a);
  
  resultado = acos(a);
  
  printf("\nEl arco coseno de %.2f es %.2f",a, resultado);
  system("pause");
}

void arcoTangente(){
  float a, resultado;
  
  printf("Ingrese el valor de x: ");
  scanf("%f", &a);
  
  resultado = atan(a);
  
  printf("\nEl arco tangente de %.2f es %.2f",a, resultado);
  system("pause");
}

void trigonometria()
{
    int opc;
    float res;
    
    printf("¿Que desea realizar:\n");
    printf("1.- Seno\n");
    printf("2.- Coseno\n");
    printf("3.- Tangente\n");
    printf("4.- Arco seno\n");
    printf("5.- Arco coseno\n");
    printf("6.- Arco tangente\n");
    scanf("%d",&opc);
    
    switch(opc)
    {
        
        case 1:
           
            seno();
            
        break;
        
        
        case 2:
            
            coseno();
            
        break;
        
        
        case 3:
            
            tangente();
            
        break;
        
        case 4:
            
            arcoseno();
            
        break;
        
        case 5:
            
            arcoCoseno();
            
        break;
        
        case 6:
            
            arcoTangente();
            
        break;
                
                
        
    }
    
/*    res=sen(a*PI/180);
    
    printf("El seno de %d es %lf", a, res);
    system("pause");*/
}



int main() 
{
    char n;
    
    printf("¿Qué quieres hacer?\n");
    
    //MENU PRINCIPAL
    
    scanf("%c",&n);
            
    switch(n)
    {
        case 's':
        case 'S': sumar();              // FUNCION SUMA
        break;
        
        case 'r':
        case 'R': restar();             // FUNCION RESTA
        break;
        
        case 'd':
        case 'D': dividir();            // FUNCION DIVIDIR
        break;
        
        case 'm':
        case 'M': multiplicar();        // FUNCION MULTIPLICAR
        break;
        
        case 't':
        case 'T': trigonometria();         
        break;
    }
    return 0;
}