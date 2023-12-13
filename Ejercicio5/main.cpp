#include <iostream>

class Estudiante {
private:
    std::string nombre;
    int edad;
    float promedio;

public:
    Estudiante(std::string n, int e, float p) : nombre(n), edad(e), promedio(p) {}
