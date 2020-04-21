# Granja-Automatizada-Arduino
El dueño de una granja quiere disminuir el gasto en el salario de empleados, por lo que nosotros le propusimos sustituir algunas de las acciones de estos trabajadores por automatizaciones que se realizan según un horario establecido por el dueño.
Acciones:
1-Apertura de dispensadores de comida para las 3 tipos de animales representado con el movimiento de un servomotor en un angulo de 90 grados, cada tipo se ve representada por un led de izquierda a derecha respectivamente (cerdos,gallinas y vacas).
2-Sistema de termómetro que detecta la temperatura en las gallinas, permitiendo que saber si el ambiente esta en condiciones correctas para que estas puedan poner huevos.
3-El horario es simulado por un siete segmentos el cual muestra la hora digitada desde el puerto serial y las acciones que están programadas para esa hora.
Horario:
5 am : Cerdos, gallinas y vacas.
6 am : Gallinas y vacas.
7 am : Cerdos y vacas.
8 am : Gallinas.
9 am : Cerdos, gallinas y vacas. 
1 pm : Gallinas.
2 pm : Vacas.
3 pm : Cerdos.
4 pm : Cerdos, gallinas y vacas.
5 pm : Cerdos, gallinas y vacas.
6 pm : Gallinas y vacas.
