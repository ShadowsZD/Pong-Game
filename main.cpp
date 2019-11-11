#include "SFML/Graphics.hpp"
#include <iostream>

int main(int argc, char ** argv) {
    sf::RenderWindow renderWindow(sf::VideoMode(640,480), "Pong!");

    sf::Event event;

    sf::Clock clock;

    //renderWindow.setKeyRepeatEnabled(false);
    //uncomment above to let spam when holding keys
    while(renderWindow.isOpen()){   //check for events of last frame
        while(renderWindow.pollEvent(event)){   //handle events
            
            if(event.type == sf::Event::EventType::Closed)
                renderWindow.close(); //add some message to the player before closing

            if(event.type == sf::Event::EventType::KeyReleased){ //could use KeyPressed, but using released to prevent spam
                if(event.key.code == sf::Keyboard::Up){
                    //move snake up
                    //replicate for other directions
                }
            }

        }



        std::cout << "Time since last frame(micro's): " <<
        clock.getElapsedTime().asMicroseconds() << std::endl;
        clock.restart();

        renderWindow.clear();
        renderWindow.display();
    }

}