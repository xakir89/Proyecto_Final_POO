/* ************************************************************************************
 * Proyecto:    Patas y Bigotes
 *              Software Integral para la Gestión de Historias Clínicas Veterinarias
 * Archivo:     UsuarioDAO.h
 * Descripción: Declaración de la clase UsuarioDAO (Data Access Object).
 *              Maneja el almacenamiento en memoria de los usuarios del sistema,
 *              la precarga del administrador por defecto y las operaciones básicas
 *              de consulta y guardado.
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

#ifndef USUARIODAO_H
#define USUARIODAO_H

#include <vector>
#include <string>
#include "Administrador.h"
#include "Veterinario.h"
#include "Auxiliar.h"

using namespace std;

class UsuarioDAO {
private:
    vector<Administrador> listaUsuarios;

    void cargarAdminInicial() {
        Administrador adminInicial("1", "Administrador Principal", "admin", "1234", "ADMIN");
        listaUsuarios.push_back(adminInicial);
    }

public:

    UsuarioDAO() {// Constructor: Inicializa la lista en memoria con el admin por defecto
        cargarAdminInicial();
    }


    bool guardarUsuario(const Administrador& user) { // Guardar usuario en la memoria del DAO
        listaUsuarios.push_back(user);
        return true;
    }

    vector<Administrador> cargarTodos() const { // Retorna todos los usuarios almacenados en memoria
        return listaUsuarios;
    }

    bool existeUsuario(const string& user) const { // Verifica si un nombre de usuario ya existe en memoria
        for (const auto& u : listaUsuarios) {
            if (u.getUsername() == user) {
                return true;
            }
        }
        return false;
    }
};

#endif
