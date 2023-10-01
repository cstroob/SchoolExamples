// Copyright 2023 Carter Strubbe
// Implementation of MultipleChoiceQuestion functions
#include<iostream>
#include<string>
#include"question.h"
#include"multiplechoicequestion.h"
using std::string;
using std::cout;
using std::endl;

namespace csce240_program5 {

    void MultipleChoiceQuestion::SetNumberOfChoices(int newNumOfChoices) {
        numberOfChoices = newNumOfChoices;
    }  // Ending bracket of function SetNumberOfChoices

    void MultipleChoiceQuestion::SetAnswerChoices(int amt, string * answers,
                                                  bool * correct) {
        numberOfChoices = amt;
        answerChoices = new string[amt];
        isCorrect = new bool[amt];
        for ( int i = 0; i < amt; ++i ) {
            answerChoices[i] = answers[i];
            isCorrect[i] = correct[i];
        }  // Ending bracket of for loop
    }  // Ending bracket of function SetNumberOfChoices

    MultipleChoiceQuestion::MultipleChoiceQuestion(string question,
     int numOfChoices, string * ansChoices, bool * correct) {
        SetQuestion(question);
        SetNumberOfChoices(numOfChoices);
        answerChoices = new string[numOfChoices];
        isCorrect = new bool[numOfChoices];
        if ( ansChoices == nullptr ) {
            for ( int i = 0; i < numOfChoices; ++i ) {
                answerChoices[i] = "";
            }  // Ending bracket of for loop
        } else {
            for ( int i = 0; i < numOfChoices; ++i ) {
                answerChoices[i] = ansChoices[i];
            }  // Ending bracket of for loop
        }  // Ending bracket of if (Set based on if passed nullptr)
        if ( correct == nullptr ) {
            for ( int i = 0; i < numOfChoices; ++i ) {
                isCorrect[i] = true;
            }  // Ending bracket of for loop
        } else {
            for ( int i = 0; i < numOfChoices; ++i ) {
                isCorrect[i] = correct[i];
            }  // Ending bracket of for loop
        }  // Ending bracket of if (Set based on if passed nullptr)
    }  // Ending bracket of constructor

    MultipleChoiceQuestion::MultipleChoiceQuestion
    (const MultipleChoiceQuestion& q) {
        SetQuestion(q.GetQuestion());
        SetNumberOfChoices(q.GetNumberOfChoices());
        answerChoices = new string[q.GetNumberOfChoices()];
        isCorrect = new bool[q.GetNumberOfChoices()];
        for ( int i = 0; i < q.GetNumberOfChoices(); ++i ) {
            answerChoices[i] = q.answerChoices[i];
            isCorrect[i] = q.isCorrect[i];
        }  // Ending bracket of for loop
    }  // Ending bracket of copy constructor

    MultipleChoiceQuestion::~MultipleChoiceQuestion() {
        delete [] answerChoices;
        delete [] isCorrect;
    }  // Ending bracket of destructor

    MultipleChoiceQuestion& MultipleChoiceQuestion::operator =
    (const MultipleChoiceQuestion& setTo) {
        if (this == &setTo)
            return * this;
        SetQuestion(setTo.GetQuestion());
        SetNumberOfChoices(setTo.GetNumberOfChoices());
        delete [] answerChoices;
        delete [] isCorrect;
        answerChoices = new string[numberOfChoices];
        isCorrect = new bool[numberOfChoices];
        for ( int i = 0; i < numberOfChoices; ++i ) {
            answerChoices[i] = setTo.answerChoices[i];
            isCorrect[i] = setTo.isCorrect[i];
        }  // Ending bracket of for loop
        return * this;
    }  // Ending bracket of overloaded = operator

    void MultipleChoiceQuestion::Print(bool showAnswers) const {
        cout << "Question: " << GetQuestion() << endl;
        cout << "Answer Choices:" << endl;
        for ( int i = 0; i < numberOfChoices; ++i ) {
            cout << answerChoices[i];
            if ( showAnswers ) {
                if ( isCorrect[i] ) {
                    cout << " - correct" << endl;
                } else {
                    cout << " - incorrect" << endl;
                }  // Ending bracket of INNER if
            } else {
                cout << endl;
            }  // Ending bracket of if (Display answers)
        }  // Ending bracket of for loop
    }  // Ending bracket of function print
}  // Ending bracket of namespace csce240_program5
