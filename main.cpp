#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <windows.h>

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
void test(){

}
void SmartKira();


int main() {
    const int LINELENGTH = 123;
    char choice,RPBP;
    int enUm;

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
            // [Insert SMARTKIRA HERE]
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
    cout<<"\nWould you like to perform another operation? [Y/N]\n";
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
    cout << "Enter 5 number..." << endl;
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
