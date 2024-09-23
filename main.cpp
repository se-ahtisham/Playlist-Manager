#include "playlist.h"
#include <iostream>
using namespace std;

int main() {
    cout << "\t\t ::::::::::::::::::::::::::::::::::::::" << endl;
    cout << "\t\t ::::::::::::  PLayit System  :::::::::::" << endl;
    cout << "\t\t ::::::::::::::::::::::::::::::::::::::" << endl;

    int mainChoice = 1;
    Playlist p1;
    string title;
    string artist;
    int duration;

    while (mainChoice != 0) {
        int choice;
        cout << "1. Press 1 to Insert At Head" << endl;
        cout << "2. Press 2 to Delete At Tail" << endl;
        cout << "3. Press 3 to Reverse Print" << endl;
        cout << "4. Press 4 to Find Largest Song" << endl;
        cout << "5. Press 5 to Find Song" << endl;
        cout << "6. Press 6 to Print All Songs" << endl; // Updated to 6
        cout << "   Please Enter Your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "Please Enter Song Title: ";
                cin >> title;
                cout << "Please Enter Song Artist Name: ";
                cin >> artist;
                cout << "Please Enter Song Duration: ";
                cin >> duration;
                p1.insertAtHead(title, artist, duration);
                cout << endl;
            } break;

            case 2: {
                cout << endl;
                p1.deleteAtTail();
                cout << "Song deleted from the tail." << endl;
                cout << endl;
            } break;

            case 3: {
                cout << "Reverse Print:" << endl;
                p1.reversePrint(p1.getHead()); // Assuming you add a getHead() method
                cout << endl;
            } break;

            case 4: {
                p1.findLargest();
            } break;

            case 5: {
                cout << "Please Enter Song Title to Find: ";
                cin >> title;
                int index = p1.findSong(title);
                if (index != -1) {
                    cout << "Song found at index: " << index << endl;
                } else {
                    cout << "Song not found." << endl;
                }
            } break;

            case 6: {
                cout << endl;
                p1.printAll();
                cout << endl;
            } break;

            default: {
                cout << endl;
                cout << "Invalid Input" << endl;
            } break;
        }

        cout << endl;
        cout << ">>> Please Enter Your Choice (0 to Exit) >>>  ";
        cin >> mainChoice;
    }

    return 0;
}
