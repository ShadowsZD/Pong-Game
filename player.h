#include "SFML/Graphics.hpp"

class Player{
    private:
        sf::Vector2f position;
        sf::RectangleShape pad;
        float padSpeed;

    public:
        Player(float startX, float startY);
        sf::FloatRect getPosition();
        sf::RectangleShape getShape();
        void moveUp();
        void moveDown();
        void update();
};