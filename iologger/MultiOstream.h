#ifndef MULTIOSTREAM_H
#define MULTIOSTREAM_H

#include <iostream>
#include <vector>

class MultiOstream {
private:
    std::vector<std::ostream*> streams; // Lista de flujos para la salida
    std::ostream* logStream = nullptr;  // Identificar el flujo de log (archivo)
    bool isNewLine = true;              // Control para agregar el salto de línea solo al inicio

public:
    // Agregar un flujo a la lista
    void addStream(std::ostream& stream) {
        streams.push_back(&stream);
    }

    // Agregar el flujo de log para formato especial
    void setLogStream(std::ostream& stream) {
        logStream = &stream;
        addStream(stream); // También añadir a la lista de flujos
    }

    // Sobrecargar el operador '<<' para datos genéricos
    template <typename T>
    MultiOstream& operator<<(const T& data) {
        for (auto stream : streams) {
            if (stream == logStream && isNewLine) {
                (*stream) << std::endl; // Añadir salto de línea al inicio
            }
            (*stream) << data; // Escribir el dato en cada flujo
        }
        isNewLine = false; // Después del primer dato, no es nueva línea
        return *this;
    }

    // Sobrecargar el operador '<<' para manipuladores (como std::endl)
    MultiOstream& operator<<(std::ostream& (*manip)(std::ostream&)) {
        for (auto stream : streams) {
            (*stream) << manip; // Aplicar el manipulador en cada flujo
        }
        isNewLine = true; // Considerar nueva línea después de manipuladores como std::endl
        return *this;
    }
};

#endif // MULTIOSTREAM_H
