#include "song.h"

Song::Song() {
    title = "";
    artist = "";
    duration = 0;
    next = nullptr; // Initialize next pointer
}

void Song::setNext(Song* nextSong) {
    next = nextSong;
}

Song* Song::getNext() {
    return next;
}

void Song::setTitle(string title) {
    this->title = title;
}

void Song::setArtist(string artist) {
    this->artist = artist;
}

void Song::setDuration(int duration) {
    this->duration = duration;
}

string Song::getTitle() {
    return title;
}

string Song::getArtist() {
    return artist;
}

int Song::getDuration() {
    return duration;
}
