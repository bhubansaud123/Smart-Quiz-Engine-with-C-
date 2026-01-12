
#include <iostream>
using namespace std;

class Question {
    string ques;
    string answer;
public:
    Question(string q, string a) : ques(q), answer(a) {}

    bool ask() {
        string user;
        cout << ques << endl;
        cin >> user;
        return user == answer;
    }
};

class Quiz {
    int score;
public:
    Quiz() { score = 0; }

    void start() {
        Question q1("Capital of India?", "Delhi");
        Question q2("2 + 2 = ?", "4");

        if (q1.ask()) score++;
        if (q2.ask()) score++;

        cout << "Score: " << score << "/2\n";
    }
};

int main() {
    Quiz q;
    q.start();
    return 0;
}
