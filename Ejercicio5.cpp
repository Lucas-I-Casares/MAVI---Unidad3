#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;

Texture cuadBlue;
Sprite spriteCuadBlue;

int main() {
    cuadBlue.loadFromFile("C:/Users/lukin/OneDrive/Escritorio/UNL Tareas/MAVI/MAVI - Unidad 3e/Unidad3_Assets/cuad_blue.png");
    spriteCuadBlue.setTexture(cuadBlue);
    spriteCuadBlue.setPosition(400, 300);

    RenderWindow window(VideoMode(800, 600), "Rotación");

    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed)
                window.close();
        }

        window.clear();

        spriteCuadBlue.rotate(1.0f);
        window.draw(spriteCuadBlue);

        window.display();
    }

    return 0;
}