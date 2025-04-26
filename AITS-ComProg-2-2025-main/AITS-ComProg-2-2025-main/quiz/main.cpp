#include "quiz_data.h"
#include <cstdlib>
#include <iostream>

int main() {
  int score = 0;
  int total;
  QuizData quiz;
  quiz.LoadFromFile("questions.txt");
  quiz.ShuffleQuestions();

  total = quiz.GetTotalQuestions();

  for (int i = 0; i < total; i++) {
    int userChoice;
    system("cls");
    quiz.DisplayQuestion(i);
    std::cout << "Enter your answer (0-3): ";
    std::cin >> userChoice;

    if (quiz.IsCorrect(i, userChoice)) {
      std::cout << "Correct!\n";
      score++;
    } else {
      std::cout << "Wrong!\n";
    }
    system("pause");
  }

  std::cout << "\nQuiz Complete! Your score: " << score << " / " << total
            << "\n";
  system("pause");

  return 0;
}