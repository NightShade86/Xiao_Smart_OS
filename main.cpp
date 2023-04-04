#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <windows.h>

using namespace std;
enum Position{ LEFT, CENTRE, RIGHT };

void line();
void header();
void print( Position pos, string s, int linelength );
void os();
void test(){

}


int main() {
    const int LINELENGTH = 123;
    char choice,RPBP;

    MAIN_SCREEN:
    line();
    os();
    line();
    system("pause");


    Choices:
    system("CLS");
    header();
    cout<<"\n[A] Smart Kira\n[B] Smart Analyse\n[C] Smart Shape";
    cout<<"\nPlease pick a function you'd like to use : ";
    cin>>choice;

    switch (choice) {
        case 'A':
            // [Insert SMARTKIRA HERE]
            break;
        case 'B':
            // [Insert SMARTKIRA HERE]
            break;
        case 'C':
            // [Insert SMARTKIRA HERE]
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
            goto Choices;
    }
    choice:
    cout<<"Would you like to perform another operation? [Y/N]\n";
    cin>>RPBP;
    switch (RPBP) {
        case 'Y':
            goto Choices;
        case 'N':
            //PlaySound("Windows Shutdown.wav", GetModuleHandle(NULL), SND_FILENAME);
            system("CLS");
            print(CENTRE,">>>SYSTEM WILL SHUT DOWN NOW<<<",LINELENGTH);
            usleep(1);
            system("CLS");
            print(CENTRE,">>SYSTEM WILL SHUT DOWN NOW<<",LINELENGTH);
            usleep(1);
            system("CLS");
            print(CENTRE,">SYSTEM WILL SHUT DOWN NOW<",LINELENGTH);
            usleep(1);
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