Algoritmo PrimosGemelos
	Definir numero, divisor Como Entero
	Definir esPrimo, esPrimoGemelo Como Logico
	Escribir "Ingrese un número: "
	Leer numero
	esPrimo <- Verdadero // Suponemos que el número es primo
	esPrimoGemelo <- Verdadero // Suponemos que el gemelo es primo
	divisor <- 2
	// Verificamos si el número es primo
	Mientras divisor * divisor <= numero Hacer
		Si numero Mod divisor == 0 Entonces
			esPrimo <- Falso // Si el número tiene un divisor, no es primo
		FinSi
		divisor <- divisor + 1
	FinMientras
	divisor <- 2
	// Verificamos si el número gemelo es primo
	Mientras divisor * divisor <= numero + 2 Hacer
		Si (numero + 2) Mod divisor == 0 Entonces
			esPrimoGemelo <- Falso // Si el número gemelo tiene un divisor, no es primo
		FinSi
		divisor <- divisor + 1
	FinMientras
	// Si el número y su gemelo son primos, los imprimimos
	Si esPrimo Y esPrimoGemelo Entonces
		Escribir "El primo gemelo de ", numero, " es ", numero + 2
	SiNo
		Escribir numero, " no tiene un primo gemelo"
	FinSi
FinAlgoritmo
