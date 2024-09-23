class Playlist {
private:
    Song* head;
    int count;

public:
    Playlist();

    void insertAtHead(string title, string artist, int duration);
    void deleteAtTail();
    void reversePrint(Song* temp);
    void findLargest();
    int findSong(string name);
    void printAll();
};