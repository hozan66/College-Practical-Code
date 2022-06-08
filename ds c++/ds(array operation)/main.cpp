
/////////////////////////////////
//                             //
//     Operations on Arrays    //
//                             //
/////////////////////////////////

#include <iostream>

using namespace std;

// n = number of elements in array
// size = size of array

const int siz=100;
int arr[siz], n;

// Function prototypes

void displayArr();
void addBeginning();
void addPosition();
void addEnd();
void deleteBeginning();
void deletePosition();
void deleteEnd();

int main() {

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " integer values: \n";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nCurrent array: ";
    displayArr();

    cout << endl << "Operation on arrays: ";

    int choice;
    do {

        cout << "\n\nPress 1: Add to beginning\n";
        cout << "Press 2: Add to any position\n";
        cout << "Press 3: Add to end\n";
        cout << "Press 4: Delete from beginning\n";
        cout << "Press 5: delete from any position\n";
        cout << "Press 6: Delete from end\n";
        cout << "Press 7: Display the Array\n";
        cout << "Press 8: Exit\n";

        cout << "\nEnter your choice: ";
        cin>>choice;

        switch(choice) {

            case 1: addBeginning();
                    break;

            case 2: addPosition();
                    break;

            case 3: addEnd();
                    break;

            case 4: deleteBeginning();
                    break;

            case 5: deletePosition();
                    break;

            case 6: deleteEnd();
                    break;

            case 7: displayArr();
                    break;

            case 8: break;

            default: cout << "Error: Wrong number!" << endl;
        }

    } while(choice != 8);

    return 0;

}

void displayArr() {

    cout << " [  ";

    for(int i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }

    cout << "]\n";


}

void addBeginning() {

    cout << "Current array: ";
    displayArr();

    int item;
    cout << "\nEnter the new element: ";
    cin >> item;

    // shift all elements from the bottom

    for(int i = n; i > 0; i--) {
        arr[i] = arr[i-1];
    }

    arr[0] = item;
    n++;

    cout << "Updated array: ";
    displayArr();

}

void addPosition() {

    cout << "Current array: ";
    displayArr();

    int item, pos;
    cout << "\nEnter the new element: ";
    cin >> item;

    cout << "Enter the position: ";
    cin >> pos;

    for(int i = n; i >= pos; i--) {
        arr[i] = arr[i-1];
    }

    arr[pos-1] = item;
    n++;

    cout << "Updated array: ";
    displayArr();

}

void addEnd() {

    cout << "Current array: ";
    displayArr();

    int item;
    cout << "\nEnter the new element: ";
    cin >> item;

    arr[n] = item;
    n++;

    cout << "Updated array: ";
    displayArr();

}


void deleteBeginning() {

    cout << "Current array: ";
    displayArr();

    for(int i = 0; i < n - 1; i++) {
        arr[i] = arr[i+1];
    }

    n--;

    cout << "Updated array: ";
    displayArr();

}

void deletePosition() {

    cout << "Current array: ";
    displayArr();

    int pos;
    cout << "\nEnter the position: ";
    cin>>pos;

    for(int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i+1];
    }

    n--;


    cout << "Updated array: ";
    displayArr();

}



void deleteEnd() {

    cout << "Current array: ";
    displayArr();

    n--;

    cout << "Updated array: ";
    displayArr();

}
