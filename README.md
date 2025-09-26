# Ejercicio

## Atributos de instancia vs variables locales

**Objetivo**
* Utilizar las variables locales y las variables de instancia para resolver problemas simples
* Comprender y aplicar los modificadores de acceso en programación orientada a objetos (C++), demostrando la imposibilidad
de cambiar atributos privados
* Prácticar cómo establecer relaciones de asociación entre dos clases cuando el objeto existe por fuera del contexto de la clase Origen
la asociación
* Crear nuevas clases y relacionar sus elementos

**Ejercicios**
1. **[Uso de variables locales y de instancia]** Cree un método "alimentar" en la clase Perro que tenga una variable local de tipo float que represente la cantidad de
   alimento en kilogramos que se le está dando al perro. Al llamar el método "alimentar", este método debe calcular la
   cantidad de alimento necesaria para alimentar al perro en función de su tamaño y edad (un perro grande se alimenta con 1 kilogramo por cada año de vida, un perro mediano con 0.5 kilos por cada año de vida y un perro pequeño con 0.25 kilos por cada año de vida). El método debe luego mostrar en pantalla cuánto alimento se le está dando al perro. Pruebe el método llamándolo con el objeto "Firulais"
2. **[Acceso a variables de instancia privadas]** Intente establecer (set) valores directamente para los atributos "tamaño", "color" y "edad" desde fuera de la clase, y
   verifique que ocurra un error o advertencia debido a que estos atributos son privados y no se pueden acceder desde fuera de la clase.
3. **[Crear nuevas clases]** Raza
   1. Cree una nueva clase llamada `Raza` que tenga los atributos "nombre", "paisOrigen"
   2. Agrege el constructor y los métodos get/set para la clase `Raza`
   3. Cree en el método main dos objetos de tipo `Raza` diferentes: "Mastin Napolitano" de origen "Italia" y "Maltes" de origen "Italia"
   4. Haga los ajustes que requiera su código para asociar a la clase `Perro` la raza.
   5. Vincule a Firualis al objeto que representa la `Raza` del "Mastin Napolitano" que creo en el Main
   6. Pruebe imprimiendo información del objeto Firualais, mostrando detalles de su raza como el nombre y el pais de origen.
4. **Veterinario**
   1. Cree una nueva clase llamada `Veterinario` que tenga los atributos "nombre" Y "aniosExperiencia"
   2. Agrege el constructor y los métodos get/set para la clase `Veterinario`
   3. Haga los ajustes que requiera su código para asociar a la clase `Perro` el veterinario tratante
   4. Intente asociar algún objeto `Perro` que tenga creado, con un objeto de la clase `Veterinaria`
   5. Pruebe la relación mostrando desde algún objeto `Perro` la información de su veterinario.
5. **Clase libre**
  Defina una nueva clase que tenga al menos dos atributos y dos métodos relaciónela con algunas de las clases ya existentes, pruebe que su relación funciona. Ajuste el UML para que incorpore la nueva clase creada.

## Diagrama de clases relacionado

```mermaid
classDiagram
    class Perro{
      - String nombre
      - String color
      - int edad
      - Veterinario * veterinarioObj
      - Raza * razaObj
      +ladrar()
      +saludar()
    }
    class Veterinario{
      -int aniosExperiencia
      -String nombre
    }
    class Raza{
      +String nombre
      +String paisOrigen
    }

    Perro --> Raza : tiene
    Perro --> Veterinario : tiene
 ```

