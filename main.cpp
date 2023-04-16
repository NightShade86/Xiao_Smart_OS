#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <windows.h>
#include <ctime>

using namespace std;
enum Position{ LEFT, CENTRE, RIGHT };
enum shapes
{   Circle = 0,
    Triangle = 3,
    Square = 4
};

void line();
void header();
void print( Position pos, string s, int linelength );
void os();
void SmartKira();
class SMARTANALYSE{
private:
    string ICnumber;
public:
    int statecode,birthYear,birthMonthnum,birthDay,age;
    string ic="030807011163",birthday,birthMonth,state,gender;
    void setICnumber(){cout<<"\nEnter your IC NUMBER :";cin>>ic;ICnumber=ic;};
    void getICnumber(){ic=ICnumber;cout<<"\n\nIC NUMBER : "<<ic;};
    void ALstate(){
        statecode= stoi(ic.substr(6, 2));
        switch (statecode) {
            case 0:
                state = "-";
                break;
            case 1:
            case 21:
            case 22:
            case 23:
            case 24:
                state = "Johor";
                break;
            case 2:
            case 25:
            case 26:
            case 27:
                state = "Kedah";
                break;
            case 3:
            case 28:
            case 29:
                state = "Kelantan";
                break;
            case 4:
            case 30:
                state = "Malacca";
                break;
            case 5:
            case 59:
                state = "Negeri Sembilan";
                break;
            case 6:
            case 32:
            case 33:
                state = "Pahang";
                break;
            case 7:
            case 36:
            case 37:
            case 38:
            case 39:
                state = "Perak";
                break;
            case 8:
            case 40:
                state = "Perlis";
                break;
            case 9:
                state = "Penang";
                break;
            case 10:
            case 47:
            case 48:
            case 49:
                state = "Sabah";
                break;
            case 11:
            case 50:
            case 51:
            case 52:
            case 53:
                state = "Sarawak";
                break;
            case 12:
            case 41:
            case 42:
            case 43:
            case 44:
                state = "Selangor";
                break;
            case 13:
            case 45:
            case 46:
                state = "Terengganu";
                break;
            case 14:
            case 54:
            case 55:
            case 56:
            case 57:
                state = "Federal Territory of Kuala Lumpur";
                break;
            case 15:
            case 58:
                state = "Federal Territory of Labuan";
                break;
            case 16:
                state = "Federal Territory of Putrajaya";
                break;
            case 17:
            case 18:
            case 19:
            case 20:
                state = "-";
                break;
            default:
                state = "Unknown";
                break;
        }
    };
    void ALgender(){
        if (ic[11]%2==0) {
            gender = "Female";
        }else{
            gender="Male";
        }
    };
    void ALbirthday(){
        birthYear = stoi(ic.substr(0, 2));
        if (birthYear < 30) {
            birthYear += 2000;
        }
        else {
            birthYear += 1900;
        }
        birthMonthnum = stoi(ic.substr(2, 2));
        switch (birthMonthnum) {
            case 1:
                birthMonth = "January";
                break;
            case 2:
                birthMonth = "February";
                break;
            case 3:
                birthMonth = "March";
                break;
            case 4:
                birthMonth = "April";
                break;
            case 5:
                birthMonth = "May";
                break;
            case 6:
                birthMonth = "June";
                break;
            case 7:
                birthMonth = "July";
                break;
            case 8:
                birthMonth = "August";
                break;
            case 9:
                birthMonth = "September";
                break;
            case 10:
                birthMonth = "October";
                break;
            case 11:
                birthMonth = "November";
                break;
            case 12:
                birthMonth = "December";
                break;
            default:
                birthMonth = "Invalid month number";
                break;
        }

        // Extract the birth day from the IC number.
        birthDay = stoi(ic.substr(4, 2));
        birthday=to_string(birthDay)+" "+ birthMonth+" "+ to_string(birthYear);
    };
    void ALage() {
        struct tm date = {0};
        date.tm_year = birthYear-1900;
        date.tm_mon  = birthMonthnum-1;
        date.tm_mday = birthDay;
        time_t normal = mktime(&date);
        time_t current;
        time(&current);
        age = ((difftime(current, normal) + 86400L/2) / 86400L)/365;
    }
};


