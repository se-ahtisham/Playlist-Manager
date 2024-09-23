#include "playlist.h"
#include <iostream>

Playlist::Playlist() {
    head = nullptr;
    count = 0;
}

void Playlist::insertAtHead(string title, string artist, int duration) {
    Song* newSong = new Song();
    newSong->setTitle(title);
    newSong->setArtist(artist);
    newSong->setDuration(duration);
    newSong->setNext(head);
    head = newSong;
    count++;
}

void Playlist::deleteAtTail() {
    if (head == nullptr) return; // Empty playlist
    if (head->getNext() == nullptr) { // Only one song
        delete head;
        head = nullptr;
    } else {
        Song* current = head;
        while (current->getNext()->getNext() != nullptr) {
            current = current->getNext();
        }
        delete current->getNext();
        current->setNext(nullptr);
    }
    count--;
}

void Playlist::reversePrint(Song* temp) {
    if (temp == nullptr) return;
    reversePrint(temp->getNext());
    cout << "Title: " << temp->getTitle() << ", Artist: " << temp->getArtist() << ", Duration: " << temp->getDuration() << endl;
}

void Playlist::findLargest() {
    if (head == nullptr) return; // Empty playlist

    Song* current = head;
    Song* largest = head; // Initialize largest to the head

    while (current != nullptr) {
        if (current->getDuration() > largest->getDuration()) {
            largest = current; // Update largest if current is longer
        }
        current = current->getNext();
    }

    cout << "Longest Song: " << largest->getTitle() << " by " << largest->getArtist() << " (" << largest->getDuration() << " seconds)" << endl;
}


int Playlist::findSong(string name) {
    int index = 0;
    Song* current = head;
    while (current != nullptr) {
        if (current->getTitle() == name) {
            return index; // Return the index of the song
        }
        current = current->getNext();
        index++;
    }
    return -1; // Song not found
}

void Playlist::printAll() {
    Song* current = head;
    while (current != nullptr) {
        cout << "Title: " << current->getTitle() << ", Artist: " << current->getArtist() << ", Duration: " << current->getDuration() << " seconds" << endl;
        current = current->getNext();
    }
}
