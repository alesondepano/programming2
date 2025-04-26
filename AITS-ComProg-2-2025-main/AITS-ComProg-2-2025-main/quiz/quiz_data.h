#ifndef QUIZ_DATA_H
#define QUIZ_DATA_H

#include <string>

class QuizData {
public:
  QuizData();
  void LoadFromFile(const std::string &fileName);
  void ShuffleQuestions();
  void DisplayQuestion(int index);
  bool IsCorrect(int questionIndex, int userChoice);
  int GetTotalQuestions() const;

private:
  static const int MAX_QUESTIONS = 25;
  static const int MAX_CHOICES = 4;

  std::string questionList[MAX_QUESTIONS];
  std::string choiceList[MAX_QUESTIONS][MAX_CHOICES];
  int correctAnswerIndex[MAX_QUESTIONS];
  int totalQuestions;

  void ShuffleChoices(int questionIndex);
  void SwapInt(int &a, int &b);
};

#endif // QUIZ_DATA_H
