Algoritmo main
	Definir promedio, nota, sumatoria Como Real;
	Definir cantidadClases Como Entero;
	
	Escribir "Dime tus notas y te dire tu promedio...";
	Escribir "Inseta la cantidad clases...";
	Leer cantidadClases;
	
	Definir contador Como Entero;;
	contador <- 1;
	
	sumatoria <- 0;
	
	Repetir
		Escribir "Dime la nota de la clase N°", contador;
		Leer nota;
		sumatoria <- sumatoria + nota;
		contador <- contador + 1;
	Hasta Que contador = cantidadClases+1;
	
	promedio <- sumatoria/cantidadClases;
	
	Escribir "Tu promedio es: ", promedio;
	
	Si promedio > 85 Entonces
		Escribir "Felicitaciones tienes un promedio alto...";
	SiNo
		Escribir "Animos, la próxima vez sera mejor...";
	FinSi
	
FinAlgoritmo
