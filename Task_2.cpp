#include<iostream>
using namespace std;

int main()
{
    int choice;
    string dataType;
    cout<<"Enter the data Type: (int, float, bool) ";
    cin>>dataType;
    if(dataType != "int" && dataType != "float" && dataType != "bool")
    {
        cout<<"Invalid data type"<<endl;
        return 1;
    }
    if(dataType == "int")
    {
        int numone, numtwo, result;
        do{
            cout<<"1. Addition\n";
            cout<<"2. Subtraction\n";
            cout<<"3. Multiplication\n";
            cout<<"4. Division\n";
            cout<<"5. Exit\n\n";
            cout<< "Enter Your Choice: ";
            cin>> choice;
            if( choice >= 1 && choice <=4)
            {
                cout<< "Enetr two integrs: ";
                cin>> numone >> numtwo;
            }
            switch(choice)
            {
                case 1:
                result = numone + numtwo;
                cout<<"Result = "<< result<< endl;
                break;
                case 2:
                result = numone - numtwo;
                cout<<"Result = "<< result<< endl;
                break;
                case 3:
                result = numone * numtwo;
                cout<<"Result = "<< result<< endl;
                break;
                case 4:
                if(numtwo == 0)
                {
                    cout<<"Division by zero is not allowed"<< endl;
                }
                    else 
                    {
                         result  = numone/ numtwo;
                    }
                
                cout<<"Result = "<< result<< endl;
                break;
                case 5:
                cout<<"Exit"<< endl;
                return 0;
                default:
                cout<< "please select a choice which is available"<< endl;
            }
        }
        while(choice != 5);
        
    }else if (dataType == "float")
    {
        float numone, numtwo, result;
        do{
            cout<<"1. Addition\n";
            cout<<"2. Subtraction\n";
            cout<<"3. Multiplication\n";
            cout<<"4. Division\n";
            cout<<"5. Exit\n\n";
            cout<< "Enter Your Choice: ";
            cin>> choice;
            if( choice >= 1 && choice <=4)
            {
                cout<< "Enetr two integrs: ";
                cin>> numone >> numtwo;
            }
            switch(choice)
            {
                case 1:
                result = numone + numtwo;
                cout<<"Result = "<< result<< endl;
                break;
                case 2:
                result = numone - numtwo;
                cout<<"Result = "<< result<< endl;
                break;
                case 3:
                result = numone * numtwo;
                cout<<"Result = "<< result<< endl;
                break;
                case 4:
                if(numtwo == 0.0)
                {
                    cout<<"Division by zero is not allowed"<< endl;
                }
                    else 
                    {
                         result  = numone/ numtwo;
                    }
                
                cout<<"Result = "<< result<< endl;
                break;
                case 5:
                cout<<"Exit"<< endl;
                return 0;
                default:
                cout<< "please select a choice which is available"<< endl;
            }
        }
        while(choice != 5);
        
    }else if (dataType == "bool")
    {
        cout<<"boolean data type selected. you can only choose option 5"<< endl;
        do
        {
            cout<< "1. Exit\n";
            cout<<"Enter your choice(1): ";
            cin>> choice;
            if(choice != 1)
            {
                cout<< "Wrong choice!"<< endl;

            }

        }
        while(choice != 1);
        cout<< "Exit"<< endl;
        return 0;
    }
cout<< endl;
return 0;
}