#include <iostream>
using namespace std;

float calculatePercentage(float eng, float math, float bio, float chem, float soc)
{
    return ((eng + math + bio + chem + soc) / 500) * 100;
}
string grade(float percentage){
    if(percentage >=90){
        return "A+";
    }
    else if(percentage >=80){
        return "A";
    }
    else if(percentage >=70){
        return "B+";
    }
    else if(percentage >=60){
        return "B";
    }
    else if(percentage >=50){
        return "C";
    }
    else if(percentage >=40){
        return "D";
    }
    else {
        return "F";
    }
}
main()
{
    string name;
    float mEng, mMath, mChem, mSoc, mBio;
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter marks for English: ";
    cin >> mEng;
    cout << "Enter marks for Maths: ";
    cin >> mMath;
    cout << "Enter marks for Chemistry: ";
    cin >> mChem;
    cout << "Enter marks for Social Science: ";
    cin >> mSoc;
    cout << "Enter marks for Biology: ";
    cin >> mBio;
    cout << "Student Name: " << name << endl;
    float percentage = calculatePercentage(mEng, mMath, mBio, mChem, mSoc);
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade(percentage);
}