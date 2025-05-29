#include "raylib.h"

int main()
{
    // Inicializar la ventana con un título y tamaño
    InitWindow(800, 600, "Ejemplo básico de raylib en C++");

    // Configurar la velocidad de frames por segundo
    SetTargetFPS(60);

    while (!WindowShouldClose())
    { // Detectar si se cierra la ventana
        // Iniciar el dibujo
        BeginDrawing();

        ClearBackground(RAYWHITE); // Fondo blanco

        DrawText("Hola, raylib en C++!", 190, 200, 20, LIGHTGRAY);

        // Dibujar un círculo rojo en el centro de la ventana
        DrawCircle(400, 300, 50, RED);

        // Terminar el dibujo
        EndDrawing();
    }

    // Cerrar la ventana y limpiar recursos
    CloseWindow();

    return 0;
}
