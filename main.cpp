//*********************************************************************************
//
// siempre usar command + R para que compile de la
// FORMA QUE DEBERÍA COMPILAR COMO ODIO VIUSAL STUDIO
//
// Este código es simplemente de prueba, en este se explican varias de las cosas
// que estámos viendo, cabe mencionar que este código fue creado por Alan Patricio
// González Bernal y que NO ACEPTA que este código se filtre a otras personas a
// excepción de las personas que el creador especifique.
//
// Muchas partes del código estarán cortadas por estas entradas de comentarios,
// simplemente son especificaciónes de lo que hará cada parte del código.
//
// En este punto simplemente se demuestra la sintax y el funcionamiento del cin y
// el cout. El #include <iostream> y el using namepsace std; son prácticamente
// obligatorios para el correcto funcionamiento del código.
//
//*********************************************************************************
#include <iostream>
#include <cmath>
#include <math.h>

#include "first.h"

using namespace std;

int main(){

cout << "Hola, ya extrañaba volver" << endl;

int a;

cout << "Por favor, ingrese un número: ";

cin >> a;

cout << "El número ingresado es: " << a << endl;


//*********************************************************************************
//
// De las líneas 44 - 48, el ciclo for lo que hará es que contará de 0 al número
// que haya ingresado el usuario, simplemente es una manera de contar cíclicamente.
//
//@param un entero
//@return un conteo
//*********************************************************************************

for(int i; i < a+1; i++){

    cout << i << endl;

}

//*********************************************************************************
//
// Ahora, lo que se hará es un código ejemplificando como podría funcionar en este
// caso la fórmula general. Primero se pedirá otros 2 números, luego se aplicará
// la fórmula, se harán comentarios simples a lo largo del mismo.
//
//@param 2 enteros más
//@return resultados de la ecuación
//*********************************************************************************


int b, c; // Entero sin decimales.
double x1, x2; // Entero con números decimales.

cout << "ingresa 2 números más, se hará una ecuación de fórmula general con esos" 
<< " valores\n";

cin >> b;
cin >> c;

cout << sqrt(a) << endl;


x1 = -b*(-sqrt((b^2)-4*a*c))/(2*a); 
x2 = -b*(+sqrt((b^2)-4*a*c))/(2*a); 

cout << "x1 = " << x1 << "\nx2 = " << x2 << endl;

//*********************************************************************************
//
// Ahora, se utilizará un .h, a partir de aquí vaya al .h de su elección, tendrá
// la misma explicación que los demás .h (si es que hay otros). Al inicio del
// código está el #include <first.h> para darle a entender al main que necesitará
// los datos del .h
//
// Para llamar un método del .h, se hace como se muestra abajo.
//
//*********************************************************************************

modifUno();

return 0;
}