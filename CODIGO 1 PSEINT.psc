Algoritmo PrimosGemelos
	Definir cantidadNumeros, indice, divisor, numeroActual Como Entero
	Definir esPrimo1, esPrimo2 Como Logico
	Escribir "Ingrese la cantidad de números: "
	Leer cantidadNumeros
	Para indice <- 0 Hasta cantidadNumeros - 1 Hacer
		Escribir "Ingrese el número ", indice + 1, ": "
		Leer numeroActual
		esPrimo1 <- Verdadero
		esPrimo2 <- Verdadero
		divisor <- 2
		Mientras divisor * divisor <= numeroActual Hacer
			Si numeroActual Mod divisor == 0 Entonces
				esPrimo1 <- Falso
			FinSi
			divisor <- divisor + 1
		FinMientras
		divisor <- 2
		Mientras divisor * divisor <= numeroActual + 2 Hacer
			Si (numeroActual + 2) Mod divisor == 0 Entonces
				esPrimo2 <- Falso
			FinSi
			divisor <- divisor + 1
		FinMientras
		Si esPrimo1 Y esPrimo2 Entonces
			Escribir "El primo gemelo de ", numeroActual, " es ", numeroActual + 2
		SiNo
			Escribir numeroActual, " no tiene un primo gemelo"
		FinSi
	FinPara
FinAlgoritmo

