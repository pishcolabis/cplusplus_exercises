#include <iostream>
#include <string>

// Declaración de una clase en C++
class Persona {
private:
    // Propiedades privadas (solo accesibles dentro de la clase)
    std::string nombre;
    int edad;

protected:
    // Propiedades protegidas (accesibles en la clase y sus derivadas)
    std::string nacionalidad;

public:
    // Propiedades públicas (accesibles desde fuera de la clase)
    int id;

    // Constructor por defecto
    Persona() : nombre("Sin nombre"), edad(0), nacionalidad("Desconocida"), id(0) {}

    // Constructor sobrecargado
    Persona(std::string nombre, int edad, std::string nacionalidad, int id)
        : nombre(nombre), edad(edad), nacionalidad(nacionalidad), id(id) {}

    // Constructor que usa this para inicializar propiedades
    // This es un puntero implícito que apunta al objeto actual
    // Se usa para diferenciar entre los parámetros y las propiedades de la clase
    // En este caso, se usa para inicializar las propiedades de la clase con los valores
    // pasados al constructor.
    // Este constructor es útil cuando se quiere crear un objeto con valores específicos.
    // Por ejemplo, si se quiere crear una persona con un nombre, edad y nacionalidad
    // específicos, se puede usar este constructor.
    // Este constructor también asigna un ID por defecto de 0.
    Persona(std::string nombre, int edad, std::string nacionalidad) {
        this->id = 0;
        this->nombre = nombre;
        this->edad = edad;
        this->nacionalidad = nacionalidad;
    }

    // Getter para nombre
    std::string getNombre() const {
        return nombre;
    }

    // Setter para nombre
    void setNombre(const std::string& nuevoNombre) {
        nombre = nuevoNombre;
    }

    // Getter para edad
    int getEdad() const {
        return edad;
    }

    // Setter para edad
    void setEdad(int nuevaEdad) {
        edad = nuevaEdad;
    }

    // Método público
    void mostrarInformacion() const {
        std::cout << "ID: " << id << "\nNombre: " << nombre
                  << "\nEdad: " << edad << "\nNacionalidad: " << nacionalidad << std::endl;
    }
};

// Herencia: Estudiante hereda de Persona
class Estudiante : public Persona {
private:
    std::string carrera;

public:
    // Constructor por defecto
    Estudiante() : Persona(), carrera("Sin carrera") {}

    // Constructor sobrecargado
    Estudiante(std::string nombre, int edad, std::string nacionalidad, int id, std::string carrera)
        : Persona(nombre, edad, nacionalidad, id), carrera(carrera) {}

    // Getter y Setter para carrera
    // El uso de const en el getter indica que no modificará el objeto
    // y evita posibles errores al intentar modificarlo accidentalmente.
    std::string getCarrera() const {
        return carrera;
    }

    // El setter permite cambiar la carrera del estudiante.
    // Se usa una referencia constante para evitar copias innecesarias y mejorar el rendimiento.
    void setCarrera(const std::string& nuevaCarrera) {
        carrera = nuevaCarrera;
    }

    // Sobrescribir método de la clase base
    void mostrarInformacion() const {
        Persona::mostrarInformacion();
        std::cout << "Carrera: " << carrera << std::endl;
    }
};

int main() {
    // Instanciación de objetos
    Persona p1;
    Persona p2("Juan", 30, "Mexicana", 1);

    p1.setNombre("Ana");
    p1.setEdad(25);
    p1.id = 2;

    p1.mostrarInformacion();
    std::cout << std::endl;
    p2.mostrarInformacion();

    std::cout << "\n--- Herencia ---\n";
    Estudiante e1("Luis", 20, "Argentina", 3, "Ingeniería");
    e1.mostrarInformacion();

    return 0;
}

/*
Resumen:
- Las clases se declaran con la palabra clave 'class'.
- Los miembros pueden ser privados, protegidos o públicos.
- Los constructores inicializan objetos; pueden ser sobrecargados.
- Los getters y setters permiten acceder/controlar propiedades privadas.
- La herencia se declara con ':' y el tipo de acceso (public, protected, private).
- Los métodos pueden ser sobrescritos en clases derivadas.
*/