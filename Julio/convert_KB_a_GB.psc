Proceso convert_KB_a_GB
	// Definir variables
	Definir Kb, Gb Como Real;
	// Solicitar entrada al usuario
	Escribir 'Ingrese el tama�o en kilobytes (Kb): ';
	Leer Kb;
	// Realizar la conversi�n
	Gb <- Kb/(1024^2);
	// Mostrar el resultado
	Escribir 'El tama�o en gigabytes (Gb) es: ', Gb;
FinProceso
