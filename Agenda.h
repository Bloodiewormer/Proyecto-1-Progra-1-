#pragma once
#include <iostream>
#include "Cita.h"

class Agenda {
private:
    Cita** citas; // Vector de punteros a Cita
    int cantidad; // Número de citas en la agenda
    int capacidad; // Capacidad de la agenda

public:
    // Constructor que inicializa la agenda con una capacidad dada
    Agenda(int capacidad);

    // Destructor que libera la memoria utilizada por la agenda
    ~Agenda();

    // Método para agendar una cita en un día y hora específicos
    bool agendarCita(Cita* cita, int dia, int hora);

    // Método para cancelar una cita en un día y hora específicos
    bool cancelarCita(int dia, int hora);

    // Método para obtener una cita en una posición específica
    Cita* obtenerCita(int dia, int hora);

    // Método que retorna una representación en string de la agenda
    std::string toString() const;
};

// Usamos Index para representar la posición de la Cita en el array
// index = dia * 12 + hora  // El 12 es el número de horas en un día
/*
 hr = horas - 8     index = dia * 12 + hr

+----+--------+-----+-----+-----+-----+-----+-----+-----+
| hr | Horas  |  0  |  1  |  2  |  3  |  4  |  5  |     |
|    |        | Lun | Mar | Mie | Jue | Vie | Sab |     |
+----+--------+-----+-----+-----+-----+-----+-----+-----+
|  0 | 08:00  |  0  | 12  | 24  | 36  | 48  | 60  |     |
|  1 | 09:00  |  1  | 13  | 25  | 37  | 49  | 61  |     |
|  2 | 10:00  |  2  | 14  | 26  | 38  | 50  | 62  |     |
|  3 | 11:00  |  3  | 15  | 27  | 39  | 51  | 63  |     |
|  4 | 12:00  |  4  | 16  | 28  | 40  | 52  | 64  |     |
|  5 | 13:00  |  5  | 17  | 29  | 41  | 53  | 65  |     |
|  6 | 14:00  |  6  | 18  | 30  | 42  | 54  | 66  |     |
|  7 | 15:00  |  7  | 19  | 31  | 43  | 55  | 67  |     |
|  8 | 16:00  |  8  | 20  | 32  | 44  | 56  | 68  |     |
|  9 | 17:00  |  9  | 21  | 33  | 45  | 57  | 69  |     |
| 10 | 18:00  | 10  | 22  | 34  | 46  | 58  | 70  |     |
| 11 | 19:00  | 11  | 23  | 35  | 47  | 59  | 71  |     |
+----+--------+-----+-----+-----+-----+-----+-----+-----+
*/