int main() {
    const int LINELENGTH = 123;
    char choice,RPBP;
    int enUm;
    SMARTANALYSE RUN;

    MAIN_SCREEN:
    line();
    os();
    line();
    system("pause");


    Choices:
    system("CLS");
    header();
    cout<<"\n[A] Smart Kira\n[B] Smart Analyse\n[C] Smart Shape";
    cout<<"\nPlease pick a function you'd like to use [A/B/C] : ";
    cin>>choice;

    switch (choice) {
        case 'A':
            cout << endl;
            SmartKira();
            cout <<"\n"<< endl;
            break;
        case 'B':
            RUN.setICnumber();
            RUN.ALstate();
            RUN.ALgender();
            RUN.ALbirthday();
            RUN.getICnumber();
            RUN.ALage();

            cout<<"\n\n********** YOUR DATA **********";
            cout<<"\nState     : "<<RUN.state;
            cout<<"\nGender    : "<<RUN.gender;
            cout<<"\nBirthday  : "<<RUN.birthday;
            cout<<"\nAge       : "<<RUN.age<<" years old";
            cout<<"\n*******************************";
            break;
        case 'C':
            shape:
            system("CLS");
            header();
            cout<<"\n[1] Circle\n[2] Triangle\n[3] Square";
            cout<<"\n\nPlease pick your shape to know the amount of sides it has [1/2/3] : ";
            cin>>enUm;
            switch (enUm) {
                case 1:
                    cout << "\nThe amount of sides a Circle has is: " << Circle;
                    break;
                case 2:
                    cout << "\nThe amount of sides a Triangle has is: " << Triangle;
                    break;
                case 3:
                    cout << "\nThe amount of sides a Square has is: " << Square;
                    break;
                default:
                    cout<<"\n"
                          " _____ _   _ _   _  ___   _     ___________   _____ _   _ ______ _   _ _____ \n"
                          "|_   _| \\ | | | | |/ _ \\ | |   |_   _|  _  \\ |_   _| \\ | || ___ \\ | | |_   _|\n"
                          "  | | |  \\| | | | / /_\\ \\| |     | | | | | |   | | |  \\| || |_/ / | | | | |  \n"
                          "  | | | . ` | | | |  _  || |     | | | | | |   | | | . ` ||  __/| | | | | |  \n"
                          " _| |_| |\\  \\ \\_/ / | | || |_____| |_| |/ /   _| |_| |\\  || |   | |_| | | |  \n"
                          " \\___/\\_| \\_/\\___/\\_| |_/\\_____/\\___/|___/    \\___/\\_| \\_/\\_|    \\___/  \\_/  \n"
                          "                                                                             \n"
                          "                                                                             ";
                    sleep(1);
                    goto shape;
            }
            break;
        default:
            //PlaySound("Windows Critical Stop.wav", GetModuleHandle(NULL), SND_FILENAME);
            cout<<"\n"
                  " _____ _   _ _   _  ___   _     ___________   _____ _   _ ______ _   _ _____ \n"
                  "|_   _| \\ | | | | |/ _ \\ | |   |_   _|  _  \\ |_   _| \\ | || ___ \\ | | |_   _|\n"
                  "  | | |  \\| | | | / /_\\ \\| |     | | | | | |   | | |  \\| || |_/ / | | | | |  \n"
                  "  | | | . ` | | | |  _  || |     | | | | | |   | | | . ` ||  __/| | | | | |  \n"
                  " _| |_| |\\  \\ \\_/ / | | || |_____| |_| |/ /   _| |_| |\\  || |   | |_| | | |  \n"
                  " \\___/\\_| \\_/\\___/\\_| |_/\\_____/\\___/|___/    \\___/\\_| \\_/\\_|    \\___/  \\_/  \n"
                  "                                                                             \n"
                  "                                                                             ";
            sleep(1);
            goto Choices;
    }
    choice:
    cout<<"\nWould you like to perform another operation? [Y/N] :";
    cin>>RPBP;
    switch (RPBP) {
        case 'Y':
            goto Choices;
        case 'N':
            //PlaySound("Windows Shutdown.wav", GetModuleHandle(NULL), SND_FILENAME);
            system("CLS");
            print(CENTRE,">>>SYSTEM WILL SHUT DOWN NOW<<<",LINELENGTH);
            sleep(1);
            system("CLS");
            print(CENTRE,">>SYSTEM WILL SHUT DOWN NOW<<",LINELENGTH);
            sleep(1);
            system("CLS");
            print(CENTRE,">SYSTEM WILL SHUT DOWN NOW<",LINELENGTH);
            sleep(1);
            system("CLS");
            line();
            os();
            line();
            sleep(1);
            return 0;
        default:
            //PlaySound("Windows Critical Stop.wav", GetModuleHandle(NULL), SND_FILENAME);
            cout<<"\n"
                  " _____ _   _ _   _  ___   _     ___________   _____ _   _ ______ _   _ _____ \n"
                  "|_   _| \\ | | | | |/ _ \\ | |   |_   _|  _  \\ |_   _| \\ | || ___ \\ | | |_   _|\n"
                  "  | | |  \\| | | | / /_\\ \\| |     | | | | | |   | | |  \\| || |_/ / | | | | |  \n"
                  "  | | | . ` | | | |  _  || |     | | | | | |   | | | . ` ||  __/| | | | | |  \n"
                  " _| |_| |\\  \\ \\_/ / | | || |_____| |_| |/ /   _| |_| |\\  || |   | |_| | | |  \n"
                  " \\___/\\_| \\_/\\___/\\_| |_/\\_____/\\___/|___/    \\___/\\_| \\_/\\_|    \\___/  \\_/  \n"
                  "                                                                             \n"
                  "                                                                             ";
            sleep(1);
            goto choice;

    }
}
// FUNCTION DEFINITIONS
void os() {
    cout<<"\n"
          " /$$   /$$ /$$                      /$$$$$$                                      /$$            /$$$$$$   /$$$$$$ \n"
          "| $$  / $$|__/                     /$$__  $$                                    | $$           /$$__  $$ /$$__  $$\n"
          "|  $$/ $$/ /$$  /$$$$$$   /$$$$$$ | $$  \\__/ /$$$$$$/$$$$   /$$$$$$   /$$$$$$  /$$$$$$        | $$  \\ $$| $$  \\__/\n"
          " \\  $$$$/ | $$ |____  $$ /$$__  $$|  $$$$$$ | $$_  $$_  $$ |____  $$ /$$__  $$|_  $$_/        | $$  | $$|  $$$$$$ \n"
          "  >$$  $$ | $$  /$$$$$$$| $$  \\ $$ \\____  $$| $$ \\ $$ \\ $$  /$$$$$$$| $$  \\__/  | $$          | $$  | $$ \\____  $$\n"
          " /$$/\\  $$| $$ /$$__  $$| $$  | $$ /$$  \\ $$| $$ | $$ | $$ /$$__  $$| $$        | $$ /$$      | $$  | $$ /$$  \\ $$\n"
          "| $$  \\ $$| $$|  $$$$$$$|  $$$$$$/|  $$$$$$/| $$ | $$ | $$|  $$$$$$$| $$        |  $$$$/      |  $$$$$$/|  $$$$$$/\n"
          "|__/  |__/|__/ \\_______/ \\______/  \\______/ |__/ |__/ |__/ \\_______/|__/         \\___/         \\______/  \\______/ \n"
          "                                                                                                                  \n"
          "                                                                                                                  \n";
    cout<<"\t\t     \n"
          "\t\t     _            __   ___             _____                      _       _____ ____  \n"
          "\t\t    | |           \\ \\ / (_)           / ____|                    | |     / ____/ __ \\ \n"
          "\t\t    | |__  _   _   \\ V / _  __ _  ___| (___  _ __ ___   __ _ _ __| |_   | |   | |  | |\n"
          "\t\t    | '_ \\| | | |   > < | |/ _` |/ _ \\\\___ \\| '_ ` _ \\ / _` | '__| __|  | |   | |  | |\n"
          "\t\t    | |_) | |_| |  / . \\| | (_| | (_) ____) | | | | | | (_| | |  | |_   | |___| |__| |\n"
          "\t\t    |_.__/ \\__, | /_/ \\_|_|\\__,_|\\___|_____/|_| |_| |_|\\__,_|_|   \\__( )_\\_____\\____/ \n"
          "\t\t            __/ |                                                                   \n"
          "\t\t           |___/                                                                    ";
}
void print( Position pos, string s, int linelength )
{
    int spaces = 0;
    switch( pos )
    {
        case CENTRE: spaces = ( linelength - s.size() ) / 2; break;
        case RIGHT : spaces =   linelength - s.size()      ; break;
    }
    if ( spaces > 0 ) cout << string( spaces, ' ' );
    cout << s << '\n';
}
void header(){
    cout<<"\n################################################ XiaoSmart OS ####################################################\n";
}
void line(){
    cout<<"\n##################################################################################################################\n";
}

