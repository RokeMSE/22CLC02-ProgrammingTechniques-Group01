#include <iostream>
#include <fstream>

// #include "SFML/Graphics.hpp"

#include "enum.h"
#include "USER.h"
#include "STUDENT.h"
#include "STAFF.h"
#include "LIST.h"
#include "DATE.h"
#include "CLASS.h"
#include "COURSE.h"
#include "SCHOOLYEAR.h"

using namespace std;

int main () {
    LIST<STUDENT> allstu;
    
    
    return 0;
}
/*
int main () {
    sf::RenderWindow window(sf::VideoMode({640, 480}), "SFML Application");
    sf::CircleShape shape;
    shape.setRadius(40.f);
    shape.setPosition({100.f, 100.f});
    shape.setFillColor(sf::Color::Cyan);
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        window.draw(shape);
        window.display();
    }
    return 0;
}
*/