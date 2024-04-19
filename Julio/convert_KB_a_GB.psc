Proceso convert_KB_a_GB
	// Definir variables
	Definir Kb, Gb Como Real;
	// Solicitar entrada al usuario
	Escribir 'Ingrese el tamaño en kilobytes (Kb): ';
	Leer Kb;
	// Realizar la conversión
	Gb <- Kb/(1024^2);
	// Mostrar el resultado
	Escribir 'El tamaño en gigabytes (Gb) es: ', Gb;
FinProceso
