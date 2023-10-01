// Copyright 2023 Carter Strubbe
// Implementation of functions for class TrueFalseQuestion.
#include<iostream>
#include<string>
#include"question.h"
using csce240_program5::Question;
#include"truefalsequestion.h"
using std::string;
using std::cout;
using std::endl;

namespace csce240_program5 {
  TrueFalseQuestion::TrueFalseQuestion(string q, bool answer) {
    SetQuestion(q);
    SetAnswer(answer);
  }  // Ending bracket of constructor
  void TrueFalseQuestion::SetAnswer(bool newAnswer) {
    answer = newAnswer;
  }  // Ending bracket of function SetAnswer

  // Function to print Question. Takes in a boolean to determine
  // whether or not to display the answer.

  void TrueFalseQuestion::Print(bool displayAnswer) const {
    cout << "Question: " << GetQuestion() << endl;
    if ( displayAnswer ) {
        if ( answer ) {
            cout << "Correct Answer: true" << endl;
        } else {
            cout << "Correct Answer: false" << endl;
        }  // Ending bracket of INNER if
    }  // Ending bracket of OUTER if
  }  // Ending bracket of function Print
}  // namespace csce240_program5
