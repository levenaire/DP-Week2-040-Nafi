#include "GameSession.h"
#include <iostream>

GameSession::GameSession()
    : score_(0), targetScore_(10) {}

void GameSession::StartGame() {

    std::cout << "=== Button Click Game Start ===\n";

    while (!IsGameOver()) {

        PlayerClick();
        CalculateScore();
        UpdateScore();

        std::cout << "Current score: " << score_ << "\n\n";
    }

    std::cout << "Target score reached!\n";
}

void GameSession::PlayerClick() {
    std::cout << "Player clicks the button\n";
}

void GameSession::CalculateScore() {
    std::cout << "System calculates score gain\n";
}

void GameSession::UpdateScore() {
    int gain = 2;
    score_ += gain;

    std::cout << "Score +" << gain << "\n";
}

bool GameSession::IsGameOver() {
    return score_ >= targetScore_;
}