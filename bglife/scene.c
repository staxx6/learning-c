/*
    A scene represent a state of a game like 
    start-menu, pause-menu, play, inventory...

    Each scene contains a set of data and update/ render
    functions.
*/

int update(int (*_update)(void)) {
    _update();
}