cmake_minimum_required(VERSION 4.3)
project(Parcial1)

set(CMAKE_CXX_STANDARD 20)

add_executable(Parcial1 main.cpp
)
add_executable(TipoDato Parcial1/TipoDato.cpp)
add_executable(VariablesConstantes Parcial1/VariablesConstantes.cpp)
add_executable(Megamente Parcial1/Megamente.cpp)
add_executable(EntradaSalidaDatos Parcial1/EntradaSalidaDatos.cpp)
add_executable(IfSimple Parcial1/IfSimple.cpp)
add_executable(ifElse Parcial1/ifElse.cpp)
add_executable(ifAnidado Parcial1/ifAnidado.cpp)
add_executable(IfTernario Parcial1/IfTernario.cpp)

add_executable(CicloForArrays Parcial2/CicloForArrays.cpp
        POO/Pelicula.cpp
        POO/Pelicula.h)
add_executable(Metodos Parcial2/Metodos.cpp)
add_executable(libreria Parcial3/libreria.cpp
        Parcial3/Pelicula.cpp
        Parcial3/Pelicula.h)
add_executable(Pelciula Parcial3/Pelicula.cpp Parcial3/Pelicula.h)
add_executable(Pelicula POO/Pelicula.cpp POO/Pelicula.h)
