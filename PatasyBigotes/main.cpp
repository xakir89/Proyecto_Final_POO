/* ************************************************************************************
 * Proyecto:    Patas y Bigotes
 *              Software Integral para la Gestión de Historias Clínicas Veterinarias
 * Archivo:     main.cpp
 * Descripción: Punto de entrada principal de la aplicación. Gestiona la ejecución
 *              del flujo de autenticación, la prueba del almacenamiento en memoria
 *              a través de la clase UsuarioDAO y el registro de nuevos usuarios.
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

#include <iostream>
#include "UsuarioDAO.h"
using namespace std;

int main() {

    UsuarioDAO dao; // Se instancia el DAO (Carga automáticamente a 'admin' / '1234' en memoria)

    cout << "=== VETERINARIA PATAS Y BIGOTES ===" << endl;
    cout << "--- INICIO DE SESION (DAO en Memoria) ---" << endl;

    string user, pass;
    cout << "Ingrese Usuario: ";
    cin >> user;
    cout << "Ingrese Clave: ";
    cin >> pass;

    // Consultamos los usuarios a través del DAO
    vector<Administrador> usuarios = dao.cargarTodos();
    bool logueado = false;

    for (const auto& u : usuarios) {
        if (u.autenticar(user, pass)) {
            cout << "\n¡Bienvenido al sistema!" << endl;
            u.mostrarInformacion(); // Ejecuta la versión virtual/sobrescrita
            logueado = true;
            break;
        }
    }

    if (logueado) {
        cout << "\n[ADMIN] Registrando nuevo Veterinario mediante el DAO..." << endl;
        Veterinario nuevoVet("2", "Dra. Ana Gomez", "vet_ana", "5678", "MP-9948", "Cirugia");
        dao.guardarUsuario(nuevoVet);

        cout << "\nLista actualizada de usuarios en el DAO:" << endl;
        for (const auto& u : dao.cargarTodos()) {
            u.mostrarInformacion();
        }
    } else {
        cout << "\nError: Credenciales incorrectas." << endl;
    }

    return 0;
}
