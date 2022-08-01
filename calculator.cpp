#include<iostream>
#include<cmath>
#include<ctime>
using namespace std;

class calc{
    char ans='y';
    int choice=0,a,b,val;

    public:
    void display(){
        cout<<"\tPlease select the desired option as per your requirement: "<<endl<<"1. Add"<<endl<<"2. Subtract"<<endl<<"3. Multiply"<<endl<<"4. Divide"<<endl<<"5. x^y"<<endl<<"6. Roots"<<endl<<"7. Type Conversions"<<endl<<"8. Factorial"<<endl<<"9. Modulus"<<endl<<"10. logarithm"<<endl<<"11. exit"<<endl;

        
        while(ans=='y' || ans=='Y'){

            cout<<"\nYour Choice is: ";
            cin>>choice;

        switch(choice){
            case 1: 
                add();
                retry();
                break;
            case 2:
                subtract();
                retry();
                break;
            case 3: 
                product();
                retry();
                break;
            case 4:
                div();
                retry();
                break;
            case 5:
                power();
                retry();
                break;
            case 6:
                 root();
                retry();
                break;               
            case 7:
                // typeConversion();
                retry();
                break;
            case 8:
                // factorial();
                retry();
                break;
            case 9:
                // modulus();
                retry();
                break;
            case 10:
                // logarithm();
                retry();
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



    // Retry function for all the retry operations
    void retry(){
        cout<<"\n\nWant to do some more operations (Y/N  or y/n):  ";
        cin>>ans;

    }
    //Design function for the heading.
    void design()
{  
    time_t  t = time(NULL);
        tm * tPtr = localtime(&t);
        cout<<"Date:"<<tPtr->tm_mday<<"/"<<tPtr->tm_mon+1<<"/"<<tPtr->tm_year+1900<<endl;
        cout<<"Time:"<<tPtr->tm_hour<<":"<<tPtr->tm_min<<":"<<tPtr->tm_sec<<endl;

            cout<<"                                                                 Authors:-"<<endl;
            cout<<"                                                                 Sayan"<<endl;
            cout<<"                                                                 Soubhagya"<<endl;




            cout<<"                (o)______________________________WELCOME USER___________________________________(o)\n\n"<<endl;
}


    // 1.function.add
    void add(){
        cout<<"enter the two numbers: ";
        cin>>a>>b;
        cout<<"\n\n";
        cout<<"The sum is: "<<a+b<<endl;
    }

    // 2.function.subtract
    void subtract(){
        cout<<"enter the two numbers: ";
        cin>>a>>b;
        cout<<"\n\n";
        if(a>b)
            val=a-b;
        else
            val=b-a;
        cout<<"The difference is: "<<val<<endl;

    }

    // 3.function.multiply
    void product(){
        cout<<"enter the two numbers: ";
        cin>>a>>b;
        cout<<"\n\n";

        cout<<"The product is: "<<a*b<<endl;
    }

    // 4.function.divide
    void div(){
        cout<<"enter the two numbers: ";
        cin>>a>>b;
        cout<<"\n\n";
        float newVal;
        newVal=a/b;
        cout<<"The division is: "<<newVal<<endl;
    }

    // 5.function.
    void power(){
        cout<<"enter the number and the power you want: ";
        cin>>a>>b;
        cout<<"\n\n";
        val=pow(a,b);
        cout<<"Your ans is: "<<val;
    }
    //6.Roots
     void root(){
        cout<<"enter the number and the power you want: ";
        cin>>a>>b;
        cout<<"\n\n";
        val=pow((float)a,(float)1.0/b);
        cout<<"Your ans is: "<<val;
    }
};


int main(){
    calc c;
    c.design();
    c.display();
    return 0;
}
