Algoritmo Operaciones_Basicas
	Escribir "Operaciones Basicas"
	Escribir "1=+  2=-  3=* 4=/"
	Escribir "Dame a y b"
	leer a, b
	Escribir "Operacion [1..4]"
	leer op
	//Proceso 
	Segun op Hacer
		1:
			r = a + b
			Escribir "La suma es " r
		2:
			r = a - b
			Escribir "La resta es " r
		3:
			r =  a * b
			Escribir "La Multiplicacion es " r
		4: 
			r = a / b
			Escribir "La division es " r
		De Otro Modo:
			Escribir "Opcion Invalida"
	Fin Segun
FinAlgoritmo
