//progrm to create quiz application
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int score = 0, answer;
    

    cout << " Quiz Application !!" << endl;
    cout << "Each correct answer carries 2 mark." << endl;
    cout<<"Enter Option number in answer only";

    // Question 1
    cout << "\nQ1. Runs scored by Virat Kohli in his Test Match Career ?" << endl;
    cout << "1. 10,000" << endl;
    cout << "2. 9230" << endl;
    cout << "3. 5000" << endl;
    cout << "4. 9999" << endl;
    cout << "Enter your answer: ";
    cin >> answer;

    if(answer == 2)
    {
        cout << "Correct!" << endl;
        score+=2;
    }
    else
    {
        cout << "Wrong! Correct answer is 9230." << endl;
    }

    // Question 2
    cout << "\nQ2. In which year students gave two times NEET examination?" << endl;
    cout << "1. 2025" << endl;
    cout << "2. 2027" << endl;
    cout << "3. 2026" << endl;
    cout << "4. 2023" << endl;
    cout << "Enter your answer: ";
    cin >> answer;

    if(answer == 3)
    {
        cout << "Correct!" << endl;
        score+=2;
    }
    else
    {
        cout << "Wrong! Correct answer is 2026." << endl;
    }

    // Question 3
    cout << "\nQ3. Which language is primarily used in Maharastra?" << endl;
    cout << "1. Hindi" << endl;
    cout << "2. Cannada" << endl;
    cout << "3. Marathi" << endl;
    cout << "4. English" << endl;
    cout << "Enter your answer: ";
    cin >> answer;

    if(answer == 3)
    {
        cout << "Correct!" << endl;
        score+=2;
    }
    else
    {
        cout << "Wrong! Correct answer is Marathi." << endl;
    }

    // Question 4
    cout << "\nQ4. Which planet is known as the Red Planet?" << endl;
    cout << "1. Earth" << endl;
    cout << "2. Mars" << endl;
    cout << "3. Venus" << endl;
    cout << "4. Jupiter" << endl;
    cout << "Enter your answer: ";
    cin >> answer;

    if(answer == 2)
    {
        cout << "Correct!" << endl;
        score+=2;
    }
    else
    {
        cout << "Wrong! Correct answer is Mars." << endl;
    }

    // Question 5
    cout << "\nQ5. To which university GLBITM,Greater NOida is affiliated to ?" << endl;
    cout << "1. CCSU" << endl;
    cout << "2. AKTU" << endl;
    cout << "3. MJPRU" << endl;
    cout << "4. Has it's own UGC and AICTE grant" << endl;
    cout << "Enter your answer: ";
    cin >> answer;

    if(answer == 2)
    {
        cout << "Correct!" << endl;
        score+=2;
    }
    else
    {
        cout << "Wrong! Correct answer is for." << endl;
    }

    cout << "\n Quiz Result ~" << endl;
    cout << "Your Score: " << score << " out of 10" << endl;

    if(score == 10)
    {
        cout << "Excellent! Perfect Score!" << endl;
    }
    else if(score >= 6)
    {
        cout << "Good Job!" << endl;
    }
    else
    {
        cout << "Keep Practicing!" << endl;
    }

    return 0;
}
