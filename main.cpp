// Started at 4:31 5-1-2022

// Section 9
// While Loop
#include <iostream>

using namespace std;

int main() {
    
//    int num{};
//    cout << "Enter a positive integer - start with countdown: ";
//    cin >> num;
//    
//    while (num > 0) {
//        cout << num << endl;
//        --num;
//    }
//    cout << "Blastoff!" << endl;
    
//    int num{};
//    cout << "Enter a positive integer to count up to: ";
//    cin >> num;
//    
//    int i{1};
//    while (num >= i) {
//        cout << i << endl;
//        i++;
//    }
    
//    int number {};
//    
//    cout << "Enter an integer less than 100: ";
//    cin >> number;
//    
//    while (number >= 100) { // !(number < 100)
//        cout << "Enter an integer less than 100: ";
//        cin >> number;
//    }
//    
//    cout << "Thanks" << endl;

    bool done {false};
    int number {0};
    
    while (!done) {
        cout << "Enter an integer between 1 and 5: ";
        cin >> number;
        if (number <= 1 || number >= 5) 
            cout << "Out of range, try again" << endl;
        else {
            cout << "Thanks!" << endl;
            done = true;
        }
    }
    
    cout << endl;
    return 0;
}

// Section 9
// Do-while
// Simple Menu Example
#include <iostream>


using namespace std;

int main() {
    
    char selection {};
    do {
        cout << "\n-------------------------" << endl;
        cout << "1. Do this" << endl;
        cout << "2. Do that" << endl;
        cout << "3. Do something else" << endl;
        cout << "Q. Quit" << endl;
        cout << "\nEnter your selection: ";
        cin >> selection;
        
        if (selection == '1') 
            cout << "You chose 1 - doing this" << endl;
        else if (selection == '2')
            cout << "You chose 2 - doing that" << endl;
        else if (selection == '3')
            cout << "You chose 3 - doing something else" << endl;
        else if (selection == 'Q' || selection == 'q')
            cout << "Goodbye..." << endl;
        else 
            cout << "Unknown option -- try agian..." << endl;
            
    } while (selection != 'q' && selection != 'Q');
    
    cout << endl;
    return 0;
}

// Section 9
// Nested Loops - Multiplication Table

#include <iostream>

using namespace std;

int main() {
    
    for (int num1 {1}; num1 <= 10; ++num1) {
        for (int num2 {1}; num2 <= 10; ++num2) {
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        }
        cout << "----------" << endl;
    }
    
    cout << endl;
    return 0;
}

// Ended at 7:32 5-1-2022
