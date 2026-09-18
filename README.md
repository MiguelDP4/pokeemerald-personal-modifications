# Pokémon Emerald - Quality of Life & Modern Overhaul

Este repositorio contiene una versión modificada y modernizada de **Pokémon Esmeralda (versión en inglés)** basada en el proyecto de descompilación [`pokeemerald`](https://github.com/pret/pokeemerald).

El objetivo de este proyecto es conservar la dificultad, espíritu e historia del juego original de tercera generación, integrando mecánicas modernas, comodidades de calidad de vida (QoL) y agilizando las tareas más tediosas sin desbalancear la experiencia.

---

## Tabla de Cambios respecto al Pokémon Esmeralda Original

### 1. Calidad de Vida (QoL) y Exploración
| Característica | Pokémon Esmeralda Original | Este Proyecto |
| :--- | :--- | :--- |
| **Reutilización de Repelentes** | El repelente se agotaba y exigía abrir la mochila manualmente para usar otro. | Al agotarse un repelente, aparece una ventana de diálogo inmediata preguntando si deseas usar otro de tu inventario. |
| **Correr en Interiores** | Las zapatillas deportivas solo funcionaban en exteriores. | Puedes correr libremente en interiores (casas, Centros Pokémon, tiendas, gimnasios y edificios). |
| **PC Portátil en el Menú** | Había que ir a un Centro Pokémon para gestionar las cajas del PC. | Se añade la opción **"PC"** al menú del Start para acceder a tus cajas desde el overworld (disponible al aire libre con señal y teniendo al menos 1 Pokémon). |
| **Velocidad de Texto "INSTANT"** | Solo existían tres velocidades: Lenta, Media y Rápida (imprimiendo letra por letra). | Se añade la velocidad **"INSTANT"** en el Menú de Opciones para desplegar los textos en 1 solo fotograma (respetando pausas de confirmación). |
| **Pesca Simplificada** | La caña requería esperar secuencias largas e impredecibles de puntos suspensivos ("..."). | El Pokémon salvaje pica siempre garantizado al primer tirón de la caña. |
| **Vitaminas hasta 252 EVs** | Proteína, Hierro, Carburante, Calcio, Cinc y Más PS se bloqueaban al alcanzar los 100 EVs en una estadística. | Las vitaminas pueden utilizarse hasta el tope individual máximo de **252 EVs**, permitiendo entrenar competitivamente al instante con dinero. |
| **Doble Bicicleta** | Rydel solo permitía elegir una bici a la vez (Bici Carrera o Bici Acrobática) y requería viajar a Ciudad Malvalona para intercambiarla. | Tras obtener la primera bici, Rydel vende la segunda por 500,000 pokédolares. Puedes llevar ambas en la mochila y alternar entre ellas con fluidez. |

---

### 2. Movimientos, MOs (HMs) y Tutores
| Característica | Pokémon Esmeralda Original | Este Proyecto |
| :--- | :--- | :--- |
| **Olvido de Movimientos MO** | Los movimientos de MO (Corte, Vuelo, Surf, etc.) no se podían olvidar sin visitar al Move Deleter de Ciudad Calagua. | Los Pokémon pueden olvidar y reemplazar movimientos MO libremente al subir de nivel o aprender una MT/MO. |
| **Habilidades Acuáticas Compartidas** | Había que ocupar 3 ranuras del equipo con *Surf*, *Buceo* y *Cascada* simultáneamente. | Si un Pokémon de tu equipo conoce **Surf**, **Buceo** o **Cascada**, puede ejecutar cualquiera de las tres acciones fuera de combate (con sus medallas correspondientes). |
| **Move Tutors Repetibles** | Los tutores del overworld (Metrónomo, Explosión, Onda Trueno, Sustituto, etc.) solo enseñaban su ataque una única vez en toda la partida. | Todos los tutores de movimientos del overworld pueden volver a enseñar sus ataques cuantas veces quieras a diferentes Pokémon. |
| **Escamas Corazón en Tienda** | Las *Escamas Corazón* eran limitadas o requerían capturar Luvdisc salvajes con baja probabilidad. | La tienda de Ciudad Algaria (Mossdeep City) vende **Escamas Corazón** por 2,000 pokédolares para facilitar el uso del Move Reminder. |
| **Tienda de MTs Expandida (Calagua 4F)** | Los vendedores del 4º piso del centro comercial de Ciudad Calagua solo vendían 8 MTs fijas. | El catálogo se expande con **todas las MTs del juego que el jugador ya haya descubierto o conseguido**: ofensivas a la izquierda y defensivas a la derecha (al doble de su precio de venta). |

---

### 3. Crianza y Eclosión Acelerada
| Característica | Pokémon Esmeralda Original | Este Proyecto |
| :--- | :--- | :--- |
| **Frecuencia de Huevos en Guardería** | El juego verificaba si los padres ponían un huevo únicamente cada **256 pasos**. | El chequeo de puesta de huevos se evalúa cada **64 pasos** (4 veces más frecuente). |
| **Tasas de Compatibilidad** | - Baja (distinta especie, mismo OT): 20%<br>- Media (misma especie, mismo OT / distintas, diferente OT): 50%<br>- Máxima (misma especie, diferente OT): 70% | - Baja compatibilidad: **50%**<br>- Media compatibilidad: **80%**<br>- Máxima compatibilidad: **100%** (huevo garantizado cada 64 pasos). |
| **Multiplicador de Habilidades Térmicas** | *Cuerpo Llama* y *Escudo Magma* duplicaban la velocidad de eclosión (restaban 2 ciclos por bloque). | *Cuerpo Llama* y *Escudo Magma* tienen un multiplicador de **5x** (restan 5 ciclos por bloque), reduciendo drásticamente los pasos para abrir cualquier huevo. |

---

### 4. Objetos, Bayas y Economía
| Característica | Pokémon Esmeralda Original | Este Proyecto |
| :--- | :--- | :--- |
| **Repartir Experiencia (Exp. Share)** | Era un objeto equipado que solo beneficiaba a un Pokémon a la vez. | Convertido en un **Objeto Clave** registrable con interruptor (ON/OFF). Al estar encendido, reparte un 20% de la experiencia del combate a todos los miembros no participantes del equipo. |
| **Mensajes de Experiencia en Combate** | Imprimía un mensaje individual para cada Pokémon del equipo. | Los mensajes de ganancia de EXP se agrupan en un solo aviso fluido por cantidad recibida. |
| **Hierbas de Batalla en Lavaridge** | La *Hierba Blanca* y *Hierba Mental* eran difíciles de conseguir o exclusivas del Battle Frontier post-game. | La tienda de hierbas tradicionales de Pueblo Lavacalda vende **Hierba Blanca**, **Hierba Mental** y **Semilla Milagro** por 1,000 pokédolares cada una. |
| **Supervivencia de Árboles de Bayas** | Si un árbol maduro no se cosechaba a tiempo, se secaba y reiniciaba su ciclo de crecimiento. | Los árboles de bayas no mueren ni se deterioran; permanecen con sus frutos listos para cosechar indefinidamente. |
| **Casino / Game Corner de Malvalona** | Recompensas lentas y premios limitados. | - Pagos de tragaperras y ruleta multiplicados por **6x**.<br>- Venta de **Piedras Evolutivas** (Fuego, Agua, Trueno, Hoja, Lunar, Solar) por 5,000 monedas.<br>- Venta de **Huevo Suerte** (*Lucky Egg*) por 7,777 monedas en el mostrador de muñecos. |
| **Potencia de Pokécubos** | Conseguir Pokécubos de alto nivel para concursos requería licuar bayas raras con varios jugadores. | Los valores de sabor y nivel de los Pokécubos se multiplican por **10x** al licuarlos, permitiendo maximizar atributos con facilidad. |

---

### 5. Pantalla de Datos Pokémon (Summary Screen)
- **Visualización de EVs e IVs:** Al inspeccionar a un Pokémon en la pantalla de estadísticas, se muestran gráficos dedicados y los valores numéricos exactos de **IVs** (0-31) y **EVs** (0-252) de cada una de las 6 características (PS, Ataque, Defensa, Velocidad, At. Especial, Def. Especial).
- **Influencia de la Naturaleza:** Los nombres de las estadísticas reflejan la influencia de la naturaleza del Pokémon: en **rojo** la estadística potenciada (+10%) y en **azul** la estadística disminuida (-10%).

---

### 6. Especies Salvajes y Evoluciones
| Característica | Pokémon Esmeralda Original | Este Proyecto |
| :--- | :--- | :--- |
| **Evoluciones por Intercambio** | Kadabra, Machoke, Graveler, Haunter, Seadra, Onix, Scyther, Porygon y Clamperl requerían intercambio por cable link. | Pueden evolucionar por nivel al llegar al **Nv. 38**, o alternativamente usando su objeto evolutivo directamente sobre ellos como una piedra (Revestimiento Metálico, Escama Dragón, Roca del Rey, Mejora, Diente Marino, Escama Marina). |
| **Pokémon Exclusivos de Hoenn Restaurados** | Surskit, Masquerain, Meditite, Medicham, Roselia, Zangoose y Lunatone no se podían atrapar en Esmeralda de forma natural. | Restaurados en sus rutas salvajes originales de Rubí y Zafiro, conservando además las especies nativas de Esmeralda (como Mawile). |
| **Iniciales de Hoenn Salvajes** | Solo podías elegir uno de los 3 iniciales en la bolsa del Profesor Birch. | **Treecko**, **Torchic** y **Mudkip** aparecen como encuentros salvajes muy raros en rutas tempranas de la región. |

---

## Compilación y Ejecución

Para compilar la ROM desde el código fuente:

1. Asegúrate de tener configurado el entorno de compilación de `pokeemerald` (ARM toolchain y herramientas de desarrollo).
2. Ejecuta el comando de compilación:
   ```bash
   make -j8
   ```
3. El archivo generado será:
   ```
   pokeemerald.gba
   ```
