#include "quiz_data.h"
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

QuizData::QuizData() {
  totalQuestions = 0;
  srand(static_cast<unsigned int>(time(0)));
}

void QuizData::LoadFromFile(const string &fileName) {
  string line;
  int questionIndex = -1;
  int choiceIndex = 0;

  ifstream file(fileName);
  if (!file) {
    cerr << "Error: Cannot open file." << endl;
    return;
  }

  while (getline(file, line)) {
    if (line.substr(0, 2) == "Q:") {
      questionIndex++;
      choiceIndex = 0;

      if (questionIndex >= MAX_QUESTIONS) {
        cerr << "Exceeded MAX_QUESTIONS limit.\n";
        break;
      }

      questionList[questionIndex] = line.substr(3);
      cout << "Loaded question " << questionIndex + 1 << ": "
           << questionList[questionIndex] << "\n";

    } else if (line.substr(0, 2) == "A:") {
      if (choiceIndex >= MAX_CHOICES) {
        cerr << "Too many choices for question #" << questionIndex + 1 << "\n";
        continue;
      }

      choiceList[questionIndex][choiceIndex] = line.substr(3);
      choiceIndex++;

    } else if (line.substr(0, 2) == "C:") {
      correctAnswerIndex[questionIndex] = stoi(line.substr(3));
    }
  }

  totalQuestions = questionIndex;
  cout << "Total questions loaded: " << totalQuestions << "\n";
  file.close();
}

void QuizData::ShuffleQuestions() {
  if (totalQuestions <= 0 || totalQuestions > MAX_QUESTIONS) {
    cerr << "[ShuffleQuestions] Invalid question count: " << totalQuestions
         << "\n";
    return;
  }

  for (int i = 0; i < totalQuestions - 1; i++) {
    int j = i + rand() % (totalQuestions - i);
    swap(questionList[i], questionList[j]);
    for (int k = 0; k < MAX_CHOICES; k++) {
      swap(choiceList[i][k], choiceList[j][k]);
    }
    SwapInt(correctAnswerIndex[i], correctAnswerIndex[j]);
  }
}

void QuizData::ShuffleChoices(int questionIndex) {
  if (questionIndex < 0 || questionIndex >= MAX_QUESTIONS) {
    cerr << "[ShuffleChoices] Invalid question index: " << questionIndex
         << "\n";
    return;
  }

  for (int i = 0; i < MAX_CHOICES - 1; i++) {
    int j = i + rand() % (MAX_CHOICES - i);
    swap(choiceList[questionIndex][i], choiceList[questionIndex][j]);

    if (correctAnswerIndex[questionIndex] == i)
      correctAnswerIndex[questionIndex] = j;
    else if (correctAnswerIndex[questionIndex] == j)
      correctAnswerIndex[questionIndex] = i;
  }
}

void QuizData::DisplayQuestion(int index) {
  if (index < 0 || index >= totalQuestions) {
    cerr << "Invalid question index: " << index << "\n";
    return;
  }

  ShuffleChoices(index);
  cout << "\n" << index + 1 << ". " << questionList[index] << endl;
  for (int i = 0; i < MAX_CHOICES; i++) {
    cout << "  " << i << ": " << choiceList[index][i] << endl;
  }
}

bool QuizData::IsCorrect(int questionIndex, int userChoice) {
  return userChoice == correctAnswerIndex[questionIndex];
}

int QuizData::GetTotalQuestions() const { return totalQuestions; }

void QuizData::SwapInt(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}
