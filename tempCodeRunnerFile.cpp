#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
    vector<string>studentNames;
    vector<double>studentGrades;
    string name;
    double grade;

    while(true)
    {
        cout<<"Enter a students name(type 'done' to finish): ";
        cin>> name;

        if(name == "done")
        {
            break;
        }

        studentNames.push_back(name);

        cout<<"Enter"<<name<<"s garde";
        cin>>grade;

        studentGrades.push_back(grade);

    }
    if(studentNames.empty())
    {
        cout<<"No student data provided.exiting."<<endl;
        return 1;

    }

    double totalGrades = 0.0;
    double higestGrade = studentGrades[0];
    double lowestGrade = studentGrades[0];

    for(double grade : studentGrades)
    {
        totalGrades+= grade;
        higestGrade = max(higestGrade, grade);
        lowestGrade = min(lowestGrade, grade);

    }
    
    double averageGrade = totalGrades / studentGrades.size();

    cout<<"Grade Summary: "<<endl;
    cout<<"      "<<endl;
    cout<<"Student Name| Grade"<<endl;

    for(int i = 0; i< studentNames.size(); ++i)
    {
        cout<<studentNames[i]<<"|"<<studentGrades[i]<<endl;

    }

    cout<<"        "<<endl;
    cout<<"Average Grade: "<<averageGrade<<endl;
    cout<<"Higest Grade : "<<higestGrade<<endl;
    cout<<"Lowest Grade: "<<lowestGrade<<endl;

    return 0;

}