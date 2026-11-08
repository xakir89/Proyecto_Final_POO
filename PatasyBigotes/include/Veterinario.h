/* ***********************************************************************************
 * Proyecto:    Patas y Bigotes
 *              Software Integral para la Gestión de Historias Clínicas Veterinarias
 * Archivo:     Veterinario.h
 * Descripción: Declaración de la Subclase Veterinario. Modela la información
 *              específica del personal médico veterinario (tarjeta profesional y
 *              especialidad) heredando la estructura base de la clase Administrador.
 * ----------------------------------------------------------------------------
 * Autores:     - Lopez Ramirez, Anderson Geovanny  (Código: 200860206-2724)
 *              - Patiño Gómez, David Stiven        (Código: 202551043-2724)
 *              - Vidal Bran, Julio Cesar           (Código: 202651359-2724)
 *              - Rodríguez Ramírez, Dylan Andrés   (Código: 202651075-2724)
 *
 * Asignatura:  750015C - Fundamentos de Programación Orientada a Objetos
 * Docente:     Ing. Luis Adrian Lasso C, M.Sc.
 * Fecha:       01/10/2026
 * Versión:     1.0
 ************************************************************************************/

 #ifndef VETERINARIO_H
#define VETERINARIO_H

#include <Administrador.h>


class Veterinario : public Administrador
{
    public:

        string GettarjetaProfesional() const { return tarjetaProfesional; }
        void SettarjetaProfesional(string val) { tarjetaProfesional = val; }
        string Getespecialidad() const { return especialidad; }
        void Setespecialidad(string val) { especialidad = val; }

    Veterinario(string id, string nom, string user, string pass, string tp, string esp){
                idUsuario = id;
                nombre = nom;
                username = user;
                password = pass;
                rol = "VETERINARIO";
                tarjetaProfesional = tp;
                especialidad = esp;
                }; // Constructor

    void mostrarInformacion() const override{
    cout << "[" << rol << "] ID: " << idUsuario << " | Dr(a): " << nombre << " | T.P.: " << tarjetaProfesional << " | Esp: " << especialidad << endl;
    }; // Sobrescritura del método

    protected:

    private:
        string tarjetaProfesional;
        string especialidad;
};

#endif // VETERINARIO_H
