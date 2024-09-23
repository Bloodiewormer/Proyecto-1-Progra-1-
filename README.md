# Re-defining the text for the markdown file and saving it again
readme_text = """
# Veterinary Hospital Management System

This project is a Veterinary Hospital Management System implemented in C++ for the course "Programación 1" at the University of Costa Rica. It automates the management of veterinary hospital resources such as doctors, specialties, owners, pets, and appointments.

## Table of Contents

- [Features](#features)
- [Requirements](#requirements)
- [Installation](#installation)
- [Usage](#usage)
- [File Structure](#file-structure)
- [Contributing](#contributing)
- [License](#license)

## Features

- Manage hospital specialties
- Manage doctors and their schedules
- Manage pet owners and their pets
- Schedule and manage appointments
- View doctor schedules and patient histories

## Requirements

This system was built under the following guidelines:
- **Dynamic memory management:** The system uses dynamic arrays instead of STL containers.
- **Encapsulation and abstraction:** All relevant entities are managed via dedicated classes, ensuring appropriate design.
- **Dynamic object collections:** Custom collection classes handle arrays of dynamically allocated objects.

The system covers these functionalities:
1. Register and list hospital specialties.
2. Register and list doctors (associated with a specialty).
3. Register pet owners and their pets (each owner may have multiple pets).
4. Schedule and manage appointments, ensuring no conflicts in the doctor's weekly agenda (Monday to Saturday, 8:00 AM to 7:00 PM).
5. Modify or cancel appointments.
6. Search functionalities:
   - Search for a pet’s appointment history.
   - Search for a doctor's patients.

## Installation

1. Clone the repository:

    ```bash
    git clone https://github.com/yourusername/vet-hospital-management.git
    ```

2. Open the project in Visual Studio or your preferred C++ IDE.
3. Build the solution to compile the project.

## Usage

1. Run the `Main.cpp` file to start the application.
2. The system presents a main menu with three options:
   - **Administration:** Register specialties, doctors, owners, and pets.
   - **Appointment Control:** Schedule, cancel, or view appointments by doctor or owner.
   - **Search and Listings:** View registered specialties, doctors by specialty, owners with their pets, or pets under a specific doctor.
3. Navigate through the menus to use the desired functionalities. Clean and intuitive user prompts will guide you through each step.

## File Structure

- **Main.cpp**: Entry point of the application.
- **Menu.h**: Handles the menu interface.
- **Hospital.h / Hospital.cpp**: Manages the hospital’s primary functions.
- **Doctor.h / Doctor.cpp**: Handles doctor-related data and functionalities.
- **DoctorContainer.h / DoctorContainer.cpp**: Manages a collection of doctors.
- **Dueño.h / Dueño.cpp**: Manages owner-related data and functionalities.
- **DueñoContainer.h / DueñoContainer.cpp**: Manages a collection of pet owners.
- **Mascota.h / Mascota.cpp**: Manages pet-related data.
- **MascotaContainer.h / MascotaContainer.cpp**: Manages a collection of pets.
- **Especialidad.h / Especialidad.cpp**: Manages medical specialties.
- **EspecialidadContainer.h / EspecialidadContainer.cpp**: Manages a collection of specialties.
- **Cita.h / Cita.cpp**: Handles appointment-related functionalities.
- **Agenda.h / Agenda.cpp**: Manages appointment scheduling, ensuring no conflicts for doctors.

## Contributing

Contributions are welcome! Please fork the repository and submit a pull request for any improvements or bug fixes.

## License

This project has no License
"""
