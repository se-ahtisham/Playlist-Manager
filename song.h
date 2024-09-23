#include <iostream>
#include <string>
using namespace std;

class Song {
private:
    string title;
    string artist;
    int duration;
    Song* next;

public:
    Song();

    Song* getNext();
    void setNext(Song* next);

    void setTitle(string title);
    void setArtist(string artist);
    void setDuration(int duration);

    string getTitle();
    string getArtist();
    int getDuration();
};