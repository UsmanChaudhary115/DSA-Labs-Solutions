#include "Song.h"

ostream& operator<<(ostream& os, const Song& ref) {
    os << "songID: " << ref.songID << endl;
    os << "Title:  " << ref.title << endl;
    os << "Artist: " << ref.artist << endl;
    os << "Album: " << ref.album << endl;
    os << "Duration: " << ref.durationInSeconds / 60<< ':' << ref.durationInSeconds % 60 << endl;
    return os;
}
