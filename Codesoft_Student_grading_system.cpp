
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    string name[100];
    double grades[100];
    cout << "Enter total student : " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter a student " << i + 1 << " name " << endl;
        cin >> name[i];
        cout << "Enter a student " << i + 1 << " grades(A,B,C,D,E,F) " << endl;
        cin >> grades[i];
    }

    double sum_grade = 0;
    double highest_grade = grades[0];
    double lowest_grade = grades[0];
    for (int i = 0; i < n; i++)
    {
        sum_grade = sum_grade + grades[i];
        if (grades[i] > highest_grade)
        {
            highest_grade= grades[i];
        }
        if (grades[i] < lowest_grade)
        {
            lowest_grade= grades[i];
        }
    }
    double avg_grade = sum_grade / n;

    cout<<"Student average garde : "<<avg_grade<<endl;
    cout<<"Student highest grade : "<<highest_grade<<endl;
    cout<<"Student lowest grade : "<<lowest_grade<<endl;

    return 0;
}