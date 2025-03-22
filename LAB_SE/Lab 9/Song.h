#ifndef SONG_H
#define SONG_H

#include <iostream>
using namespace std;

class Song 
{
    friend ostream& operator<<(ostream&, const Song&); 
public:
    int songID;
    string title;
    string artist;
    string album;
    int durationInSeconds;

    Song() : songID(0), durationInSeconds(0) {}
    Song(int id) : songID(id), durationInSeconds(0) {}
    Song(int id, string t, string a, string al, int dur): songID(id), title(t), artist(a), album(al), durationInSeconds(dur) 
    {}

    bool operator==(const Song& ref) 
    {
        return (ref.songID == songID);
    }
}; 
#endif  // !SONG_H
