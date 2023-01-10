Algoritmo Temperatura
	Escribir "1.- F2C   2.- CtoF"
	Leer opcion
	Si opcion = 1 Entonces
		Escribir "1.- F2C"
		Leer F
		R = 5/9*(F-32)
		
	SiNo
		Escribir "2.- C2F"
		Leer C
		R = 9/5*C + 32
	Fin Si
	Escribir R
	Si R >= 50 Entonces
		Escribir "Estas Peligroso"
	Fin Si
	
FinAlgoritmo
