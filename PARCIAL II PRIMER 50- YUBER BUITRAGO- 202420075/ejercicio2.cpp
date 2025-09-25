#include <iostream>

using namespace std;

int isCorrect(char userAnswer, char correctAnswer){


    if (userAnswer == correctAnswer)
    {
        return true;
    }
    else
    {
        return false;
    }

}
int questionScore(bool corerct){
    
    char correct1, correct2, correct3;
    correct1 = "a";
    correct2 = "b";
    correct3 = "b";

    return ;
}
int playQuiz(){

    char userAnswer, correctAnswer;
    bool correct;

    cout << "1+1=2" << endl << "a. si" << endl << "b. no";
    cin >> userAnswer;
    cout << "5+4=19" << endl << "a. si" << endl << "b. no";
    cin >> userAnswer;
    cout << "9+35=73" << endl << "a. si" << endl << "b. no";
    cin >> userAnswer;




}

int main(){
    
    playQuiz();
   
    return 0;
}