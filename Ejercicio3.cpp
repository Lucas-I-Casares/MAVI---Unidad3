#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;

Texture fondo;
Sprite spriteFondo;

int main() {
    fondo.loadFromFile("C:/Users/lukin/OneDrive/Escritorio/UNL Tareas/MAVI/MAVI - Unidad 3e/Unidad3_Assets/fondo.jpg");
    spriteFondo.setTexture(fondo);
    spriteFondo.setScale(800.0f / fondo.getSize().x, 600.0f / fondo.getSize().y);

    RenderWindow window(VideoMode(800, 600), "Fondo");

    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(spriteFondo);
        window.display();
    }

    return 0;
}
