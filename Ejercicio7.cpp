#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;

Texture texturaCirculoRojo, texturaPuntoAzul;
Sprite spriteCirculoRojo, spritePuntoAzul;

int main() {
    texturaCirculoRojo.loadFromFile("C:/Users/lukin/OneDrive/Escritorio/UNL Tareas/MAVI/MAVI - Unidad 3e/Unidad3_Assets/circulo_rojo.png");
    texturaPuntoAzul.loadFromFile("C:/Users/lukin/OneDrive/Escritorio/UNL Tareas/MAVI/MAVI - Unidad 3e/Unidad3_Assets/punto_azul.png");

    spriteCirculoRojo.setTexture(texturaCirculoRojo);
    spritePuntoAzul.setTexture(texturaPuntoAzul);
    spritePuntoAzul.setPosition(400 - texturaPuntoAzul.getSize().x / 2, 300 - texturaPuntoAzul.getSize().y / 2);

    RenderWindow window(VideoMode(800, 600), "Punto Azul Transparente");

    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed)
                window.close();
        }

        window.clear();

        window.draw(spriteCirculoRojo);
        window.draw(spritePuntoAzul);

        window.display();
    }

    return 0;
}