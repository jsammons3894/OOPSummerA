#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime>   

using namespace std;

struct Song {
    string title;
    Song* prev;
    Song* next;

    Song(string t) : title(t), prev(nullptr), next(nullptr) {}
};

class Playlist {
private:
    Song* head;
    Song* tail;
    Song* current;
    int size;

public:
    Playlist() : head(nullptr), tail(nullptr), current(nullptr), size(0) {
        srand(time(0)); //rendom generate for shuffle
    }

    void addSong(const string& title) {
        Song* newSong = new Song(title);
        if (!head) {
            head = tail = current = newSong;
        } else {
            tail->next = newSong;
            newSong->prev = tail;
            tail = newSong;
        }
        size++;
        cout << "Added: " << title << endl;
    }

    void removeSong(const string& title) {
        Song* temp = head;
        while (temp) {
            if (temp->title == title) {
                if (temp->prev)
                    temp->prev->next = temp->next;
                else
                    head = temp->next;

                if (temp->next)
                    temp->next->prev = temp->prev;
                else
                    tail = temp->prev;

                if (current == temp)
                    current = temp->next ? temp->next : temp->prev;

                delete temp;
                size--;
                cout << "Removed: " << title << endl;
                return;
            }
            temp = temp->next;
        }
        cout << "Song not found: " << title << endl;
    }

    void nextSong() {
        if (!current || !current->next) {
            cout << "No next song.\n";
        } else {
            current = current->next;
            cout << "Now Playing: " << current->title << endl;
        }
    }

    void prevSong() {
        if (!current || !current->prev) {
            cout << "No previous song.\n";
        } else {
            current = current->prev;
            cout << "Now Playing: " << current->title << endl;
        }
    }

    void shuffle() {
        if (size == 0) {
            cout << "Playlist is empty.\n";
            return;
        }

        int steps = rand() % size;
        Song* temp = head;
        for (int i = 0; i < steps; i++) {
            temp = temp->next;
        }
        current = temp;
        cout << "Shuffled to: " << current->title << endl;
    }

    void displayPlaylist() const {
        if (!head) {
            cout << "Playlist is empty.\n";
            return;
        }
        Song* temp = head;
        cout << "Current Playlist:\n";
        while (temp) {
            cout << "- " << temp->title << (temp == current ? " (Currently Playing)" : "") << endl;
            temp = temp->next;
        }
    }
};

void showMenu() { //display menu :))
    cout << "\n--- MENU ---\n";
    cout << "1. Add Song\n";
    cout << "2. Remove Song\n";
    cout << "3. Next Song\n";
    cout << "4. Previous Song\n";
    cout << "5. Shuffle\n";
    cout << "6. Display Playlist\n";
    cout << "7. Exit\n";
    cout << "------------\n";
    cout << "Select an option: ";
}

int main() {
    Playlist playlist;
    int choice;
    string title;

    do {
        showMenu();
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "Enter song title to add: ";
                getline(cin, title);
                playlist.addSong(title);
                break;
            case 2:
                cout << "Enter song title to remove: ";
                getline(cin, title);
                playlist.removeSong(title);
                break;
            case 3:
                playlist.nextSong();
                break;
            case 4:
                playlist.prevSong();
                break;
            case 5:
                playlist.shuffle();
                break;
            case 6:
                playlist.displayPlaylist();
                break;
            case 7:
                cout << "Exiting...\n";
                break;
            default:
                cout << "\nINVALID CHOICE\n";
        }

    } while (choice != 7);

    return 0;
}