void SmartKira()
{
    int range = 5, temp,tempp;
    double number[range], total, average, minimum, maximum;
    //Input
    system("CLS");
    header();
    cout << "\nEnter 5 number..." << endl;
    for(int a = 1; a <= range; a++){
        do{
        cout << "Number " << a << ": ";
        cin >> number[a];
        }
        while(number[a] < 0);
    }

    //Total Number
    for(int b = 1; b <= range; b++){
        total += number[b];
    }

    //Average Number
    average = total / range;

    //Minimum Number
    minimum = number[range];
    for(int c = 1; c <= range; c++){
        if(number[c] < minimum){
            minimum = number[c];
        }
    }

    //Maximum Number
    maximum = number[range];
    for(int d = 1; d <= range; d++){
        if(number[d] > maximum){
            maximum = number[d];
        }
    }

    //Biggest to Smallest number
    for(int e = 1; e <= range; e++){
        for(int f = 1; f <= range; f++){
        if(number[e] < number[f]){
            temp = number[e];
            number[e] = number[f];
            number[f] = temp;
            }
        }
    }

    //Output SmartKira
    cout << "\nRESULT: " << endl;
    cout << "Total\t\t: " << total << endl;
    cout << "Average\t\t: " << average << endl;
    cout << "Smallest Number\t: " << minimum << endl;\
    cout << "Biggest Number\t: " << maximum << endl;

    cout<<"\n\n********** Swapped Numbers **********\n";
    tempp=minimum;
    minimum=maximum;
    maximum=tempp;
    cout << "Smallest Number\t: " << minimum << endl;
    cout << "Biggest Number\t: " << maximum << endl;
}
