# resolvedor-de-sudokus
Un simple programa escrito en C++ que utiliza el algoritmo backtracking para resolver sudokus.

## Algoritmo Backtracking (o vuelta atrás)
Este algoritmo realiza una búsqueda sistemática a través de todas las configuraciones posibles dentro de un
espacio de b´búsqueda.
Para lograr esto, los algoritmos de tipo backtracking construyen posibles soluciones candidatas de manera sistemática. En general, dado una solución candidata s:
Verifican si s es solución. Si lo es, hacen algo con ella (depende del problema).
Construyen todas las posibles extensiones de s, e invocan recursivamente al algoritmo con todas ellas.
Es un tipo de búsqueda de fuerza bruta que visita las celdas vacías en algún orden, llenando secuencialmente dígitos, o dar marcha atrás cuando el número se encuentra para ser no válida.

Donde:
• Solución?(·) es una función que retorna verdadero si su argumento es una solución.
• procesarSolucion(·), depende del problema y que maneja una solución.
• Sucesores(·) es una función que dado un candidato, genera todos los candidatos que son extensiones de este.
• terminar? es una variable global booleana inicialmente es falsa, pero que puede ser hecha verdadera por procesarSolucion, en caso que solo interesa encontrar.
Visualmente el algoritmo trabaja de la siguiente manera:

## ResolvedorSudokus3000.cpp
Ahora viene la parte divertida. Es hora de convertir todo lo que hemos aprendido, a código. A continuación te mostraré el código y el resultado en tiempo real. Puedes modificar el código y alterarlo, y ver el resultado en tiempo real. Siéntete libre de cambiar lo que te apetezca.


