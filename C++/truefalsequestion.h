// Copyright 2023 Carter Strubbe
// Definitions of class TrueFalseQuestion. Includes an explicit constructor
// with default arguments of "?" for question and "true" for answer. Also
// provides accessor and mutator functions for answer as well as a print
// function that takes in a boolean to determine whether or not to display
// the answer along with the question.
#ifndef _TRUEFALSEQUESTION_H_
#define _TRUEFALSEQUESTION_H_

#include<iostream>
#include<string>
#include"question.h"
using std::string;
using std::cout;
using std::endl;

namespace csce240_program5 {
class TrueFalseQuestion : public Question {
 public:
  explicit TrueFalseQuestion(string question = "?", bool answer = true);
  bool GetAnswer() const { return answer; }
  void SetAnswer(bool newAnswer);
  void Print(bool displayAnswer) const;

 private:
  bool answer;
};  // Ending bracket of class TrueFalseQuestion
}  // Ending bracket of namespace csce240_program5

#endif  // _TRUEFALSEQUESTION_H_
