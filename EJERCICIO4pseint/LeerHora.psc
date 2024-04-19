Algoritmo LeerHora
	// Este algoritmo lee la hora en formato de 24 horas
	// y determina si es de día o de noche
	Definir hora, esDeDia Como Entero;
	Escribir 'Introduce la hora en formato de 24 horas (0 a 23): ';
	Leer hora;
	Si hora>=0 Y hora<24 Entonces
		Si hora>=6 Y hora<18 Entonces
			esDeDia <- 1;
		SiNo
			esDeDia <- 0;
		FinSi
		Si esDeDia=1 Entonces
			Escribir 'Es de día.';
		SiNo
			Escribir 'Es de noche.';
		FinSi
	SiNo
		Escribir 'La hora ingresada es inválida.';
	FinSi
FinAlgoritmo
