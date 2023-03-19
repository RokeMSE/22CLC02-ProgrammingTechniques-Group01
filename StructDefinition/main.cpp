#include <iostream>
#include <fstream>

// #include "SFML/Graphics.hpp"

#include "enum.h"
#include "USER.h"
#include "DLL.h"
#include "DATE.h"
#include "CLASS.h"
#include "COURSE.h"
#include "academicYear.h"

using namespace std;

// // // // // struct Tree {
// // // // //     // using binary search tree
// // // // //     STUDENT data;
// // // // //     Tree* left;
// // // // //     Tree* right;
// // // // // };

int main () {
    USER a;
    STUDENT s;
    a.get(s);
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