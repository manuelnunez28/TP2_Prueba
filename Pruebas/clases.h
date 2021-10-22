#include <iostream>
using namespace std;
template <typename tipo>
class Vector
{
private:
    long long int largo_actual;
    long long int espacio_reservado; //largo_max;
    tipo *datos;                     //Template
public:
    Vector()
    {
        std::cout << "Lo cree" << std::endl;
        datos = new tipo[1];
        largo_actual = 1;
        espacio_reservado = 1;
    };
    ~Vector()
    {
        delete[] datos;
        std::cout << "Lo destrui" << std::endl;
    };
    //virtual void mostrar() = 0; //Fuerzo a escribir definición
    //void agrandar();
    //void mostrar(type datos);
};

// Vector::vector_casilleros