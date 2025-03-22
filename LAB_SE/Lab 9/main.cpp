#include"MusicPlayer.h"
int main()
{
	MusicPlayer m;
	m.addSongToPlaylist(Song{ 1002, "Vida Karo", "Arijit Singh", "Amar Singh Chamkila", 4 });
	m.addSongToPlaylist(Song{ 1003, "Labon ko", "KK", "Songs 2018", 5 });
	m.addSongToPlaylist(Song{ 1004, "Fasle", "QB & Noori", "Coke Stodio", 360 });
	m.moveBackward();
	m.addSongToPlaylist(Song{ 1005, "Tera Hone Laga Hoon", "Atif Aslam", "Ajab Prem Ki Ghazab Kahani", 4 });
	m.addSongToPlaylist(Song{ 1006, "Dil Chahta Hai", "Arijit Singh", "Amar Singh Chamkila", 4 });
	m.addSongToPlaylist(Song{ 1007, "Tere Bin", "Atif Aslam", "Ajab Prem Ki Ghazab Kahani", 4 });
	m.addSongToPlaylist(Song{ 1008, "Tum Hi Ho", "Arijit Singh", "Ashqui 2", 297 });
	m.playPlaylist();
	m.displayCurrentSong();
	return 0;
}