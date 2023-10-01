// Copyright 2023 Carter Strubbe
// Definitions of MultipleChoiceQuestion class. Includes
// an explicit constructor as well as a copy constructor
// to take in a MultipleChoiceQuestion object. Also includes
// accessor and mutator functions for numberOfChoices, assignment
// operator overload, destructor, and a print function that takes
// in a bool to determine whether to print the correctness of each
// answer choice.
#ifndef _MULTIPLECHOICEQUESTION_H_
#define _MULTIPLECHOICEQUESTION_H_

#include<string>
#include"question.h"
using std::string;

namespace csce240_program5 {
class MultipleChoiceQuestion : public Question {
 public:
  int GetNumberOfChoices() const { return numberOfChoices; }
  void SetNumberOfChoices(int newNumOfChoices);
  void SetAnswerChoices(int = 0, string * = nullptr, bool * = nullptr);
  explicit MultipleChoiceQuestion(string = "?", int = 0, string * = nullptr,
                                  bool * = nullptr);
  explicit MultipleChoiceQuestion(const MultipleChoiceQuestion&);
  MultipleChoiceQuestion& operator=(const MultipleChoiceQuestion& setTo);
  ~MultipleChoiceQuestion();
  void Print(bool) const;

 private:
  int numberOfChoices;
  string * answerChoices;
  bool * isCorrect;
};  // Ending bracket of class MultipleChoiceQuestion
}  // Ending bracket of namespace csce240_program5

#endif  // _MULTIPLECHOICEQUESTION_H_
