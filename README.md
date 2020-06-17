# "Resolvedor" de sudokus.
Un simple programa escrito en C++ que utiliza el algoritmo backtracking para resolver sudokus.

[![Run on Repl.it](https://repl.it/badge/github/LuisAlejandroSalcedo/resolvedor-de-sudokus)](https://repl.it/github/LuisAlejandroSalcedo/resolvedor-de-sudokus)

## Algoritmo Backtracking (o vuelta atrás)
Este algoritmo realiza una búsqueda sistemática a través de todas las configuraciones posibles dentro de un
espacio de b´búsqueda.
Para lograr esto, los algoritmos de tipo backtracking construyen posibles soluciones candidatas de manera sistemática. En general, dado una solución candidata s:
Verifican si s es solución. Si lo es, hacen algo con ella (depende del problema).
Construyen todas las posibles extensiones de s, e invocan recursivamente al algoritmo con todas ellas.
Es un tipo de búsqueda de fuerza bruta que visita las celdas vacías en algún orden, llenando secuencialmente dígitos, o dar marcha atrás cuando el número que se encuentra, no es válido.

Seguir leyendo: https://www.geeksacademy.site/2020/06/resolviendo-sudokus-con-c-algoritmo.html


