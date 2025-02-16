# Digital Clock en C

Este proyecto es un simple reloj digital en lenguaje C que muestra la hora en formato HH\:MM\:SS y se actualiza cada segundo.

## Características

- Muestra la hora en formato `HH:MM:SS`.
- Se actualiza automáticamente cada segundo.
- Reinicia la hora después de las 23:59:59.

## Requisitos

Para compilar y ejecutar este programa, necesitas:

- Un compilador de C (GCC recomendado).
- Un sistema operativo compatible con los comandos `system("cls")` (Windows) o `system("clear")` (Linux/Mac).

## Compilación y Ejecución

### En Windows:

```
gcc main.c -o reloj.exe
./reloj.exe
```

### En Linux/Mac:

Reemplaza `system("cls")` por `system("clear")` en el código para que funcione correctamente.

```
gcc main.c -o reloj
./reloj
```

## Notas

- El programa usa `sleep(1)`, que detiene la ejecución por un segundo.
- Para detener el programa, usa `Ctrl + C` en la terminal.

## Licencia

Este proyecto está licenciado bajo la Licencia MIT. Puedes ver más detalles en el archivo `LICENSE` o en el siguiente enlace: [Licencia MIT](https://opensource.org/licenses/MIT)

