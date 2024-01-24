Algoritmo Ecuaciones_Cuadraticas
	// Entrada
	Escribir "Solucion de Ecuaciones Cuadraticas"
	Escribir "Introduce a: "
	Leer a
	Escribir "Introduce b: "
	Leer b
	escribir "Introduce c: "
	leer c
	// Proceso 
	d = b^2 - 4*a*c
	a2 = 2*a
	Si d >= 0 Entonces
		dd = raiz(d) 
		x1 = (-b + dd)/a2
		x2 = (-b - dd)/a2
		Escribir "X1 = " x1
		Escribir "X2 = " x2
	SiNo
		dd = raiz(abs(d))
		re = -b / a2
		im = dd / a2
		Escribir re " +- " im "i"
	Fin Si
	Escribir "...Hecho"
	
	
	
	
	

	
	
	
	
FinAlgoritmo
