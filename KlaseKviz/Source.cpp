#include<iostream>
using namespace std;

class Answer {
	string PossibleAnswer;
	bool IsTrue;

public: Answer();
public: Answer(string posAns, bool isT) {
	this->PossibleAnswer = posAns;
	this->IsTrue = isT;
}

	  void Info() {
		  cout << "Text: " << this->PossibleAnswer << endl;
		  cout << "Is true: " << this->IsTrue << endl;
	  }
};

class Question {
	int MaxAnswers = 5;
	Answer* AnswersArray;
	int ScoreValue;



public:Question();
public:Question(int maxans, int sv) {
	maxans = (maxans < 1) ? 2 : (maxans > 5) ? 5 : maxans;
	this->MaxAnswers = maxans;
	this->ScoreValue = sv;
	AnswersArray = new Answer[maxans];
};
};

class Quiz {
	string QuizName;
	int NumberOfQuestions;
	int MaxScore;
	Question* QuestionArray;

public:Quiz();
public:Quiz(string qname, int noq, int ms) {
	noq = (noq > 10) ? 10 : (noq < 1) ? 2 : noq;
	this->MaxScore = ms;
	this->NumberOfQuestions = noq;
	this->QuizName = qname;
	QuestionArray = new Question[NumberOfQuestions];
};


};




class HelperQuiz {

	void DodajQuiz();
	void DodajPitanje();



};


int main() {


	return 0;
}