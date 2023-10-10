/*define a class to represent lecture details.
include the following members and the program should handle at least details of 5 lecture.
Data members:                   Data function:
A)Name of the lecturer          A)To assign initial values
B)Name of the subject           B)To add a lecture details
C)Name of the course            C)To display name and lecture details
D)Name of  the lecturers */

#include<iostream>
#include<string.h>
using namespace std;

class lecture
{
	int lecno;
    string lecname,subname,couname;
    
public:
void setdetails()
{
	cout<<"Enter number of lecture: ";
    cin>>lecno;
    cout<<"Enter lecturer name: ";
    cin>>lecname;
    cout<<"Enter subject name: ";
    cin>>subname;
    cout<<"Enter course name: ";
    cin>>couname;
    cout<<endl;
}

void getdetails()
{
    cout<<"\nnumber of lecture:"<<lecno<<endl<<"lecturer Name:"<<lecname<<endl<<"subject Name:"<<subname<<endl<<"course Name:"<<couname<<endl;
}
};

int main(int argc, char const *argv[])
{
    
    int count;
    cout<<"Enter the total number of lecture: ";
    cin>>count;

    if(count>0)
    {
        
        lecture lectureArray[count];
        for(int i=0;i<count;i++)
        {
            cout<<"-----lecture details------"<<endl;
            lectureArray[i].setdetails();
        }

        cout<<"\n-----Display lecture detail-----"<<endl;
        for(int i=0;i<count;i++)
        {
            lectureArray[i].getdetails();
        }
    }
    else
    {
        cout<<"Please enter a valid number."<<endl;
    }
    return 0;
}
