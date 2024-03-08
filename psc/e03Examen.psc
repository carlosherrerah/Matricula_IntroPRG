Algoritmo Auto_Lavado
	// Entrada
	Escribir "Auto Lavado"
	Escribir "1.- Chico 2.- Grande"
	Leer size
	Escribir "Deseas lavado de moto  1.-Si  2.- No"
	Leer lavar
	// Proceso 
	pagar = 0
	chico = 50
	grande = 100
	lavado = 30
	Si size = 1 Entonces
		pagar = chico
	SiNo
		pagar = grande
	Fin Si
	Si lavar = 1 Entonces
		pagar = pagar + lavado
	Fin Si
	Escribir "Total: " pagar

FinAlgoritmo
