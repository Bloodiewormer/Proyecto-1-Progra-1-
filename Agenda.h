#pragma once
#include <iostream>
#include "Cita.h"

class Agenda {
private:
    Cita** citas;
    int cantidad;
    int capacidad;
   // CitaContainer* citas;
public:
    Agenda(int capacidad);
    ~Agenda();
    bool agendarCita(Cita* cita, int dia, int hora);
    bool cancelarCita(int dia, int hora);
    Cita* obtenerCita(int dia, int hora);
    std::string toString() const;
};

//we use Index to represent the position of the Cita in the array
//index = dia * 12 + hora  //the 12 is the number of hours in a day
/*
 hr = horas - 8     index = dia * horas + hora  

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