//*********************************************************************************
//
// Bueno, ahora sí viene lo complejamente divertido... Esto es lo que se usa en POO
// lo que se creó (este .h) es una nueva clase, o si quieres conocerlo como objeto,
// también es correcto.
//
// En este caso habrá muchas más interrupciónes a lo largo del código para explicar
// qué es lo que sucede.
//
// Principalmente el #ifndef, #define y #endif, son obligatorios en los .h, como el
// #include iostream.
//
//*********************************************************************************

#ifndef FIRST_H
#define FIRST_H

#include <iostream>
using namespace std;

//*********************************************************************************
//
// Lo que está abajo es la primera clase/objeto que creamos. Tiene 3 secciónes, la
// pública (las clases hijas pueden modificarla), la clase protegida (las clases
// hijas pueden ver el contenido más no editarlo) y por último la clase privada (
// las clases hijas no pueden ni ver el contenido de la variable).  
//
//*********************************************************************************

class Primero{
public:
    int uno = 10;
    Primero();
    ~Primero();
    
private:
    string dos;
protected:
    string tres;
};

//*********************************************************************************
//
// Se crea un constructor y un destructor del objeto en cuestión, en esta ocasión
// no lo usarémos, pero son incluso parte del formato.
//
//*********************************************************************************

Primero::Primero(){

}

Primero::~Primero(){

}

//*********************************************************************************
//
// Acabamos de crear métodos nuevos, en estos podemos hacer literalmente el proceso
// que querramos, como si fuera el main, solo que de esta manera podemos acortar
// código y la carga que tendría el main
//
//*********************************************************************************

void modifUno(){

    int a;
    cout << "Dame un valor numérico por favor (soy un método de First.h xd): ";
    cin >> a;
    cout << "El valor que me entregaste es: " << a;

};

#endif // FIRST_H