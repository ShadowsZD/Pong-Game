#include "player.h"

Player::Player(float startX, float startY){
    position.x = startX;
    position.y = startY;

    pad.setSize(sf::Vector2f(5, 50));
    pad.setPosition(position);
    padSpeed = .3f;
}

sf::FloatRect Player::getPosition(){
    return pad.getGlobalBounds();
}

sf::RectangleShape Player::getShape(){
    return pad;
}

void Player::moveUp(){
    position.y += padSpeed;
}

void Player::moveDown(){
    position.y -= padSpeed;
}

void Player::update(){
    pad.setPosition(position);
}