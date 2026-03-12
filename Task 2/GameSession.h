#ifndef GAMESESSION_H
#define GAMESESSION_H

class GameSession {
public:
    GameSession();
    void StartGame();

private:
    void PlayerClick();
    void CalculateScore();
    void UpdateScore();
    bool IsGameOver();

    int score_;
    int targetScore_;
};

#endif