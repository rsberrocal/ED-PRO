#include <iostream>

using namespace std;

float toPounds(float kg) {
    return kg * 2.205;
}

void odd(int number) {
    if (number % 2 == 0) {
        cout << "IS AN EVEN NUMBER";
    } else {
        cout << "IS AN ODD NUMBER";
    }
    cout << endl;
}

string getCalendarDay(int day){
    if(day>7||day<0){
        return "Incorrect day";
    }
    string calendar[7] = {"Lunes","Martes","Miercoles","Jueves","Viernes","Sabado","Domingo"};
    return calendar[day];
}

int main() {
    /* EX 1
    cout << " _   _ ______  ______  _____  _____  _   __ _____  _" << endl;
    cout << "| | | || ___ \\ | ___ \\|  _  |/  __ \\| | / //  ___|| |" << endl;
    cout << "| | | || |_/ / | |_/ /| | | || /  \\/| |/ / \\ ‘--. | |" << endl;
    cout << "| | | || ___ \\ |    / | | | || |    |    \\  ‘--. \\| |" << endl;
    cout << "| |_| || |_/ / | |\\ \\ \\ \\_/ /| \\__/\\| |\\  \\/\\__/ /|_|" << endl;
    cout << " \\___/ \\____/  \\_| \\_| \\___/  \\____/\\_| \\_/\\____/ (_)" << endl;*/

    /* EX 2
    float kg;
    cout << "Give me your weight in kg" << endl;
    cin >> kg;
    cout << toPounds(kg) << endl;*/

    /* EX 3
    int number;
    cout << "Give me a number" << endl;
    cin >> number;
    odd(number);*/

    /* EX 4 */
    int day;
    cout << "Give a day number between 1-7" << endl;
    cin >> day;
    cout << getCalendarDay(day-1) << endl;
    return 0;
}