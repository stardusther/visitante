cmake_minimum_required(VERSION 3.21)
project(visitante)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_executable(visitante
        include/ComponenteEquipo.h
        include/Disco.h
        include/Equipo.h
        include/Tarjeta.h
        include/VisitanteEquipo.h
        include/VisitantePrecio.h
        include/VisitantePrecioDetalle.h
        src/ComponenteEquipo.cpp
        src/Disco.cpp
        src/Equipo.cpp
        src/main.cpp
        src/Tarjeta.cpp
        src/VisitantePrecio.cpp
        src/VisitantePrecioDetalle.cpp include/Cliente.h src/Bus.cpp include/Bus.h)
