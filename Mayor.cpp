/*
Created by Diego on 12/4/2017.
Se ingresan 2 numeros y se imprime en pantalla cual de los dos es mayor
*/

#include <iostream>

int main()
{
    {
    float a, b;                         /*declaracion de las variables a utilizar en el proceso del programa*/
    std::cout << "Este programa elige entre dos numeros, cual es el mayor \n";       /*Se pide el ingreso de los numeros enteros*/
    std::cout << "Ingrese un numero: ";
    std::cin >> a;
    std::cout << "Ingrese otro numero: ";
    std::cin >> b;
    if (a>b)
        {
        std::cout<< "El numero "<<a<<" es mayor a "<<b<<".";
        }
    else if (a<b)
        {
        std::cout<< "El numero "<<b<<" es mayor a "<<a<<".";
        }
    else{
        std::cout<< "Los numeros "<<a<<" y "<<b<<" son iguales.";
        }
    }
}
