#include<iostream>
using namespace std;

class calc{
    char ans='y';
    int choice=0;

    public:
    void display(){
        cout<<"\tPlease select the desired option as per your requirement: "<<endl<<"1. Add"<<endl<<"2. Subtract"<<endl<<"3. Multiply"<<endl<<"4. Divide"<<endl<<"5. x^y"<<endl<<"6. Roots"<<endl<<"7. Type Conversions"<<endl<<"8. Factorial"<<endl<<"9. Modulus"<<endl<<"10. logarithm"<<endl<<"11. exit"<<endl;

        
        while(ans=='y' || ans=='Y'){

            cout<<"\nYour Choice is: ";
            cin>>choice;

        switch(choice){
            case 1: 
                // add();
                // retry();
                break;
            case 2:
                // subtract();
                // retry();
                break;
            case 3: 
                // product();
                // retry();
                break;
            case 4:
                // div();
                // retry();
                break;
            case 5:
                // power();
                // retry();
                break;
            case 6:
                // root();
                // retry();
                break;               
            case 7:
                // typeConversion();
                // retry();
                break;
            case 8:
                // factorial();
                // retry();
                break;
            case 9:
                // modulus();
                // retry();
                break;
            case 10:
                // logarithm();
                // retry();
                break;
            case 11:
                exit(0);
            default:
                cout<<"You entered a wrong input :( "<<endl;
                cout<<" Wanna try again(Y or N): ";
                cin>>ans;

        }
        
        }
    
    }
};


int main(){
    calc c;
    c.display();
    return 0;
}
