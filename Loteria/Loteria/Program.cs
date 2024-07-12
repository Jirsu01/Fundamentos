using System;
using LiteDB;

class Program
{
    static void Main()
    {
        Random random = new Random();

        int numeroAleatorio1 = random.Next(0, 41);
        int numeroAleatorio2 = random.Next(0, 41);

        //Console.WriteLine($"Números aleatorios generados: {numeroAleatorio1} y {numeroAleatorio2}");

        Console.Write("Ingrese su primer número (del 0 al 40): ");
        int numeroJugado1 = int.Parse(Console.ReadLine());

        while (numeroJugado1 < 0 || numeroJugado1 > 40)
        {
            Console.Write("Número fuera de rango. Ingrese un número válido (del 0 al 40): ");
            numeroJugado1 = int.Parse(Console.ReadLine());
        }

        int numeroJugado2 = -1;
        if (numeroJugado1 >= 0 && numeroJugado1 <= 40)
        {
            Console.Write("¿Desea jugar otro número? (s/n): ");
            string opcion = Console.ReadLine().ToLower();

            if (opcion == "s")
            {
                Console.Write("Ingrese su segundo número (del 0 al 40): ");
                numeroJugado2 = int.Parse(Console.ReadLine());

                while (numeroJugado2 < 0 || numeroJugado2 > 40)
                {
                    Console.Write("Número fuera de rango. Ingrese un número válido (del 0 al 40): ");
                    numeroJugado2 = int.Parse(Console.ReadLine());
                }
            }
        }

        Console.Write("Ingrese la cantidad de dinero que desea apostar: ");
        double cantidadDinero = double.Parse(Console.ReadLine());

        while (cantidadDinero <= 0)
        {
            Console.Write("La cantidad de dinero debe ser mayor que cero. Ingrese una cantidad válida: ");
            cantidadDinero = double.Parse(Console.ReadLine());
        }

        bool gano = false;
        double premio = 0;

        if (numeroJugado1 == numeroAleatorio1 || numeroJugado1 == numeroAleatorio2)
        {
            gano = true;
            premio += cantidadDinero * 2; 
        }

        if (numeroJugado2 != -1 && (numeroJugado2 == numeroAleatorio1 || numeroJugado2 == numeroAleatorio2))
        {
            gano = true;
            premio += cantidadDinero * 3; 
        }

        if (gano)
        {
            Console.WriteLine($"¡Felicidades! Ha ganado {premio} pesos.");
        }
        else
        {
            Console.WriteLine("Lo siento, no ha ganado.");
        }

        using (var dv = new LiteDatabase(@"C:\Users\irvin\source\repos\Loteria\DB\DB.db"))
    }
}
