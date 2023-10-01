// Copyright 2023 Carter Strubbe
// Implementation of the functions for ShortAnswerQuestion.
#include<iostream>
#include<string>
#include"question.h"
using csce240_program5::Question;
#include"shortanswerquestion.h"
using csce240_program5::ShortAnswerQuestion;
using std::string;
using std::cout;
using std::endl;

namespace csce240_program5 {
  ShortAnswerQuestion::ShortAnswerQuestion(string q, string a) {
    SetQuestion(q);
    SetAnswer(a);
  }  // Ending bracket of constructor
  void ShortAnswerQuestion::SetAnswer(string newAnswer) {
    answer = newAnswer;
  }  // Ending bracket of function SetAnswer

  // Function to always print the question and print the
  // answer based on the boolean parameter it takes in.

  void ShortAnswerQuestion::Print(bool displayAnswer) const {
    cout << "Question: " << GetQuestion() << endl;
    if ( displayAnswer ) {
      cout << "Correct Answer: " << GetAnswer() << endl;
    }  // Ending bracket of if
  }  // Ending bracket of function Print
}  // Ending bracket of namespace csce240_program5
