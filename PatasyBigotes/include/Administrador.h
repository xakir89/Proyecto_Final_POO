/* ************************************************************************************
 * Proyecto:    Patas y Bigotes
 *              Software Integral para la Gestión de Historias Clínicas Veterinarias
 * Archivo:     Administrador.h
 * Descripción: Declaración de la clase Administrador. Maneja los datos del
 *              usuario administrativo, métodos de acceso (getters/setters)
 *              y la lógica de autenticación del sistema.
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
 *************************************************************************************/

#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

#include <oistream>
#include <string>

using namespace std;

class Administrador
{
    public:

        Administrador(string id, string nom,string user, string, string pass, string rr = "ADMIN");//constructor
        Administrador() {}
        virtual ~Administrador() {}//destructor

        string GetidUsuario() { return idUsuario; }
        void SetidUsuario(string val) { idUsuario = val; }
        string Getnombre() { return nombre; }
        void Setnombre(string val) { nombre = val; }
        string Getusername() { return username; }
        void Setusername(string val) { username = val; }
        string Getpassword() { return password; }
        void Setpassword(string val) { password = val; }
        std::string Getrol() { return rol; }
        void Setrol(std::string val) { rol = val; }

        bool autenticar(const string& user, const string& pass) const;//Metodo de Negocio
        virtual void mostrarInformacion() const;

    protected:
        string idUsuario;
        string nombre;
        string username;
        string password;
        std::string rol;

    private:
};

#endif // ADMINISTRADOR_H
