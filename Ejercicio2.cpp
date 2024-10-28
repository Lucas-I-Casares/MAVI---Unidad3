#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "MAVI - Unidad 3e.h"

using namespace sf;

Texture texturaCirculoRojo;
Sprite circuloRojo;
Vector2f posiciones[4] = {
    {0, 0},                                
    {800, 0},                              
    {0, 600},                                
    {800, 600}                               
};


int main() {
    
    texturaCirculoRojo.loadFromFile("C:/Users/lukin/OneDrive/Escritorio/UNL Tareas/MAVI/MAVI - Unidad 3e/Unidad3_Assets/rcircle.png");

   
    circuloRojo.setTexture(texturaCirculoRojo);

    
    for (auto& pos : posiciones) {
        pos.x -= texturaCirculoRojo.getSize().x / 2;  
        pos.y -= texturaCirculoRojo.getSize().y / 2;  
    }

    RenderWindow App(VideoMode(800, 600), "Ventana con Circulos Rojos");

    while (App.isOpen()) {
        Event event;
        while (App.pollEvent(event)) {
            if (event.type == Event::Closed)
                App.close();
        }

        App.clear(); 

        
        for (const auto& pos : posiciones) {
            circuloRojo.setPosition(pos);  
            App.draw(circuloRojo);         
        }

        App.display();
    }

    return 0;
}