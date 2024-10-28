#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;

Texture cuadBlue, cuadGrey, cuadRed, cuadYellow;
Sprite spriteBlue, spriteGrey, spriteRed, spriteYellow;

int main() {
    cuadBlue.loadFromFile("C:/Users/lukin/OneDrive/Escritorio/UNL Tareas/MAVI/MAVI - Unidad 3e/Unidad3_Assets/cuad_blue.png");
    cuadGrey.loadFromFile("C:/Users/lukin/OneDrive/Escritorio/UNL Tareas/MAVI/MAVI - Unidad 3e/Unidad3_Assets/cuad_grey.png");
    cuadRed.loadFromFile("C:/Users/lukin/OneDrive/Escritorio/UNL Tareas/MAVI/MAVI - Unidad 3e/Unidad3_Assets/cuad_red.png");
    cuadYellow.loadFromFile("C:/Users/lukin/OneDrive/Escritorio/UNL Tareas/MAVI/MAVI - Unidad 3e/Unidad3_Assets/cuad_yellow.png");

    spriteBlue.setTexture(cuadBlue);
    spriteGrey.setTexture(cuadGrey);
    spriteRed.setTexture(cuadRed);
    spriteYellow.setTexture(cuadYellow);

    spriteBlue.setPosition(100, 100);
    spriteGrey.setPosition(300, 100);
    spriteRed.setPosition(500, 100);
    spriteYellow.setPosition(100, 300);

    RenderWindow window(VideoMode(800, 600), "Cuadrados con diferentes tamaños");

    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed)
                window.close();
        }

        window.clear();

        window.draw(spriteBlue);
        window.draw(spriteGrey);
        window.draw(spriteRed);
        window.draw(spriteYellow);

        window.display();
    }

    return 0;
}