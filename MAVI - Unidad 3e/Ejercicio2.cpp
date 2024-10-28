#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;

Texture chessW, chessB;
Sprite spriteW, spriteB;
const int TILE_SIZE = 100;

int main() {
    chessW.loadFromFile("C:/Users/lukin/OneDrive/Escritorio/UNL Tareas/MAVI/MAVI - Unidad 3e/Unidad3_Assets/chessw.png");
    chessB.loadFromFile("C:/Users/lukin/OneDrive/Escritorio/UNL Tareas/MAVI/MAVI - Unidad 3e/Unidad3_Assets/chessb.png");

    spriteW.setTexture(chessW);
    spriteB.setTexture(chessB);

    RenderWindow window(VideoMode(800, 800), "Tablero de Ajedrez");

    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed)
                window.close();
        }

        window.clear();

        for (int y = 0; y < 8; ++y) {
            for (int x = 0; x < 8; ++x) {
                Sprite& casilla = (x + y) % 2 == 0 ? spriteW : spriteB;
                casilla.setPosition(x * TILE_SIZE, y * TILE_SIZE);
                window.draw(casilla);
            }
        }

        window.display();
    }

    return 0;
}
