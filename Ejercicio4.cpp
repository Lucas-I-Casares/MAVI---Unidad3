#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;

Texture plataforma;
Sprite spritePlataforma;

int main() {
    plataforma.loadFromFile("C:/Users/lukin/OneDrive/Escritorio/UNL Tareas/MAVI/MAVI - Unidad 3e/Unidad3_Assets/fondo.jpg");
    spritePlataforma.setTexture(plataforma);

    RenderWindow window(VideoMode(800, 600), "Plataforma");

    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed)
                window.close();
        }

        window.clear();

        spritePlataforma.setScale(0.5f, 0.5f);
        spritePlataforma.setPosition(100, 500);
        window.draw(spritePlataforma);

        spritePlataforma.setPosition(300, 400);
        window.draw(spritePlataforma);

        spritePlataforma.setPosition(500, 300);
        window.draw(spritePlataforma);

        window.display();
    }

    return 0;
}