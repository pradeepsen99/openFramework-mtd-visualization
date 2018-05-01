#pragma once

#include "ofMain.h"
#include "bird.hpp"
#include "pipes.hpp"
#include <vector>

class ofApp : public ofBaseApp{
    
    enum GameState{
        IN_PROGRESS = 0,
        PAUSED,
        FINISHED
    };
    
private:
    //Background
    ofImage background;
    

    //GameState
    GameState current_state = IN_PROGRESS;
    
    //Constants
    const int gravity_value = 2;
    const int speed = 29;
    const int wall_moveSpeed = 5;
    const int spawn_time = 30;
    
    //Counters
    int number_of_pipes = 1;
    int spawn_timer = 0;
    
    //Functions
    void drawBird();
    void drawPipes();
    
    //Game Objects
    bird flappy;
    ofImage flappy_picture;
    
    std::vector<pipes> pipes_vector;
    std::vector<std::vector<ofImage>> pipes_images;
    
public:
    
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    
    void removeTop();

};
