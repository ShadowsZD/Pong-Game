#include "SFML/Graphics.hpp"
#include <iostream>
#include "player.h"

int main(int argc, char ** argv) {
    //sf::VideoMode::getDesktopMode().width
    //sf::VideoMode::getDesktopMode().height
    //test this to use on renderWindow to start game at desktop size

    sf::RenderWindow renderWindow(sf::VideoMode(640,480), "Pong!");

    sf::Event event;

    sf::Clock clock;

    //do a class for this, so we can initialize everything inside it
    sf::CircleShape ball(15);
    ball.setFillColor(sf::Color::White);
    ball.setOrigin(ball.getRadius(), ball.getRadius());
    ball.setPosition(640/2, 480/2); //ball on middle of screen, change the values to screensize later

    //renderWindow.setKeyRepeatEnabled(false);
    //uncomment above to let spam when holding keys
    while(renderWindow.isOpen()){   //check for events of last frame
        while(renderWindow.pollEvent(event)){   //handle events
            
            if(event.type == sf::Event::EventType::Closed)
                renderWindow.close(); //add some message to the player before closing

            if(event.type == sf::Event::EventType::KeyReleased){ //could use KeyPressed, but using released to prevent spam
                if(event.key.code == sf::Keyboard::Up){
                    //move board up
                    //replicate for other directions
                }
            }

        }



        std::cout << "Time since last frame(micro's): " <<
        clock.getElapsedTime().asMicroseconds() << std::endl;
        clock.restart();

        renderWindow.clear();
        renderWindow.draw(ball);
        renderWindow.display();

    }

}