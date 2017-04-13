/*
Mayor.cpp
Diego G Paz
12/4/2017.
Se ingresan 2 numeros y se imprime en pantalla cual de los dos es mayor
*/

#include <iostream>

int main()
{
    {
    float a, b, mayor;                         /*declaracion de las variables a utilizar en el proceso del programa*/
    std::cout << "Este programa elige entre dos numeros, cual es el mayor \n";       /*Se pide el ingreso de los numeros reales*/
    std::cout << "Ingrese un numero: ";
    std::cin >> a;
    std::cout << "Ingrese otro numero: ";
    std::cin >> b;
    if (a>b)                                   /*Se comparan los valores ingresados y se imprime el numero mayor*/
        {mayor = a;
        std::cout<< "El numero "<<mayor<<" es el mayor entre "<<a<<" y "<<b<<".";
        }
    else if (a<b)
        {
        mayor = b;
        std::cout<< "El numero "<<mayor<<" es el mayor entre "<<a<<" y "<<b<<".";
        }
    else{
        std::cout<< "Los numeros "<<a<<" y "<<b<<" son iguales.";
        }
    }
}
