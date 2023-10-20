#include <iostream>

using namespace std;

int main() {
    
    cout << "Please enter a character: ";
    
    char chr;
    cin >> chr;
    
    char chrUpper = toupper(chr);
    
    int ascii = (int)chrUpper;
    
    if (ascii >= 65 && ascii <= 90) {
        switch (ascii) {
            case 65 : case 69 : case 73 : case 79 : case 85 : {
                cout << chr << " is a vowel" << endl;
                break;
            }
            default : {
                cout << chr << " is a consonant" << endl;
            }
    }
    }
    
    else if (ascii >= 48 && ascii <= 57)
        cout << chr << " is a digit" << endl;
        
    else { 
        switch (ascii) {
        case 33 : case 34 : case 44 : case 45 : case 46 : case 47 : case 58 : case 59 : case 63 : case 39 : {
            cout << chr << " is a punctuation" << endl;
            break;
        }
        default : {
            cout << chr << " is unrecognized" << endl;
        }
    }
    }
}
