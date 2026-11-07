/* ***********************************************************************************
 * Proyecto:    Patas y Bigotes
 *              Software Integral para la Gestión de Historias Clínicas Veterinarias
 * Archivo:     Auxiliar.h
 * Descripción: Declaración de la Subclase  Auxiliar. Modela la información
 *              específica del personal de atencion al publico
 *              heredando la estructura base de la clase Administrador.
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

#ifndef AUXILIAR_H
#define AUXILIAR_H

#include <Admistrador.h>


class Auxiliar : public Admistrador
{
    public:

    Auxiliar(string id, string nom, string user, string pass); // Constructor: envía "AUXILIAR" como rol por defecto a la clase base

    void mostrarInformacion() const override;    // Sobrescritura del método
    protected:

    private:
};

#endif // AUXILIAR_H
