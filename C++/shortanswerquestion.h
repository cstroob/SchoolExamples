// Copyright 2023 Carter Strubbe
// Definitions for class ShortAnswerQuestion. Includes
// an explicit constructor with default values of "?"
// for Question and "" for answer. Also includes accessor
// and mutator functions for answer as well as a print
// function that displays the question along with the
// answer based on the boolean parameter it takes in.
#ifndef _SHORTANSWERQUESTION_H_
#define _SHORTANSWERQUESTION_H_

#include<iostream>
#include<string>
#include"question.h"
using std::string;
using std::cout;
using std::endl;

namespace csce240_program5 {
class ShortAnswerQuestion : public Question {
 public:
  explicit ShortAnswerQuestion(string q = "?", string a = "");
  string GetAnswer() const { return answer; }
  void SetAnswer(string newAnswer);
  void Print(bool displayAnswer) const;

 private:
  string answer;
};  // Ending bracket of class ShortAnswerQuestion
}  // Ending bracket of namespace csce240_program5

#endif  // _SHORTANSWERQUESTION_H_
