# Conversor de Monedas en C

## Descripción

Este proyecto consiste en un programa desarrollado en lenguaje C que permite convertir pesos mexicanos (MXN) a otras monedas utilizando tipos de cambio ingresados manualmente por el usuario.

El programa cuenta con un menú interactivo que facilita la selección del tipo de conversión y muestra el resultado de manera clara en la consola.

## Características

* Conversión de pesos mexicanos a dólares.
* Conversión de pesos mexicanos a euros.
* Conversión a otras monedas mediante un tipo de cambio personalizado.
* Menú interactivo en consola.
* Validación de cantidades y tipos de cambio.
* Visualización de resultados con decimales.

## Tecnologías utilizadas

* Lenguaje de programación: C.
* Compilador: GCC.
* Entorno de ejecución: Terminal o consola.

## Requisitos

* Tener instalado un compilador de C, como GCC.
* Contar con una terminal o consola para ejecutar el programa.

## Compilación y ejecución

### 1. Compilar el programa

```bash
gcc ConversorMonedas.c -o ConversorMonedas
```

### 2. Ejecutar en Windows

```bash
ConversorMonedas.exe
```

### 3. Ejecutar en Linux

```bash
./ConversorMonedas
```

## Funcionamiento

1. El usuario selecciona el tipo de conversión.
2. Ingresa la cantidad en pesos mexicanos.
3. Introduce el tipo de cambio correspondiente.
4. El programa realiza la operación matemática.
5. El resultado se muestra en la consola.

## Fórmula utilizada

La conversión se realiza mediante la siguiente fórmula:

**Moneda extranjera = Pesos mexicanos / Tipo de cambio**

Por ejemplo, si el usuario ingresa $1,000 MXN y establece un tipo de cambio de $18 MXN por dólar, el resultado será aproximadamente 55.56 dólares.

## Objetivo del proyecto

Practicar los fundamentos de la programación en C mediante el uso de variables, operadores aritméticos, estructuras condicionales, estructuras de selección y validación de datos.

## Licencia

Este proyecto está disponible para fines educativos y de aprendizaje.
