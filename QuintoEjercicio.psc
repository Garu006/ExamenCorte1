Proceso QuintoEjercicio
	Definir num Como Entero;
	Escribir "Ingrese un numero del 1 al 7";
	leer num;
	
	Si num>=1 y num <=7 Entonces
		Segun num Hacer
			caso 1:
				Escribir "Domingo";
			caso 2:
				Escribir "Lunes";
			caso 3:
				Escribir "Martes";
			caso 4:
				Escribir "Miercoles";
			caso 5:
				Escribir "Jueves";
			caso 6:
				Escribir "Viernes";
			caso 7:
				Escribir "Sabado";
		FinSegun
	SiNo 
		Escribir "El numero ingresado es incorrecto";
	FinSi
	
FinProceso
