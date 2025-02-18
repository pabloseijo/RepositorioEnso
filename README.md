# Arquitecturas Emergentes GREI USC

Este respositorio contiene las prácticas de la asignatura del curso 24/25.

## Índice

- [Práctica 1: Setup e Introducción de algoritmos paralelos](#práctica-1-setup-e-introducción-de-algoritmos-paralelos)
  - [Contenido del Repositorio](#contenido-del-repositorio)
  - [Requisitos Previos](#requisitos-previos)
  - [Instrucciones Generales](#instrucciones-generales)
  - [Fecha de Entrega](#fecha-de-entrega)
  - [Observaciones](#observaciones)


## Práctica 1: Setup e Introducción de algoritmos paralelos

Este repositorio contiene las implementaciones desarrolladas en el primer laboratorio de la asignatura **Programación de Arquitecturas Emergentes**. El objetivo principal de esta práctica es familiarizarse con la configuración del clúster de 
Computación de Altas Prestaciones **FinisTerrae III** del Centro de Supercomputación de Galicia (CESGA), así como implementar varios algoritmos introductorios a la programación paralela y preparar los scripts necesarios para ejecutar estos 
programas en uno de los nodos del clúster.

### Contenido del Repositorio

Los algoritmos desarrollados en esta práctica son los siguientes

1. **DAXPY**: Implementación de la operación DAXPY (Double-Precision A·X Plus Y), donde se realiza la operación Y = αX + Y, siendo α un escalar y X, Y vectores de tamaño N con números en coma flotante de doble precisión.

2. **DistanciaEuclidiana**: Cálculo de la distancia euclidiana entre dos vectores X e Y de dimensión N.

3. **Histograma**: Generación del histograma de una imagen en tonos de gris, mostrando la distribución de las intensidades de los píxeles.

4. **Convolucion2D**: Ejecución de una convolución bidimensional sobre una imagen X con un kernel de entrada K, permitiendo el uso de kernels de cualquier tamaño.

### Requisitos Previos

Para trabajar con este repositorio, es necesario:

- Tener una cuenta de usuario en el CESGA asignada para esta asignatura.
- Acceder al clúster FinisTerrae III mediante SSH utilizando las credenciales proporcionadas.
- Conocimientos básicos de programación en C y familiaridad con entornos de computación de altas prestaciones.

### Instrucciones Generales

1. Acceso al CESGA:
   - Conexión al clúster FinisTerrae III mediante SSH con las credenciales proporcionadas.
   - En caso de estar fuera de la red de la USC, es necesario establecer una conexión VPN.

2. Solicitud de un Nodo de Cómputo:
   - Conexión interactiva a un nodo de cómputo mediante el comando correspondiente.
   - Estudio de la organización del procesador para familiarizarse con la arquitectura.

3. Compilación y Ejecución:
   - Carga del compilador GNU u otro necesario mediante el sistema de módulos.
   - Preparación de scripts para enviar los trabajos a la cola del sistema de gestión de recursos.
   - Ejecución de los algoritmos y medición de tiempos de ejecución.

### Fecha de Entrega

La fecha límite para la entrega de esta práctica es el **17 de febrero de 2025, a las 9:00 horas**.

### Observaciones

En las siguientes sesiones prácticas, algunos de estos algoritmos se implementarán en paralelo empleando OpenMP y CUDA. Es crucial contar con una implementación secuencial precisa para comparar tanto los resultados numéricos como los tiempos 
de ejecución de ambas versiones.

