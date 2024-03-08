Algoritmo Operaciones_basicas
	// Entrada
	Escribir 'Operaciones Basicas 1=+  2=- 3=* 4=/'
	Escribir 'Dame a y b '
	Leer a, b
	Escribir 'Operacion (1..4)'
	Leer op
	// Proceso 
	Si op=1 Entonces
		r <- a+b
		Escribir 'La suma es ',r
	SiNo
		Si op =2 Entonces
			r = a -b
			Escribir "La resta es ", r
		SiNo
			si op = 3  Entonces
				r = a *  b
				Escribir "La multiplicacion es ", r
			SiNo
				si op = 4 Entonces
					r = a / b
				SiNo
					Escribir "Opcion Invalida"
				FinSi
			FinSi
		FinSi
	FinSi
FinAlgoritmo
